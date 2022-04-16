#include<stdio.h>

int smdg(int n);

int main(){
    printf("%d",smdg(908));
    return 0;
}

int smdg(int n){
    int sum=0;
    do{
        sum+=n%10;
        n/=10;
    }while(n>0);
    return sum;
}