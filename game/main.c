#include <stdio.h>
#include <stdbool.h>
#define SDL_MAIN_HANDLED
#include "core/init.h"

int main(int argc, char* argv[]) {
    if (!engine_init("My Game Engine", 800, 600)) {
        return 1;
    }

    bool running = true;
    SDL_Event event;

    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                running = false;
            }
        }

        SDL_SetRenderDrawColor(engine_get_renderer(), 0, 0, 0, 255);
        SDL_RenderClear(engine_get_renderer());

        // TODO: Game rendering here

        SDL_RenderPresent(engine_get_renderer());
    }

    engine_shutdown();
    return 0;
}
