#include <stdio.h>
#include <string.h>

union Student {
    int id;
    char name[20];
};

int main() {
    union Student s;

    s.id = 101;
    printf("ID: %d\n", s.id);

    // এখন নাম ইনপুট দিলে ID এর ভ্যালু নষ্ট হয়ে যাবে
    strcpy(s.name, "Mahadi");
    
    printf("Name: %s\n", s.name);
    printf("ID after name: %d (Garbage value)\n", s.id); 

    return 0;
}
