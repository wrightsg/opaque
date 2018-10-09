#include <stdio.h>

#include "lib_struct.h"

int main ()
{
    //handle_t does_not_compile;

    handle_t* h = lib_struct_create_handle();

    lib_struct_set_value(h, 42);

    printf("handle value is %d\n", lib_struct_get_value(h));

    lib_struct_destroy_handle(h);

    return 0;
}
