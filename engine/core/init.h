#ifndef ENGINE_INIT_H
#define ENGINE_INIT_H

#include <stdbool.h>
#include <SDL2/SDL.h>

bool engine_init(const char* title, int width, int height);
void engine_shutdown();
SDL_Renderer* engine_get_renderer();

#endif
