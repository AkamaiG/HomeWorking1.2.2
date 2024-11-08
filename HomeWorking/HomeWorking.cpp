#include <iostream>

void print(const int* array, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int main(int argc, char** argv) {
    int array1[] = { 1, 2, 3, 4, 5 };
    int array2[] = { 10, 20, 30 };
    int array3[] = { 7, 8, 9, 10, 11, 12, 13 };

    print(array1, sizeof(array1) / sizeof(array1[0]));

    print(array2, sizeof(array2) / sizeof(array2[0]));

    print(array3, sizeof(array3) / sizeof(array3[0]));

    return EXIT_SUCCESS;
}