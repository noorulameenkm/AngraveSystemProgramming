#include<stdio.h>


int main(){

    char *char_ptr = "ABCDEFGH";
    printf("Before Assigning to int pointer %s\n", char_ptr);
    int *int_ptr = (int *)char_ptr;
    int_ptr+=1;
    char_ptr = (char *)int_ptr;
    printf("After Moving 1 byte in int pointer and 4 byte in char pointer %s\n", char_ptr);
}