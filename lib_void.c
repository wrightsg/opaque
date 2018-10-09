#include "lib_void.h"

#include <string.h>
#include <stdlib.h>

struct handle
{
    int value;
};

void_handle_t lib_void_create_handle ()
{
    struct handle* h = malloc(sizeof(struct handle));

    memset(h, 0, sizeof(struct handle));

    return h;
}

void lib_void_set_value (void_handle_t h, int value)
{
    ((struct handle*)h)->value = value;
}

int lib_void_get_value (const void_handle_t h)
{
    return ((const struct handle*)h)->value;
}

void lib_void_destroy_handle (void_handle_t h)
{
    free(h);
}
