#include<stdio.h>
int factorial();
int main(){
    int n= 5;
    printf("Factorial is %d",factorial(n));
    return 0;
}

int factorial(int n){
    if(n==0 || n==1)
        return 1;
    else
        return n * factorial(n-1);
}