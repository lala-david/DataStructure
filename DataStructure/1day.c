/*
#include<stdio.h>
#include<stdlib.h>
 
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
	printf("%d\n", avg);


	// array size 

	int* array = (int*)malloc(4 * sizeof(int));
	// int array[4];

	array[0] = 1;
	array[1] = 2;
	*(array + 2) = 3;

	int* tmp = (int*)malloc(8 * sizeof(int));

	int i;
	for (i = 0; i < 4; i++) {
		tmp[i] = array[i];
	}
	array = tmp;

	array[4] = 4;
	*(array + 5) = 5;
	printf("%d \n", array[5]);
	return 0;
}


*/