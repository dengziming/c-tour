
#include <stdio.h>

# define SIZE 50

int main(void) {
    float list[SIZE];

    readlist(list, SIZE);

    sort(list, SIZE);

    average(list, SIZE);

    bargrahp(list, SIZE);

    return 0;
}
