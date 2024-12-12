#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H
typedef struct {
    int *numbers;
    size_t size;
    size_t capacity;
} *DynamicArray;

DynamicArray *createArray(size_t starting_capacity);
void append(DynamicArray *vector, int value);

#endif DYNAMIC_ARRAY_H
