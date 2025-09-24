#include <stdio.h>

int main(int argc, char **argv)
{
    int x = 1;
    printf("Hello x = %d\n", x);

    // In-line assembly to increment the value of x by 1
    __asm__(
        "addl $1, %0" // Assembly instruction to add 1 to the value of x
        : "=r"(x)     // Output operand: x is being modified
        : "0"(x)      // Input operand: initial value of x
    );
    // l in addl represents long

    printf("Hello x = %d after increment\n", x);

    if (x == 2)
    {
        printf("OK\n");
    }
    else
    {
        printf("ERROR\n");
    }

    return 0;
}
