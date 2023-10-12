//Replace C++ header with C header
#include <stdio.h>

size_t secure_strlen(char* str) {
    return sizeof(*str) / sizeof(char);
}

int custom_strlen(char* str) {
    char *s = str;

    while (*s) s++;
    return (s - str);
}

int main() {
    char str[] = "Hello";
    int  len   = custom_strlen(str); 
    size_t sec_len = secure_strlen(str);

    printf("%i\n", len);
    printf("%lu\n", sec_len);

    return 0;
}




