#include<stdio.h>
#include<ctype.h>
int fact(int number);
void isevenOdd(int number);
void isPrime(int number);
int main(){

    // Hello World Print

    printf("Hello Wolrld!");

    // Adiition of Two Numbers 

    int x = 10 , y = 20;
    printf("%d",x+y);

    // Substraction of two Numbers

    int x = 10 , y = 20;
    printf("%d",x-y);

    // Swaping Using Third Varible 

    int x = 10, y = 20 ,z ;
    printf("Before swaping %d %d \n",x,y);
    z = y; 
    y = x;
    x = z;
    printf("After swaping %d %d",x,y);

    // Swaping Without Using Third Varible

    int x = 10 , y = 20;
    x = x - y;
    y = x + y;
    x = y - x;
    printf("%d %d",x,y); 

    // Even or Odd

    int n;
    printf("Enter any Number :- ");
    scanf("%d",&n);

    (n%2 != 0) ? printf("%d is ODD Number",n) : printf("%d is a Even Number",n);

    // Find The lagest Number With Array

    int n[3];
    int length = sizeof(n) / sizeof(n[0]);
    for(int i = 0; i<length; i++){
        printf("Enter your %d value :- ",i+1);
        scanf("%d",&n[i]);
    }
    int max = n[0];
    for(int i = 1; i<length; i++){
        if(max < n[i] ){
            max = n[i];
        }
    }
    int min = n[0];
    for(int i = 1; i<length; i++){
        if(min > n[i] ){
            min = n[i];
        }
    }
    printf("The Largest number is %d \n",max);
    printf("The Lowest number is %d",min);
    
    // Find the largest Number using if else

    int x , y ,z;
    printf("Enter 3 three number :- ");
    scanf("%d %d %d",&x,&y,&z);

    if(x>y && x>z){
        printf("The largest is %d",x);
    }else if(y>x && y>z){
        printf("The largest is %d",y);
    }
    else{
        printf("The largest is %d",z);
    }

    // Determine The grade Based Value

    int marks;
    printf("Enter any Subject marks :- ");
    scanf("%d",&marks);
    if(marks>=90){
        printf("Excelent Grade Is : A++");
    }
    else if(marks>=80){
        printf("Very Good Grade Is : A+");
    }
    else if(marks>=70){
        printf("Good Grade Is : A");
    }
    else if(marks>=60){
        printf("Satisfied Grade Is : B+");
    }
    else if(marks>=50){
        printf("well Grade Is : B");
    }
    else if(marks>=40){
        printf("Passed Grade Is : c");
    }
    else{
        printf("Falied Grade is : F");
    }

    // Checking a Leap Year 

    int year;
    printf("Enter any year :- ");
    scanf("%d",&year);
    (year%4==0 && year%100!=0) ? printf("%d is a Leap Year",year) : printf("%d is not a leap year",year);

    // Check Vowel or Consonent

    char ch;
    printf("Enter any letter :- ");
    scanf("%c",&ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'
    || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("Vowel");
    }
    else{
        printf("Consonent");
    }

    // Uppercase or Lowercase

    char ch;
    printf("Enter any Letter :- ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z'){
        printf("Upper case");
    }
    else if(ch>='a' && ch<='z'){
        printf("Lower case");
    }
    else{
        printf("This is not a text");
    }

    // 1 
    // 1 2
    // 1 2 3
    // 1 2 3 4

    int row , col , n=1;
    for(row=1; row<=4; row++){
        for(col=1; col<=row; col++){
            printf("%d ",col);
        }
        printf("\n");
    }

    // 1       
    // 2 2     
    // 3 3 3   
    // 4 4 4 4 

    for(row=1; row<=4; row++){
        for(col=1; col<=row; col++){
            printf("%d ",row);
        }
        printf("\n");
    }

    // 1 
    // 2 3 
    // 4 5 6 
    // 7 8 9 10 

    for(row=1; row<=4; row++){
        for(col=1; col<=row; col++){
            printf("%d ",n++);
        }
        printf("\n");
    }

    // * 
    // * *
    // * * *
    // * * * *

    for(row=1; row<=4; row++){
        for(col=1; col<=row; col++){
            printf("* ");
        }
        printf("\n");
    }

    // * * * *
    // * * *
    // * *
    // *

    for(row=4; row>=1; row--){
        for(col=1; col<=row; col++){
            printf("* ");
        }
        printf("\n");
    }

    // * * * *
    // * * * *
    // * * * *
    // * * * *

    for(row=1; row<=4; row++){
        for(col=1; col<=4; col++){
            printf("* ");
        }
        printf("\n");
    }

    //    *
    //   **
    //  ***
    // ****

    int row , col , n=1;
    for(row=1; row<=4; row++){
        for(col=1; col<=4-row; col++){
            printf(" ");
        }
        for(col=1; col<=row; col++){
            printf("*");
        }
        printf("\n");
    }

    //    *
    //   * *
    //  * * *
    // * * * *

    for(row=1; row<=4; row++){
        for(col=1; col<=4-row; col++){
            printf(" ");
        }
        for(col=1; col<=row; col++){
            printf("* ");
        }
        printf("\n");
    }

    // print Hello Wolrd 10 times

    for(int i =1; i<=10; i++){
        printf("Hello Wolrd ! \n");
    }

    // Print Natural Number

    int n=10 , i = 1;
    while(i<=10){
    printf("%d \n",i);
    i++;
    }

    // Odd Number in Given range

    int i,n;
    printf("Enter a Range :- ");
    scanf("%d",&n);
    for(i=1; i<n; i++){
        if(i%2!=0){
            printf("%d \n",i);
        }
    }

    // Adding First n Numbers

    int sum = 0,n,i=1;
    printf("Enter a Range :- ");
    scanf("%d",&n);
    while(i<=n){
        sum += i;
        i++;
    }
    printf("Sum of first n number %d",sum);

    // Number Divisible by 3 or 5

    int sum = 0,n,i;
    printf("Enter a Range :- ");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        if(i%3==0 || i%5==0){
            printf("%d \n",i);
        }
    }

    // Add Even Numbers in given range

    int sum = 0,n,i;
    printf("Enter a Range :- ");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        if(i%2==0){
            sum += i;
        }
    }
    printf("Sum of Even Number is %d",sum);

    // Reverse of a Number

    int reminder,temp,n,reverse = 0;
    printf("Enter a number :- ");
    scanf("%d",&n);
    temp = n;
    while (temp!=0){
        reminder = temp % 10;
        reverse = reverse * 10 + reminder;
        temp = temp / 10;
    }
    printf("Reverse is %d",reverse);

    // Add Digits of Numbers

    int reminder,temp,n,sum = 0;
    printf("Enter a number :- ");
    scanf("%d",&n);
    temp = n;
    while (temp!=0){
        reminder = temp % 10;
        sum = sum + reminder;
        temp = temp / 10;
    }
    printf("Sum of Digits is %d",sum);

    // Prime and Non-Prime Using if else

    int n,i,count=0;
    printf("Enter any number :- ");
    scanf("%d",&n);
    if(n<=1){
        count++;
    }
    else{
        for(i=2; i<=n-1; i++){
            if(n%i==0){
                count++;
                break;
            }
        }
        if(count == 0){
            printf("%d is a prime number",n);
        }else{
            printf("%d is not a prime number",n);
        }
    }

    // Plaindrome Number

    int reminder,temp,number,reverse = 0;
    printf("Enter a number :- ");
    scanf("%d",&number);
    temp = number;
    while (temp!=0){
        reminder = temp % 10;
        reverse = reverse * 10 + reminder;
        temp = temp / 10;
    }
    if(number == reverse){
        printf("%d is palindrome number",number);
    }else{
        printf("%d is not a palindrome number",number);
    }

    // Check Even odd using function

    int number;
    printf("Enter any number :- ");
    scanf("%d",&number);
    isevenOdd(number);

    // Prime Number Using Function

    int number;
    printf("Enter any number :- ");
    scanf("%d",&number);
    isPrime(number);

    // Factorial Using Recursive Function
    
    int number;
    printf("Enter any number :- ");
    scanf("%d",&number);
    printf("%d",fact(number));

    // Fibonacci Series

    int number,count = 0,first=0,second=1,fibo;
    printf("Enter the range :- ");
    scanf("%d",&number);
    while(count<number){
        if(count<=1){
            fibo = count;
        }else{
            fibo = first + second;
            first = second;
            second = fibo;
        }
        printf("%d ",fibo);
        count++;
    }
    return 0;
}

int fact(int number){
    if(number==1)
        return 1;
    else
        return number * fact(number-1);
}


void isevenOdd(int number){
    if(number%2 == 0){
        printf("%d is a Even number",number);
    }else{
        printf("%d is a Odd number",number);        
    }
}

void isPrime(int number){
    if(number>1){
        int count = 0;
        for(int i = 2; i<=number-1; i++){
            if(number%i == 0){
                count = 1;
                break;
            }
        }
        if(count == 0){
            printf("%d is Prime Number",number);
        }
        else{
            printf("%d is not a prime Number",number);
        }
    }
}
