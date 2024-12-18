#include<stdio.h>
int main(){

    int array[5] , sum = 0,max,min;
    float average;
    int nums[] = {10,20,30,40,9};

    for(int i = 0; i<5; i++){
        printf("Enter the value of array[%d] :- ",i+1);
        scanf("%d",&array[i]);
    }

    max = array[0];
    min = array[0];

    for(int i=1; i<5; i++){
        if(max<array[i]){
            max = array[i];
        }
        if(min>array[i]){
            min = array[i];
        }
    }

    for (int i = 0; i < 5; i++){
        sum = sum + array[i];
    }

    average = (float)sum/5;


    printf("%d is the maximum number \n",max);
    printf("%d is the minimum number \n",min);
    printf("The sum of an array is %d \n",sum);
    printf("The Average of an array is %f",average);

    int num, surchRes;

    printf("Enter any number :- ");
    scanf("%d",&num);

    int count = 0;

    for(int i= 0; i<5; i++){
        if(nums[i] == num){
            surchRes = nums[i];
            count++;
            break;
        }
        else{
            count = 0;
        }
    }
    (count == 1) ? printf("The number has found %d",surchRes) : printf("The number has not found");


    int arr[] = {10,20,30,45,65,78,96,34};

    

    //1. Matrix Print
    //2. Transpose of a matrix
    //3. Simatric Matrix

    
    int row , col;

    printf("Enter the number of row and column :- \n");
    scanf("%d %d",&row,&col);

    int matrix[row][col], transpose[col][row];

    printf("Please enter the elements of matrix :- \n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("Enter the value of martix[%d][%d] = ",i,j);
            scanf("%d",&matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("The matrix is :- \n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    //Transpose the orginal matrix
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            transpose[j][i] = matrix[i][j];
        }
    }


    printf("\n");
    printf("The Transpose matrix is :- \n");
    for(int i = 0; i < col; i++){
        for(int j = 0; j < row; j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }

    FILE *file;

    file = fopen("home.txt","a");
    
    char text[20];

    printf("Enter your name :- ");
    fgets(text,sizeof text,stdin);

    fprintf(file,"%s",text);

    printf("Text added to the file");

    fclose(file);

    return 0;
}