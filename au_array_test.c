#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <assert.h>

#include "au_array.h"

void test_au_array_create()
{
    assert(false);
}

void test_au_array_create_of_length()
{
    puts("Test: create an array of a certain length.");
    
    au_array* array =  au_array_create_of_length(1, sizeof(char));
    
    assert(array);
    assert(array->length == 1);
    assert(array->element_size = sizeof(char));
    assert(array->elements != NULL);
    
    au_array_free(array);
}

void test_au_array_create_with_array()
{
    assert(false);
}

void test_au_array_create_with_buffer()
{
    assert(false);
}

void test_au_array_free()
{
    puts("Test: free an array.");
    
    au_array *array = au_array_create_of_length(1, sizeof(char));
    
    assert(array);
    
    au_array_free(array);
}

void test_au_array_free_with_elements()
{
    assert(false);
}

void test_au_array_free_with_element_handler()
{
    assert(false);
}

void test_au_array_is_empty()
{
    assert(false);
}

void test_au_array_length()
{
    assert(false);
}

void test_au_array_size()
{
    assert(false);
}

void test_au_array_element_size()
{
    assert(false);
}

void test_au_array_first()
{
    assert(false);
}

void test_au_array_last()
{
    assert(false);
}

void test_au_array_get()
{
    assert(false);
}

int main(int argc, char **argv)
{
    test_au_array_create();
    test_au_array_create_of_length();
    test_au_array_create_with_array();
    test_au_array_create_with_buffer();

    test_au_array_free();
    test_au_array_free_with_elements();
    test_au_array_free_with_element_handler();

    test_au_array_is_empty();
    test_au_array_length();
    test_au_array_size();
    test_au_array_element_size();

    test_au_array_first();
    test_au_array_last();
    test_au_array_get();

    return 0;
}

