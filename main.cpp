#include <iostream>
#include "mandelbrhot.h"
#include "sdl-library.h"
#include <cstdlib>
#include <vector>

int main() {
	bool    quit = false;
	bool    clicked = false;
	bool    changes = true;

	SDL_Library Library;
	MandelbrhotSet  Set({-0.743639266077433 , 0.131824786875559});
	Set.ChangeRotationByAngle(30);
	MandelbrhotSet  Set2({-0.743639266077433 , 0.131824786875559});
	Set2.ChangeRotationByAngle(-60);
	std::vector<unsigned >  pixels(WIN_WIDTH * WIN_HEIGHT);

	Set.ChangeRotationByAngle(0);

	while (!quit) {
		if (changes) {
			bzero(pixels.data(), pixels.size() * sizeof(unsigned));
			Set.IterateThroughArray(pixels);
			Set2.IterateThroughArray(pixels);
			Library.DrawCanvas(pixels);
			changes = false;
		}
		while (SDL_PollEvent(&Library.ev_)) {
			switch (Library.ev_.type) {
				case SDL_QUIT:  quit = true; break;
				case SDL_KEYDOWN:
					switch (Library.ev_.key.keysym.sym) {
						case SDLK_ESCAPE:
							quit = true;
							break;
						case    SDLK_s:
#ifdef SCREENSHOT
							Library.TakeScreenShot(pixels);
#endif
							break;
						case    SDLK_q:
							Set.ChangeRotationByAngle(15);
							changes = true;
							break;
						case    SDLK_e:
							Set.ChangeRotationByAngle(-15);
							changes = true;
							break;
					};
					break;
				case SDL_MOUSEBUTTONDOWN:
					clicked = true;
					break;
				case SDL_MOUSEBUTTONUP:
					clicked = false;
					break;
				case SDL_MOUSEMOTION:
					Library.prevx = Library.ev_.motion.x;
					Library.prevy = Library.ev_.motion.y;
					if (clicked) {
						Set.ChangeFirstValue(Library.ev_.motion.x, Library.ev_.motion.y);
						changes = true;
					}
					break;
				case SDL_MOUSEWHEEL:
					Set.ChangeMeasures(Library.ev_.wheel.y, Library.prevx, Library.prevy);
					changes = true;
					break;
			}
		}
	}
	return 0;
}
