/*
** EPITECH PROJECT, 2020
** Code_CSFML
** File description:
** entity
*/

//----------------------------------------------------------------------------
// Voici le fichier ou se trouve les fonction que tu devras coder.
// Il y a 5 fonctions à faire, bonne chance!
// (N'hésites pas à poser des questions si quelque chose n'est pas clair)
//----------------------------------------------------------------------------

#include "entity.h"

/*
Initialise la taille (entities.size) de la structure.
*/
entites_array_t create_entites_array(void)
{
    entites_array_t entites_array;

    entites_array.size = 0;
    return (entites_array);
}

/*
Crée une nouvelle entity et ajoute la dans le tableau (entites_array.entities).
Composantes à initialiser:
- display (par défaut à true)
- positon
- velocity
- sprite (utilise la fonction sfSprite_create)
- texture (utilise la fonction sfTexture_createFromFile)
- clock (utilise la fonction sfClock_create)
Il faudra également mettre à jour la valeur de entites_array.size, celle-ci 
augmentant de 1 à chaque fois qu'une entité est ajoutée.
*/
entites_array_t add_entity(entites_array_t entites_array, sfVector2f positon, \
sfVector2f velocity, char *path)
{
    entity_t entity;
    int size = entites_array.size;

    // Code ici !
    // --------------


    // --------------
    entites_array.entities[size] = entity;
    return (entites_array);
}

/*
Mets à jour la positon des entités à l'aide de leur vélocité.
Le faire si uniquement le nombe de seconds passé est > 1.0.
(utilise la fonction sfClock_restart et sfSprite_setPosition)
*/
entites_array_t update_entities(entites_array_t entites_array)
{
    sfTime time;
    float seconds;

    for (unsigned int index = 0; index != entites_array.size; index++) {
        time = sfClock_getElapsedTime(entites_array.entities[index].clock);
        seconds = time.microseconds / 1000000.0;
        // Code ici !
        // --------------


        // --------------
    }
    return (entites_array);
}

/*
Affiches sur l'écran les entités de entites_array (entites_array.entities).
Il ne faut afficher que les entités qui ont display == true.
(utilise la fonction sfRenderWindow_drawSprite)
*/
void display_entities(sfRenderWindow *window, entites_array_t entites_array)
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
void destroy_entities(entites_array_t entites_array)
{
    // Code ici !
    // --------------


    // --------------
}