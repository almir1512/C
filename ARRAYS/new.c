#include <stdio.h>

//passing 2D array as a parameter to a function
void fun(int *arr, int m, int n)
{
	int i, j;
	for (i = 0; i < m; i++){
	for (j = 0; j < n; j++)
		printf("%d ", *((arr+i*n) + j));
		printf("\n");
	}
}

int main(void)
{
	int arr[][4] = {{1, 2, 3,4}, {4, 5, 6,7}, {7, 8, 9,0}};
	int m = 3, n = 4; //m - no.of rows, n - no.of col

	fun(&arr, m, n);
	return 0;
}
