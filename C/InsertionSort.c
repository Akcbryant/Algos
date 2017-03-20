/*
	Insertion Sort Pseudocode ( linear time function )
	for j = 2 to A.length
		key = A[j]
		// Insert A[j] into the sorted sequence A[1..j-1].
		i = j - 1
		while i > 0 and A[i] > key
			A[i + 1] = A[i]
			i = i - 1
		A[i+1] = key
*/

#import <stdio.h>

int *insertionSort(int *list, int length);

int main(int argc, char *argv[]) {
	
	int list[argc-1];
	int i;

	for (i = 1; i < argc; i++) {
		list[i] = *argv[i];
	}

	//show original list
	printf("Original: { ");
	for (i = 1; i < argc; i++) {
		printf("%c ", list[i]);
	}
	printf("} \n");

	insertionSort(&list[0], argc-1);

	//show sorted list
	printf("Sorted? : { ");
	for (i = 1; i < argc; i++) {
		printf("%c ", list[i]);
	}
	printf("} \n");
}

int *insertionSort(int *list, int length) {
	int j, i, key;
	for (j = 1; j <= length; j++) {
		key = list[j];
		i = j - 1;
		while (i > 0 && list[i] > key) {
			list[i + 1] = list[i];
			i--;
		}
		list[i+1] = key;
		}
	return list;
}