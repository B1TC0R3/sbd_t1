//Replace C++ header with C header
#include <stdio.h>

int custom_strlen(char* str) {
    char *s = str;

    while (*s) s++;
    return (s - str);
}

int main() {
    char str[] = "Hello";
    int  len   = custom_strlen(str); 

    printf("%i\n", len);

    return 0;
}




