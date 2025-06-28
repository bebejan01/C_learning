#include <stdio.h>
#include <stdlib.h>

#define MAX 50

/* 
Bubble Sort 

3 4 12 1 34 16

*/

void bubblesort(int arr[],int size) {
	int i,j;
	
	for(i = 0; i < size; i++) {
		for(j = 1; j < size; j++) {
			if(arr[j-1] > arr[j]) {
				int temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			}	
		}
	}
	
	
	
	
}

int main() {
	
	int array[MAX], size;
	int i;
	printf("Kac elemanli: ");
	scanf("%D", &size);
	
	for(i = 0; i < size; i++) {
		
		scanf("%d", &array[i]);
		
	}
	
	bubblesort(array,size);
	
	for(i = 0; i < size; i++) {
		
		printf("%d  ", array[i]);
		
	}
	
	return 0;
}


