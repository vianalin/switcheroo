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
	
	//4. print out the values in this array
	printf("values in arr: \n");
	for(i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	
	//5. create a separate array large enough to store 10 ints
	int arr2[10];
	
	//6. create pointer variables that will point to each array
	int *p = arr;
	int *p2 = arr2;
	
	//7. using only pointer variables
	//a. populate the second array with the values in the first but in reverse order
	for(i = 0; i < 10; i++) {
		arr2[i] = arr[10-i];
	}
	
	//b. print out the values in the second array
	for(i = 0; i < 10; i++) {
		printf("%d\n", arr2[i]);
	}
	
}
	
	
