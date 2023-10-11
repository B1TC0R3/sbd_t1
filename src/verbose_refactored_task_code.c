#include <stdio.h>

void log_ptr(char* msg, char* ptr) {
    puts(msg);
    printf(
        "\tSize   : %zu\n\tValue  : %c\n\tAddress: %p\n",
        sizeof(ptr),
        *ptr,
        ptr
    );
}

int custom_strlen(char* str) {
    char *s = str;
    char msg[16];

    log_ptr("Initial state of 's':", s);

    for (int i = 0; *s; i++, s++) {
        if (i == 1 || i == 3) {
            sprintf(msg, "\n%i. state of 's':", i); 
            log_ptr(msg, s);
        }
    }

    log_ptr("\nFinal state of 's':", s);

    return (s - str);
}

int main() {
    char str[] = "Hello";
    int  len   = custom_strlen(str); 

    printf("\nSize of '%s': %i\n", str, len);

    return 0;
}



