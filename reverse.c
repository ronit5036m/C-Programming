#include<stdio.h>
int main(){
    int temp, reminder, revese = 0, number;
    printf("Enter the positive nmber :- ");
    scanf("%d",&number);
    temp = number;
    while(temp!=0){
        reminder = temp % 10;
        revese = revese * 10 + reminder;
        temp = temp/10;
    }
    printf("the reverse of %d is %d",number,revese);
    return 0;
}