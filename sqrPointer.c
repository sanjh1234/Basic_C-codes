#include<stdio.h>

void sqr(int n);
void ptr_sqr(int *n);

int main(){
    int i=5;

    sqr(i);
    printf("NUMBER = %d\n",i);

    ptr_sqr(&i);
    printf("NUMBER = %d\n",i);

    return 0;
}

//Call By Value
void sqr(int n){
    n=n*n;
    printf("SQUARE = %d\n",n);
}

//Call By Reference
void ptr_sqr(int*n){
    (*n)=(*n)*(*n);
    printf("SQUARE = %d\n",*n);
}