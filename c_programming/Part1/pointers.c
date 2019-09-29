#include<stdio.h>


int main(){

    char *char_ptr = "ABCDEFGH";
    int *int_ptr = (int *)char_ptr;
    printf("Printing a char pointer intial value %p and after adding 1 %p\n", char_ptr, char_ptr + 1);
    printf("Printing a int pointer intial value %p and after adding 1 %p\n", int_ptr, int_ptr + 1);
}