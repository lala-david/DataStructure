#include<stdio.h>
#pragma warning(disable:4996)

// int * array = array []
int caculate_sum(int * array) {
	int sum, i;
	sum = 0;
	for (i = 0; i < 10; i++) {
		sum += array[i];
	}
	return sum;
}

int main(void) {
	int sum, i, avg;
	int num[10];
	for (i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
	}
	sum = caculate_sum(num);
	avg= sum / 10;
	prinf("%d\n", &avg);
	return 0;


}