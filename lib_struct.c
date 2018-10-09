#include "lib_struct.h"

#include <string.h>
#include <stdlib.h>

struct struct_handle
{
    int value;
};

struct_handle_t* lib_struct_create_handle ()
{
    struct_handle_t* h = malloc(sizeof(struct_handle_t));

    memset(h, 0, sizeof(struct_handle_t));

    return h;
}

void lib_struct_set_value (struct_handle_t* h, int value)
{
    h->value = value;
}

int lib_struct_get_value (const struct_handle_t* h)
{
    return h->value;
}

void lib_struct_destroy_handle (struct_handle_t* h)
{
    free(h);
}
