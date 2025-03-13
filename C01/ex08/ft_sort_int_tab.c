#include <stdio.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int *tab, int low, int high) {
	int pivot = tab[high];
	int i = low - 1;
	int j = low;

	while (j < high) {
		if (tab[j] < pivot) {
			i++;
			swap(&tab[i], &tab[j]);
		}
		j++;
	}

	swap(&tab[i + 1], &tab[high]);
	return i + 1;
}

void quickSort(int *tab, int low, int high)
{
	if (low < high)
	{
		int pi;
		
		pi = partition(tab, low, high);
		quickSort(tab, low, pi - 1);
		quickSort(tab, pi + 1, high);
	}
}

void ft_sort_int_tab(int *tab, int size) {
	if (size > 1) {
		quickSort(tab, 0, size - 1);
	}
}

void printArray(int *tab, int size) {
	if (size == 0) {
		printf("\n");
		return;
	}
	printf("%d ", tab[0]);
	printArray(tab + 1, size - 1);
}

int main() {
	int arr[] = {5, 3, 8, 6, 2, 7, 4, 1};
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("Antes de ordenar:\n");
	printArray(arr, size);

	ft_sort_int_tab(arr, size);

	printf("Después de ordenar:\n");
	printArray(arr, size);

	return (0);
}
