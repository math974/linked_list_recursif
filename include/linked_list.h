/*
** ** EPITECH PROJECT, 2022
** ** linked_list.h
** ** File description:
** ** linked list
** */

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

#include <stdbool.h>
#include <stdlib.h>

typedef struct list_s *list_t;
struct list_s {
    void *data;
    struct list_s *next;
};

typedef struct data_dict_s {
    char *key;
    char *value;
} data_dict_t;

void add_front(list_t *t, void *data);
void add_pos(list_t *t, void *data, int pos);
void add_back(list_t *t, void *data);
void del_front(list_t *t);
void del_pos(list_t *t, int pos);
void del_back(list_t *t);
bool linked_is_empty(list_t l);
size_t linked_list_get_size(list_t l);
void free_list(list_t *t);

void display_linked_list(list_t t);

#endif /* LINKED_LIST_H_ */
