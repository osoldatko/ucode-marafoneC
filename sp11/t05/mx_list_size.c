#include "list.h"

int mx_list_size(t_list *list) {
    if (list == NULL) {
        return 0;
    }
    int size = 0;
    t_list *te = list;
    while (te != NULL) {
        ++size;
        te = te->next;
    }
    return size;
}


