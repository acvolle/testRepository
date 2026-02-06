#include <stdio.h>

int main(){

    int myNumbers[5] = {10,20,30,40,50};

    int* ptr_second = &myNumbers[1];
    int* ptr_last = &myNumbers[4];

    printf("Zweite Position: %p", ptr_second);
    printf("\nLetzte Position: %p", ptr_last);
    int diff = ptr_last - ptr_second;

    printf("\nDifferenz: %d", diff);

}