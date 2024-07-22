#include "entity.h"

void initPlayer(Win *app, Entity *player)
{
    player->pos_x = 0;
    player->pos_y = 200;
    player->width = 150;
    player->height = 150;
    player->texture = loadTexture(app, "ressource/player.png");
}

Entity *initAsteroid(Win *app, Entity *asteroid)
{
    asteroid->pos_x = 800;
    asteroid->pos_y = random_nb(-15, 400);
    asteroid->width = 150;
    asteroid->height = 150;
    asteroid->texture = loadTexture(app, "ressource/asteroid1.png");
    return asteroid;
}

Entity *initEnnemi(Win *app, Entity *ennemi)
{
    ennemi->pos_x = 650;
    ennemi->pos_y = 0;
    ennemi->width = 150;
    ennemi->height = 150;
    ennemi->texture = loadTexture(app, "ressource/ennemi.png");
    return ennemi;
}

void initRouille(Win *app, Entity *rouille)
{
    rouille->pos_x = 200;
    rouille->pos_y = 400;
    rouille->width = 150;
    rouille->height = 150;
    rouille->texture = loadTexture(app, "ressource/rouille.png");
}