#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student {

    int id;
    char name[30];
    char group;
    float cgpa;

};


int main()
{
    struct student s1;
    
    
    printf("Enter your student id : ");
    scanf("%d",&s1.id);
    
    printf("\nEnter your name : ");
    scanf(" %[^\n]", s1.name);
    
    printf("\nEnter your group [A - H] : ");
    scanf(" %c", &s1.group);
    
    printf("\nEnter your CGPA : ");
    scanf("%f", &s1.cgpa);
    
    printf("student name is : %s\nid number : %d\ngroup : %c\nCGPA : %.2f",s1.name,s1.id,s1.group,s1.cgpa);
    
    
    
    return 0;
}

    