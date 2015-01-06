/*
	Merge Sort Psuedocode

	Function Merge(A, p, q, r);

	n1 = q - p + 1
	n2 = r - q
	let L[1..n1 + 1] and R[1..n2 + 1] be new arrays
	for i = 1 to n1
		L[i] = A[p + 1 - 1]
	for j = 1 to n2
		R[j] = A[q + j]
	L[n1 + 1] = sentinel
	R[n2 + 1] = sentinel
	i = 1
	j = 1
	for k = p to r
		if L[i] <= R[j]
			A[k] = L[i]
			i = i + 1
		else A[k] = R[j]
			j = j + 1	
*/

#include <stdio.h>

int *mergeSort(int *list, int length);

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

	mergeSort(&list[0], argc-1);

	//show sorted list
	printf("Sorted? : { ");
	for (i = 1; i < argc; i++) {
		printf("%c ", list[i]);
	}
	printf("} \n");
}