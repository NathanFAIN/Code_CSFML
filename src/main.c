/*
** EPITECH PROJECT, 2020
** Code_CSFML
** File description:
** main
*/

#include "entity.h"

//--------------Creation-de-la-fenettre--------------
sfRenderWindow *create_window()
{
    sfRenderWindow *new_window;
    sfVideoMode video_mode;

    video_mode.bitsPerPixel = 32;
    video_mode.width = 1920;
    video_mode.height = 1080;
    new_window = sfRenderWindow_create(video_mode, "~", sfClose, NULL);
    if (new_window == NULL)
        exit(84);
    sfRenderWindow_setPosition(new_window, (sfVector2i){0, 0});
    sfRenderWindow_setFramerateLimit(new_window, 60);
    return (new_window);
}

//--------------Récupération-des-évènements--------------
void manage_event_window(sfRenderWindow *window)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed) {
            sfRenderWindow_close(window);
        }
    }
}

int main(void)
{
    sfRenderWindow *window = create_window();
    entites_array_t entites_array = create_entites_array();
    if (window == NULL)
        return (EXIT_FAILURE);
    entites_array = add_entity(entites_array, (sfVector2f){0, 0}, \
    (sfVector2f){10, 0}, "resource/octocat.png");
    while (sfRenderWindow_isOpen(window)) {
        manage_event_window(window);
        entites_array = update_entities(entites_array);
        sfRenderWindow_clear(window, sfBlack);
        display_entities(window, entites_array);
        sfRenderWindow_display(window);
    }

    destroy_entities(entites_array);
    sfRenderWindow_destroy(window);
    return (EXIT_SUCCESS);
}