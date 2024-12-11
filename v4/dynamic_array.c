#include"dynamic_array.h"

#include<stdlib.h>
#include<stdio.h>

DynamicArray *createArray(size_t starting_capacity){
    DynamicArray *vector = malloc(sizeof(DynamicArray));
    if(vector == NULL){
        fprintf(stderr,"Unable to allocate memory\n");
    }
    vector->numbers = malloc(sizeof(int)*starting_capacity);
    vector->size=0;
    vector->capacity = starting_capacity;

}

append(DynamicArray *vector, int number){
    if(vector->size >= vector->capacity){
        vector->capacity = vector->capacity*2;
        vector->numbers = realloc(number, sizeof(int)*vector->capacity);
    }
    vector->numbers[vector->size] = number;
    vector->size+=1;
}