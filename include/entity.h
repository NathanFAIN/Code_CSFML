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

#define ENTITIES_MAX 100

typedef struct entity_s entity_t;
typedef struct entities_array_s entities_array_t;

struct entity_s
{
    sfVector2f positon;
    sfVector2f velocity;
    sfSprite *sprite;
    sfTexture *texture;
    sfClock *clock;
};

struct entities_array_s
{
    entity_t entities[ENTITIES_MAX];
    int size;
};

entities_array_t create_entities_array(void);
entities_array_t add_entity(entities_array_t entities_array, \
sfVector2f positon, sfVector2f velocity, char *path);
entities_array_t update_entities(entities_array_t entities_array);
void display_entities(sfRenderWindow *window, entities_array_t entities_array);
void destroy_entities(entities_array_t entities_array);

#endif /* !ENTITY_H_ */