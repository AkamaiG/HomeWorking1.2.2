#include <iostream>
#include <string>

double* create_array(int size) {
    double* array = new double[size];

    for (int i = 0; i < size; ++i) {
        array[i] = 0.0;
    }

    return array;
}

int main(int argc, char** argv) {
    setlocale(LC_ALL, "RUS");

    int size;

    std::cout << "Введите размер массива: ";
    std::cin >> size;

    double* myArray = create_array(size);

    std::cout << "Массив:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    delete[] myArray;

    return EXIT_SUCCESS;
}