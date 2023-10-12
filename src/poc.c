#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main() {
    char* a = malloc(50);
    char* b = malloc(50);

    puts("Initial pointer addresses:");
    printf("a :: %p\n", a);
    printf("b :: %p\n", b);
    puts("");

    free(a);

    //Circumvent double free detection by the kernel
    free(b);
    strncpy(a, "text", 50);

    free(a);

    char* command = malloc(50);
    char* some_pointer = malloc(50);
    char* username = malloc(50);

    puts("New pointer addresses:");
    printf("command  :: %p\n", command);
    printf("username :: %p\n", username);
    puts("===============\n"
         "From here on, the application would run the same way\n"
         "as it might look for a normal user\n"
         "===============\n");

    strncpy(command, "date", 50);

    printf("Enter your username: ");
    scanf("%512[^\n]", username);

    printf("\nHello %s, this is the current date:\n", username);
    system(command);

    free(command); //No need to free 'username' because it points to the same location as 'command'
    free(some_pointer);

    return 0;
}
