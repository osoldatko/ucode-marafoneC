#include "../inc/list.h"

int mx_list_size(t_list *list) {
    int coun = 0;
    while (list) {
        list = list -> next;
        coun++;
    }
    return coun;
}


