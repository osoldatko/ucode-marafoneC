#include "../inc/list.h"

t_list *mx_create_node(void *data) {
    if (!data) {
        return NULL;
    }
    t_list *new_n = (t_list *)malloc(sizeof(t_list));
    if (!new_n) {
        return NULL;
    }
    new_n->data = data;
    new_n->next = NULL;
    return new_n;
}


