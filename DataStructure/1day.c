#include<stdio.h>

// pointer address output
int main(void) {
	int x = 12;
	int* ip;
	ip = &x;
	printf("0x%p\n", &ip);
}