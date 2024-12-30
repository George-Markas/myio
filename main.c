// demo
#define MYUTILS_IMPLEMENTATION
#include "myutils.h"

int main(void) {
    int an_int;
    float a_float;

    puts("Input an integer:");
    read_int(&an_int, 1, 1);

    puts("\nInput a float:");
    read_float(&a_float, 1, 1);

    printf("\nHere's your int \033[0;32m%d\033[0m and here is your damn float \033[0;32m%.2f\033[0m.\n", an_int, a_float);

    return EXIT_SUCCESS;
}