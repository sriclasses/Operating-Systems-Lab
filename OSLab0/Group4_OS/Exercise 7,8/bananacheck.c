#include "types.h"
#include "stat.h"
#include "user.h"

int main(void)
{
    static char buf[5000];
    printf(1, "banana sys call returns %d\n", banana((void *)buf, 5000));

    printf(1, "%s", buf);
    exit();
}