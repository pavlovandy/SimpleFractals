//
// Created by Arin on 31/03/2020.
//

#ifndef SOMEFRACTS_SDL_LIBRARY_H
#define SOMEFRACTS_SDL_LIBRARY_H

#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <cstdlib>

const std::size_t WIN_WIDTH = 1200;
const std::size_t WIN_HEIGHT = 720;

class SDL_Library {
public:
	SDL_Library();
	~SDL_Library();
	SDL_Library(const SDL_Library &) = delete;
	SDL_Library & operator=(const SDL_Library &) = delete;



	inline void DrawCanvas(unsigned*   pixels) {
		SDL_UpdateTexture(texture_, nullptr, pixels, 4 * WIN_WIDTH);
		SDL_RenderCopy(renderer, texture_, nullptr, nullptr);
		SDL_RenderPresent(renderer);
	}

public:

	SDL_Window* window_;
	SDL_Event   ev_;
	SDL_Texture*    texture_;
	SDL_Renderer*     renderer;
	TTF_Font*    font_;
};

#endif //SOMEFRACTS_SDL_LIBRARY_H
