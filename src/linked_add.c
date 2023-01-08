/*
** ** EPITECH PROJECT, 2022
** ** linked_list.c
** ** File description:
** ** linked list recursif
** */

#include "../include/linked_list.h"

void add_front(list_t *t, void *data)
{
    list_t tmp = malloc(sizeof(struct list_s));

    if (!tmp)
        return;
    tmp->data = data;
    tmp->next = *t;
    *t = tmp;
}

void add_pos(list_t *t, void *v, int pos)
{
    return (pos <= 0 || !(*t)) ? add_front(t, v) :
        add_pos(&(*t)->next, v, pos - 1);
}

void add_back(list_t *t, void *data)
{
    return (!(*t)) ? add_front(t, data) : add_back(&(*t)->next, data);
}

