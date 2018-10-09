#ifndef _LIB_VOID_H_
#define _LIB_VOID_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef void* void_handle_t;

void_handle_t lib_void_create_handle ();

void lib_void_set_value (void_handle_t h, int value);

int lib_void_get_value (const void_handle_t h);

void lib_void_destroy_handle (void_handle_t h);

#ifdef __cplusplus
}
#endif

#endif // _LIB_VOID_H_
