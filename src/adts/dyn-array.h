#ifndef DYNAMIC_ARR_H
#define DYNAMIC_ARR_H

#include <stdint.h>

#include "../utils/index-types.h"

struct _arr_el {
    void* el;
    int removed;
};

typedef struct _arr_el ARR_EL;

typedef struct _dyn_array DYN_ARRAY;

DYN_ARRAY* initialize_dynarr(int64_t (*f_index)(const void*));

void clear_dynarr(DYN_ARRAY **array);

int64_t get_len_dynarr(DYN_ARRAY **array);

ARR_EL *get_raw_dyarr(DYN_ARRAY **array);

void* get_dynarr(int64_t i, DYN_ARRAY **array);

int64_t find_pos_dynarr(int64_t index, DYN_ARRAY **array);

int insert_last_dynarr(void* el, DYN_ARRAY **array);

int insert_ord_dynarr(void* el, DYN_ARRAY **array);

int remove_dynarr(int64_t index, DYN_ARRAY **array);

#endif