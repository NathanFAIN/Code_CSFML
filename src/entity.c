/*
** EPITECH PROJECT, 2020
** Code_CSFML
** File description:
** entity
*/

//----------------------------------------------------------------------------
// Voici le fichier ou se trouve les fonctions que tu devras coder.
// Il y a 5 fonctions à faire, bonne chance!
// (N'hésites pas à poser des questions si quelque chose n'est pas clair)
//----------------------------------------------------------------------------

#include "entity.h"

/*
Initialise la taille (entities.size) de la structure.
*/
entities_array_t create_entities_array(void)
{
    entities_array_t entities_array = {0};

    // Code ici !
    // --------------


    // --------------
    return (entities_array);
}

/*
Crée une nouvelle entity et ajoute la dans le tableau (entities_array.entities).
Composantes à initialiser:
- position
- velocity
- sprite (utilise la fonction sfSprite_create)
- texture (utilise la fonction sfTexture_createFromFile)
- clock (utilise la fonction sfClock_create)
Il faudra également mettre à jour la valeur de entities_array.size, celle-ci 
augmentant de 1 à chaque fois qu'une entité est ajoutée.
*/
entities_array_t add_entity(entities_array_t entities_array, sfVector2f position, \
sfVector2f velocity, char *path)
{
    entity_t entity;
    int size = entities_array.size;

    // Code ici !
    // --------------

    entity.position = position;
    entity.velocity = velocity;
    entity.sprite = sfSprite_create();
    entity.texture = sfTexture_createFromFile(path, NULL);
    entity.clock = sfClock_create();
    sfSprite_setTexture(entity.sprite, entity.texture, sfTrue);
    sfSprite_setPosition(entity.sprite, entity.position);

    entities_array.size += 1;

    // --------------
    entities_array.entities[size] = entity;
    return (entities_array);
}

/*
Mets à jour la position des entités à l'aide de leur vélocité.
Le faire si uniquement le nombe de seconds passé est > 1.0.
(utilise la fonction sfClock_restart et sfSprite_setPosition)
*/
entities_array_t update_entities(entities_array_t entities_array)
{
    sfTime time;
    float seconds;

    for (int index = 0; index < entities_array.size; index++) {
        time = sfClock_getElapsedTime(entities_array.entities[index].clock);
        seconds = time.microseconds / 1000000.0;
        // Code ici !
        // --------------


        // --------------
    }
    return (entities_array);
}

/*
Affiches sur l'écran les entités de entities_array (entities_array.entities).
(utilise la fonction sfRenderWindow_drawSprite)
*/
void display_entities(sfRenderWindow *window, entities_array_t entities_array)
{
    // Code ici !
    // --------------


    // --------------
}

/*
Détruis toutes les entités :
Pour chaque entité, tu dois détruire sa texture et son sprite.
(utilise la fonction sfTexture_destroy et sfSprite_destroy)
*/
void destroy_entities(entities_array_t entities_array)
{
    // Code ici !
    // --------------


    // --------------
}