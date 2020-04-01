#include <iostream>
#include "mandelbrhot.h"
#include "sdl-library.h"
#include <cstdlib>

int main() {
	bool    quit = false;
	bool    clicked = false;
	bool    changes = true;

	SDL_Library Library;
	MandelbrhotSet  Set({0,0});
	unsigned    pixels[WIN_WIDTH * WIN_HEIGHT];

	while (!quit) {
		if (changes) {
			Set.IterateThroughArray(pixels);
			Library.DrawCanvas(pixels);
			changes = false;
//			quit = true;
		}
		while (SDL_PollEvent(&Library.ev_)) {
			switch (Library.ev_.type) {
				case SDL_QUIT:  quit = true; break;
				case SDL_KEYDOWN:
					switch (Library.ev_.key.keysym.sym) {
						case SDLK_ESCAPE:
							quit = true;
							break;
					};
				case SDL_MOUSEBUTTONDOWN:
					clicked = true;
					break;
				case SDL_MOUSEBUTTONUP:
					clicked = false;
					break;
				case SDL_MOUSEMOTION:
					if (clicked) {
						Set.ChangeFirstValue(Library.ev_.motion.x, Library.ev_.motion.y);
						changes = true;
					}
					break;
			}
		}
	}
	return 0;
}
