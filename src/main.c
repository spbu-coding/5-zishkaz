#include <stdio.h>

void other() {

    printf("Buffer attacked successfully!\n");
	fflush(stdout);
}

void input() {

    char buf[10];
    printf("Enter a line:\n");
	fflush(stdout);
    scanf("%s", buf);
    printf("%p\n", &other);
    printf("Line: %s\n", buf);
	fflush(stdout);

}

int main() {

    input();
    return 0;
}
