#include <iostream>

#include <SDL3/SDL.h>
#include <SDL3/SDL_video.h>

int main()
{
	SDL_Window* window = SDL_CreateWindow(
		"Basics", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
		500, 500, 0);

	while (1)
	{
		SDL_Event event;
		SDL_PollEvent(&event);

	}

	return 0;
}
