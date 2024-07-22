#include <stdio.h>
#include "input.h"

int input_handler(Entity *entity)
{
    SDL_Event event;

    SDL_PollEvent(&event);

    switch (event.type)
    {
    case SDL_QUIT:
        return -1;
    case SDL_KEYDOWN:
        switch (event.key.keysym.sym)
        {
        case SDLK_UP:
            entity->pos_y -= 4;
            if (entity->pos_y < -15)
                entity->pos_y += 4;
            break;
        case SDLK_DOWN:
            entity->pos_y += 4;
            if (entity->pos_y > 400)
                entity->pos_y -= 4;
            break;
        case SDLK_LEFT:
            entity->pos_x -= 4;
            if (entity->pos_x < -30)
                entity->pos_x += 4;
            break;
        case SDLK_RIGHT:
            entity->pos_x += 4;
            if (entity->pos_x > 515)
                entity->pos_x -= 4;
            break;
        case SDLK_ESCAPE:
            exit(-1);
        }
        break;

    case SDL_KEYUP:
        break;

    default:
        break;
    }

    return 0;
}