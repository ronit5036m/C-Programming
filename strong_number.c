#include<stdio.h>
int main(){
    int num , reminder , sum = 0, fact;
    printf("Enter any number :- ");
    scanf("%d",&num);
    int temp = num;
    while(temp!=0){
        reminder = temp % 10;
        fact = 1;
        for(int i = 1; i<=reminder; i++){
            fact = fact * i;
        }
        sum = sum + fact;
        temp /= 10;
    }
    if (sum == num){
        printf("%d is straong number",num);
    }else{
        printf("%d is not a strong number",num);
    }
    
    return 0;
}