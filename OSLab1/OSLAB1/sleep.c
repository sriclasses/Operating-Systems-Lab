#include "types.h"
#include "user.h"
#include "stat.h"
int main(int argc, char *argv[])
{
    int ticks; // time to sleep

    if (argc <= 1)
    {
        printf(2, "Error: Missing argument.\nUsage: sleep <ticks>\n");
        printf(2, "Please specify the number of ticks to sleep as an argument.\n");
        exit();
    }
    ticks = atoi(argv[1]);

    sleep(ticks);

    exit();
}
