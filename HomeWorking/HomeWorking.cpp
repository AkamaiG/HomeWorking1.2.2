#include <iostream>
#include <string>

void reverse(int* arr, int size) {
    for (int i = 0; i < size / 2; ++i) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

void printArray(const int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main(int argc, char** argv) {
    setlocale(LC_ALL, "ru");

    const int size = 10;
    int arr[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    std::cout << "До функции reverse: ";
    printArray(arr, size);

    reverse(arr, size);

    std::cout << "После функции reverse: ";
    printArray(arr, size);

    return EXIT_SUCCESS;
}