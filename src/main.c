#include <stdio.h>
#include <stdlib.h>

void other() {

    printf("Buffer attacked successfully!\n");
}

void input() {

    char buf[10];
    printf("Enter a line:\n");
    scanf("%s", buf);
    printf("Line: %s\n", buf);

}

int main() {

    input();
    return 0;
}
