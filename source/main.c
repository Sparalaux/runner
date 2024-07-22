#include <stdio.h>
#include <stdbool.h>
#include "window.h"
#include "input.h"
#include "draw.h"
#include "init.h"
#include "entity.h"
#include "random.h"
#include "movement.h"

int main()
{
    Win *app = malloc(sizeof(Win));
    Entity *player = malloc(sizeof(Entity));
    Entity *asteroid = malloc(sizeof(Entity));
    Entity *ennemi = malloc(sizeof(Entity));
    Entity *rouille = malloc(sizeof(Entity));
    bool game = true;

    if (initSDL(app) < 0)
    {
        return -1;
    }

    initPlayer(app, player);
    initEnnemi(app, ennemi);
    initRouille(app, rouille);
    initAsteroid(app, asteroid);


    while (game == true)
    {
        // while (input_handler(player) == 0){}

        prepareCanvas(app);
        input_handler(player);
        drawEntity(app, player);
        drawEntity(app, asteroid);
        drawEntity(app, ennemi);
        drawEntity(app, rouille);
        move_asteroid(asteroid);
        move_ennemi(ennemi);
        presentCanvas(app);
        SDL_Delay(16);
    }

    return 0;
}