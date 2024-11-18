#include <iostream>
#include <fstream>

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Rus");
    int size;

    std::cout << "Введите размер массива: ";
    std::cin >> size;

    int* array = new int[size];

    for (int i = 0; i < size; ++i) {
        std::cout << "array[" << i << "] = ";
        std::cin >> array[i];
    }

    std::ofstream outFile("out.txt");
    if (!outFile) {
        std::cerr << "Не удалось открыть файл для записи." << std::endl;
        delete[] array;
        return EXIT_FAILURE;
    }

    outFile << size << std::endl;

    for (int i = size - 1; i >= 0; --i) {
        outFile << array[i] << " ";
    }

    outFile.close();

    delete[] array;

    return EXIT_SUCCESS;
}