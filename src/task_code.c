#include <iostream>

int main() {
    char str[] = "Hello";
    char *s    = str;

    while (*s) s++;

    return (s - str);
}
