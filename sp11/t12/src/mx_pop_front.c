#include "../inc/list.h"

void mx_pop_front(t_list **list) {
    if(*list == NULL || list == NULL) {
        return;
    }
    if((*list)->next == NULL) {
        free(*list);
        *list= NULL;
        return;
    }
    t_list *nodes = *list;
    nodes = nodes->next;
    free(*list);
    (*list) = NULL;
    *list = nodes;
}


