#include <stdio.h>

int *sortBySelectionSort(int numbers[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (numbers[j] < numbers[min]) {
                min = j;
            }
        }
        int temp = numbers[i];
        numbers[i] = numbers[min];
        numbers[min] = temp;
    }
    return numbers;
}

void printArray(int array[], int length) {
    for (int i = 0; i < length; i++) printf("%d ", array[i]);
}

int main() {
    int myArray[] = {33, 44, 99, 0, 123, 9999};
    int length = 6;
    printArray(sortBySelectionSort(myArray, length), length);

}
