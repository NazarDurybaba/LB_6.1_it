#include <iostream>
#include <ctime>

using namespace std;

void generateArray(int* arr, int size, int min, int max) {
    srand(time(0));
    for (int i = 0; i < size; i++) {
        arr[i] = min + rand() % (max - min + 1);
    }
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int countNegativeOrOdd(int* arr, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0 || arr[i] % 2 != 0) {
            count++;
        }
    }
    return count;
}

int sumNegativeOrOdd(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0 || arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }
    return sum;
}

void replaceNegativeOrOddWithZero(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0 || arr[i] % 2 != 0) {
            arr[i] = 0;
        }
    }
}

int main() {
    const int size = 24;
    int arr[size];
    generateArray(arr, size, -50, 15);
    printArray(arr, size);
    int count = countNegativeOrOdd(arr, size);
    int sum = sumNegativeOrOdd(arr, size);
    replaceNegativeOrOddWithZero(arr, size);
    printArray(arr, size);
    cout << "Count: " << count << endl;
    cout << "Sum: " << sum << endl;
    return 0;
}
