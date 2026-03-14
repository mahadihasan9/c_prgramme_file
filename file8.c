#include<stdio.h>
#include<string.h>

struct student1 {
    char name[10];
} s1; // সরাসরি ভ্যারিয়েবল তৈরি

typedef struct {
    char name[10];
} student2; // এটি একটি টাইপ

struct student3 {
    char name[10];
}; // এটি একটি টেমপ্লেট

int main() {
    // ১. সরাসরি একসেস (student1)
    strcpy(s1.name, "S1_Name");
    printf("Student 1: %s\n", s1.name);

    // ২. typedef একসেস (student2)
    student2 s2; 
    strcpy(s2.name, "S2_Name");
    printf("Student 2: %s\n", s2.name);

    // ৩. সাধারণ struct একসেস (student3)
    struct student3 s3;
    strcpy(s3.name, "S3_Name");
    printf("Student 3: %s\n", s3.name);

    return 0;
}
