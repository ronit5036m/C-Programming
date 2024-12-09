#include<stdio.h>
factorial();
int main(){
    int n;
    printf("Enter any value :-");
    scanf("%d",&n);
    printf("factorial is %d",factorial(n));
    return 0;
}
int factorial(int n){
    int i, fact = 1;
    for(i=1; i<=n; i++){
        fact = fact*i;
    }
    return fact;
}