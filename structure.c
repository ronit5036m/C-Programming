#include <stdio.h>

struct Student {
    char name[50];
    int age ;
    float cgpa;
};


void studentinfo(struct Student student){
    printf("Name :- %s\n",student.name);
    printf("Age :- %d\n",student.age);
    printf("CGPA :- %.2f\n",student.cgpa);
}

int main(){

    struct Student Ronit, Rohan;
    struct Student number[3];

    int lengthofStruct = sizeof(number) / sizeof(number[0]);


    for(int i = 0; i< lengthofStruct; i++){
        printf("Enter The Details of Sudent %d :- \n",i+1);
        
        printf("Enter Name :- ");
        scanf("%s",&number[i].name);

        printf("Enter Age :- ");
        scanf("%d",&number[i].age);

        printf("Enter CGPA :- ");
        scanf("%f",&number[i].cgpa);

    }
    
    for(int index = 0; index < lengthofStruct; index++){
        printf("The Deatils of Student %d \n",index + 1);
        studentinfo(number[index]);
    }
    
    
    

    getchar();
}