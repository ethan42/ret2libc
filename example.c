#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void overflowme(char * msg) {
    char buffer[16];
    strcpy(buffer, msg);
}

int main(int argc, char ** argv) {
    if (argc != 2) {
        printf("Usage: %s <name>\n", argv[0]);
        return 1;
    }
    overflowme(argv[1]);
    return 0;
}