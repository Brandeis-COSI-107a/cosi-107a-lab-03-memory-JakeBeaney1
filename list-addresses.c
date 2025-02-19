
#include <stdio.h>

int global_var;

void sample_function() {}

int main() {
    int stack_var = 10;
    char *str = "Hello, World!";

    printf("stack variable: 0x%p\n", (void*)&stack_var);
    printf("initialized data: 0x%p\n", (void*)str);
    printf("uninitialized data: 0x%p\n", (void*)&global_var);
    printf("main: 0x%p\n", (void*)main);
    printf("function: 0x%p\n", (void*)sample_function);

    return 0;
}
