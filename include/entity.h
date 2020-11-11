/*
** EPITECH PROJECT, 2020
** Code_CSFML
** File description:
** entity
*/

#include <SFML/System/Time.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <stdlib.h>
#include <stdbool.h>

#ifndef ENTITY_H_
#define ENTITY_H_

#define ENTITES_MAX 100

typedef struct entity_s entity_t;
typedef struct entites_array_s entites_array_t;

struct entity_s
{
    sfVector2f positon;
    sfVector2f velocity;
    sfSprite *sprite;
    sfTexture *texture;
    sfClock *clock;
    bool display;
};

struct entites_array_s
{
    entity_t entities[ENTITES_MAX];
    int size;
};

entites_array_t create_entites_array(void);
entites_array_t add_entity(entites_array_t entites_array, \
sfVector2f positon, sfVector2f velocity, char *path);
entites_array_t update_entities(entites_array_t entites_array);
void display_entities(sfRenderWindow *window, entites_array_t entites_array);
void destroy_entities(entites_array_t entites_array);

#endif /* !ENTITY_H_ */