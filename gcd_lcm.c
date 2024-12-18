#include<stdio.h>
int main(){
    int num1 , num2 , n1 , n2 , reminder , GCD , LCM;
    printf("Enter any two number :- ");
    scanf("%d %d",&num1,&num2);
    n1 = num1;
    n2 = num2;
    
    int muliplyOfdigits = n1 * n2;
    while (n2!=0)
    {
        reminder = n1 % n2;
        n1 = n2;
        n2 = reminder;
    }
    GCD = n1;
    LCM = muliplyOfdigits / GCD;

    printf("GCD IS %d \n",GCD);
    printf("LCM IS %d \n",LCM);

    return 0;
}