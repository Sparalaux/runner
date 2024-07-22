#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "movement.h"

int move_asteroid(Entity *asteroid)
{
    if (asteroid->pos_x > -200)
    {
        asteroid->pos_x -= 4;
    }
    if (asteroid->pos_x == -200)
    {
        asteroid->pos_x = 800;
    }

    return 0;
}

int move_ennemi(Entity *ennemi)
{
    if (ennemi->pos_y < 400)
    {
        ennemi->pos_y += 2;
    }
    if (ennemi->pos_y == 400)
    {
        ennemi->pos_y = 0;
    }
    return 0;
    
}