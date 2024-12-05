#include <stdio.h>
int main(){
    int i, j, count = 0, n;
    printf("Enter any number :- ");
    scanf("%d", &n);
    if (n > 0){
        for (i = 2; i <= n/2; i++){
            if(n % i == 0){
                count++;
            }
        }
        (count == 0) ? printf("%d is a prime number", n) : printf("%d is not a prime number", n);
    }
    return 0;
}