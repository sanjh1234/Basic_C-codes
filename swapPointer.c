#include<stdio.h>

void swap(int *a, int *b);

int main(){
    int x=4, y=6;

    swap(&x,&y);
    printf("x = %d\ny = %d\n",x,y);

    return 0;
}

void swap(int *a, int *b){
    (*a)=(*a)+(*b);
    (*b)=(*a)-(*b);
    (*a)=(*a)-(*b);
    printf("a = %d\nb = %d\n",*a,*b);
}