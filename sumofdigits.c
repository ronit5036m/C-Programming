#include<stdio.h>
int main(){
    int i , reminder , sum = 0 , number;
    printf("Enter any positive value :- ");
    scanf("%d",&number);
    int temp = number;
    while (temp!=0){
        reminder = temp % 10;
        sum = sum + reminder;
        temp = temp/10;
    }
    printf("Sum of %d is %d",number,sum);
    return 0;
}