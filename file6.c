#include<stdio.h>

// strcpy(গন্তব্য, উৎস)
void my_strcpy(char* destination, char* source) {
    int i = 0;
    
    // যতক্ষণ না সোর্স স্ট্রিংয়ের শেষে '\0' পাওয়া যাচ্ছে
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    
    // সবশেষে গন্তব্য স্ট্রিংকেও নাল ক্যারেক্টার দিয়ে শেষ করতে হবে
    destination[i] = '\0';
}

int main() {
    char a[10];
    char b[] = "Mahadi";
    
    my_strcpy(a, b); // b থেকে ডাটা a তে যাবে
    
    printf("Copied String: %s\n", a);
    
    return 0;
}
