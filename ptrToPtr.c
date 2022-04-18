#include<stdio.h>

int main(){
    int i;
    int *ptr = &i;
    int **pptr = &ptr;

    **pptr=8;
    printf("i = %d",i);

    return 0;
}