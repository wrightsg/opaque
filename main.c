#include <stdio.h>

#include "lib_struct.h"

int main ()
{
    //
    // struct type handle
    //
    //struct_handle_t does_not_compile;

    struct_handle_t* hs = lib_struct_create_handle();

    lib_struct_set_value(hs, 42);

    printf("struct handle value is %d\n", lib_struct_get_value(hs));

    lib_struct_destroy_handle(hs);

    return 0;
}
