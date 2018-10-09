#include <stdio.h>

#include "lib_struct.h"
#include "lib_void.h"

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

    //
    // void* type handle
    //
    void_handle_t does_compile;

    void_handle_t hv = lib_void_create_handle();

    lib_void_set_value(hv, 1337);

    printf("void* handle value is %d\n", lib_void_get_value(hv));

    lib_void_destroy_handle(hv);

    return 0;
}
