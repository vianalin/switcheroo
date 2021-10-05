#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	//1. create an array large enough to store 10 ints
	int arr[10];
	
	//2. set the first value in the array to 0
	arr[0] = 0;
	
	//3. populate the rest of the array with random values
	srand(time(NULL));
	int i; 
	for(i = 1; i < 10; i++) {
		arr[i] = rand();
	}
	
	//4. 
	
	
