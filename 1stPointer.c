#include<stdio.h>

int main(){
    int age =18;
    int *ptr = &age;
    int _age = *ptr;

    //for printing value at age i.e. 18
    printf("%d\n",age);
    printf("%d\n",*ptr);
    printf("%d\n",_age);
    printf("%d\n",*(&age));
    
    //for address of age
    printf("%p\n",ptr);
    printf("%p\n",&age);
    
    //unsigned address of age
    printf("%u\n",ptr);
    printf("%u\n",&age);
    
    //address of pointer
    printf("%p\n",&ptr);
    printf("%u\n",&ptr);
    
    
    return 0;
}
