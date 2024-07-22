#ifndef WINDOW
#define WINDOW

#include <SDL2/SDL.h>

#define WINDOW_NAME "Space Clocker"
#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600

typedef struct
{
    SDL_Window *window;
    SDL_Renderer *renderer;
} Win;

#endif /* WINDOW */