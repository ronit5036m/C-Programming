#include <stdio.h>
void sumAvg(int *n1 , int *n2);
int main(){

    int n1 , n2;

    printf("Enter Two number :- ");
    scanf("%d %d",&n1,&n2);

    sumAvg(&n1,&n2);

    getchar();
}


void sumAvg(int *n1 , int *n2){
int *ptr1 , *ptr2 , *sum , *avg;

    ptr1 = &n1;
    ptr2 = &n2;

    sum = *ptr1 + *ptr2 ;
    avg = *sum / 2;

    printf("%p \n",*sum);
    printf("%.2f \n",*avg);

getchar();
}
