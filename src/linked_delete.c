/*
** ** EPITECH PROJECT, 2022
** ** linked_delete.c
** ** File description:
** ** linked list remove
** */

#include "../include/linked_list.h"

#include <stdio.h>

void del_front(list_t *t)
{
    list_t tmp = *t;

    if (!(*t))
        return;
    *t = (*t)->next;
    free(tmp);
}

void del_pos(list_t *t, int pos)
{
    return (pos <= 0 || !(*t)) ? del_front(t) : del_pos(&(*t)->next, pos - 1);
}

void del_back(list_t *t)
{
    return (!(*t) || !(*t)->next) ? del_front(t) : del_back(&(*t)->next);
}

void free_list(list_t *t)
{
    del_front(t);
    return (*t) ? free_list(t) : 0;
}

