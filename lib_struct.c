#include "lib_struct.h"

#include <string.h>
#include <stdlib.h>

struct handle
{
    int value;
};

handle_t* lib_struct_create_handle ()
{
    handle_t* h = malloc(sizeof(handle_t));

    memset(h, 0, sizeof(handle_t));

    return h;
}

void lib_struct_set_value (handle_t* h, int value)
{
    h->value = value;
}

int lib_struct_get_value (const handle_t* h)
{
    return h->value;
}

void lib_struct_destroy_handle (handle_t* h)
{
    free(h);
}
