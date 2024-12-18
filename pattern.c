#include <stdio.h>

int main(){

    int number = 10,row,col;
    for(row=1; row<=number; row++){
        for(col=1; col<=number-row; col++){
            printf(" ");
        }
        for(col = 1 ; col<= row; col++){
            printf("%d",col%2);
        }
        for(int l = 1 ; l<=row-1; l++){
            printf("%d",col%2);
        }
        printf("\n");
    }

    for(row=number-1; row>=1; row--){
        for(col=1; col<=number-row; col++){
            printf(" ");
        }
        for(col = 1 ; col<= row; col++){
            printf("%c",col+96);
        }
        int c= 1;
        for(int l = 1 ; l<=row-1; l++){
            printf("%d",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}