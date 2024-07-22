#ifndef ENTITY
#define ENTITY

#include "window.h"
#include "draw.h"
#include "random.h"

void initPlayer(Win *app, Entity *player);
Entity *initAsteroid(Win *app, Entity *asteroid);
Entity *initEnnemi(Win *app, Entity *ennemi);
void initRouille(Win *app, Entity *rouille);

#endif /* !ENTITY */