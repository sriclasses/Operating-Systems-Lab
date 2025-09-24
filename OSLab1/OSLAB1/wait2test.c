#include "types.h"
#include "stat.h"
#include "user.h"

int main(void)
{
    int retime, rutime, stime;
    int pid = fork();

    if (pid == 0)
    {
        // Child process
        // sleep(250);
        for (int i = 0; i < 10000; i++)
        {
            if (i % 10 == 0)
                printf(1, "Child running\n");
        } // Busy loop to simulate running
        char buf[10]; // Buffer to store user input
        printf(1, "Enter a number: ");
        read(0, buf, sizeof(buf)); // Read input from stdin (file descriptor 0)
        int x = atoi(buf);         // Convert input to integer

        // sleep(250);
        printf(1, "Number is %d: ", x);
        exit();
    }
    else if (pid > 0)
    {
        // Parent process
        if (wait2(&retime, &rutime, &stime) > 0)
        {
            printf(1, "Child process terminated.\n");
            printf(1, "Run time: %d\n", rutime);
            printf(1, "Ready time: %d\n", retime);
            printf(1, "I/O wait time: %d\n", stime);
        }
        else
        {
            printf(1, "wait2 failed.\n");
        }
    }
    else
    {
        printf(1, "Fork failed.\n");
    }

    exit();
}