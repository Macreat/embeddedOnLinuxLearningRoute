#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc == 1)
        printf("Se necesitan argumentos!\n\r"); // \n is a new line
    else if (argc == 2)
        printf("Hello, %s!\n", argv[1]); // \n is a new line
    printf("Hello, World!\n\r"); // undesrtading the \n\r as a typewriter   
     return 0;
}

