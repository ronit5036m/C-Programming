#include<stdio.h>
int main(){
    int i , reminder , armstrong = 0 , number;
    printf("Enter any positive value :- ");
    scanf("%d",&number);
    int temp = number;
    while (temp!=0){
        reminder = temp % 10;
        armstrong = armstrong + reminder * reminder * reminder;
        temp = temp/10;
    }
    if(number == armstrong){
        printf("%d is a armstrong number",number);
    }else{
        printf("%d is not a armstrong number",number);
    }
    return 0;
}