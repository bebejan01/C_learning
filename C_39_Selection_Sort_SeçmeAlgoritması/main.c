#include <stdio.h>
#include <stdlib.h>

#define MAX 50

/* 
Bubble Sort 

3 4 12 1 34 16

*/

void selectionsort(int arr[], int size) {
	int i,j;
	int minimumindex;
	for (i = 0; i < size; i++) {
		minimumindex = i;
		for (j = i; j < size; j++) {
			if (arr[j] < arr[minimumindex]) {
				minimumindex = j;
			}
		}
		
		int temp = arr[i];
		arr[i] = arr[minimumindex];
		arr[minimumindex] = temp;
		
		
		
		
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
	
	selectionsort(array,size);
	
	for(i = 0; i < size; i++) {
		
		printf("%d  ", array[i]);
		
	}
	
	return 0;
}
