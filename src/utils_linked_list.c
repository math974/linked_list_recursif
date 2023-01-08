/*
** ** EPITECH PROJECT, 2022
** ** utils_linked_list.c
** ** File description:
** ** utils linked list
** */

#include "../include/linked_list.h"

size_t linked_list_get_size(list_t l)
{
    return (!l) ? 0 : (linked_list_get_size(l->next) + 1);
}

bool linked_is_empty(list_t l)
{
    return ((!l) ? true : false);
}

