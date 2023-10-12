#include <stdio.h>
#include <string.h>

size_t custom_strlen(char* str) {
    char *s = str;

    while (*s) s++;
    return (s - str);
}

size_t secure_strlen(char* str, int max_size) {
    char s[max_size];

    if (!str) return 0;

    strncpy(s, str, sizeof(s));
    s[sizeof(s) - 1] = 0;

    return custom_strlen(s);
}

int main() {
    char   str[]   = "Hello";
    size_t sec_len = secure_strlen(str, 10);

    printf("%lu\n", sec_len);

    return 0;
}



