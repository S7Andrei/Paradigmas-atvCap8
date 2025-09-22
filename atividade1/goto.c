#include <stdio.h>

int main() {
    int i = 1;
    goto check;

loop:
    printf("%d\n", i);
    i = i + 1;

check:
    if (i <= 10)
        goto loop;

    return 0;
}
