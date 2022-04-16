#include<stdio.h>

void Greetings();

int main(){
    Greetings();
    return 0;
}

void Greetings(){
    char n;
    printf("Your Nationality ");
    scanf("%c",&n);
    if(n=='I'||n=='i'){
        printf("NAMASTE");
    }
    else if(n=='f'||n=='F'){
        printf("BONJOUR");
    }
    else{
        printf("SORRY! You Are Not Allowed");
    }
}