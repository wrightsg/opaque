#ifndef _LIB_STRUCT_H_
#define _LIB_STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

// Using a typedef here avoid having to type "struct handle" everywhere
typedef struct handle handle_t;

handle_t* lib_struct_create_handle ();

void lib_struct_set_value (handle_t* h, int value);

int lib_struct_get_value (const handle_t* h);

void lib_struct_destroy_handle (handle_t* h);

#ifdef __cplusplus
}
#endif

#endif // _LIB_STRUCT_H_
