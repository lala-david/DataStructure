#include<stdio.h>
#include<string.h>
#define BUFFER_SIZE 100

int main() {

	 char * words[100];
	 int n = 0; 
	 char buffer[BUFFER_SIZE];

	 // EOF == End of File 
	 while (n < 4 && scanf("%s", buffer) != EOF) {
		 words[n] = strdup(buffer);  // strcpy(st2, str1) 
		 n++;
	 }

	 for (int i = 0; i < 4; i++) {
		 printf("%s\n", words[i]);
	 }
}