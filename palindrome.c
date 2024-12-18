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
    (number == revese) ? printf("%d is a palindrome number",number) : printf("%d is not a palimdrome number ",number);
    return 0;
}