#include <iostream>
using namespace std;

void insertion_sort(int arr[],int size) {
	for (int i = 1; i < size; ++i) {
		int key = arr[i];
		int j = i - 1;

		while (j >= 0 && key < arr[j]) {
			arr[j + 1] = arr[j];
			j -= 1;
		}
		arr[j + 1] = key;
	}
}

void print(int arr[], int size) {
	for (int i = 0; i < size; ++i)
		cout << arr[i] << " ";
}
int main() {

	int arr[10] = { 2,3,9,1,5,4,7,0,8,6 };
	insertion_sort(arr[], 10);
	print(arr[], 10);

	return 0;
}