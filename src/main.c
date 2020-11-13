#include <stdio.h>
#include <stdlib.h>

void other() {
	printf("Congats! You are the coolest hacker ever!\n");
	fflush(stdout);
	exit(0);
}

void input() {
	char buffer[5];
	gets(buffer);
}

int main() {
	printf("%p\n", &other);
	fflush(stdout);
	input();
	printf("Buffer overflow attack failed successfully\n");
	return 0;
}