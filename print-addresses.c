
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        long num = strtol(argv[i], NULL, 10);
        printf("0x%012lX\n", num & 0xFFFFFFFFFFFF);
    }
    return 0;
}

