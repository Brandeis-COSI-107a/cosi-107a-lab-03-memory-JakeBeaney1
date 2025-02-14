

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    for (int i = 1; i < argc; i++) {

        long num = strtol(argv[i], NULL, 0);
        printf("%d 0x%02X %3d\n", i, num & 0xFF, num & 0xFF);

    }

    return 0;
}

