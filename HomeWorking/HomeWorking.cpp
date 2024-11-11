#include <iostream>
#include <string>

int main(int argc, char** argv) {
    setlocale(LC_ALL, "RUS");

    int size;

    std::cout << "Введите размер массива: ";
    std::cin >> size;

    int* array = new int[size];

    for (int i = 0; i < size; ++i) {
        std::cout << "array[" << i << "] = ";
        std::cin >> array[i];
    }

    std::cout << "Введённый массив: ";
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    delete[] array;

    return EXIT_SUCCESS;
}