#include<stdio.h>

int fibo(int n);

int main(){
    int n;
    printf("ENTER NO OF TERMS: ");
    scanf("%d",&n);
    printf("The Fibonacci Sequence Of %d is: %d",n,fibo(n));
    return 0;
}

int fibo(int n){
    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    
    int fibonm = fibo(n-2);
    int fibon = fibonm + fibo(n-1);
    
    return fibon;
}