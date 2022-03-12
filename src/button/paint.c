/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void button_paint(window_t *window, sfMouseButtonEvent coord, map_t *map)
{
    if (((coord.x >= 558 && coord.x <= 725) &&
        (coord.y >= 18 && coord.y <= 91)) && window->menu == false) {
        if (map->bool_barre == 1) {
            map->is_editing = 1;
            map->bool_barre = 0;
        } else {
            map->bool_barre = 1;
            map->is_editing = 0;
        }
    }
}