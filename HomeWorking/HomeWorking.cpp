#include <iostream>
#include <fstream>

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Rus");

    std::ifstream inputFile("in.txt");
    if (!inputFile) {
        std::cerr << "Ошибка открытия файла." << std::endl;
        return EXIT_FAILURE;
    }

    int rows, cols;
    inputFile >> rows >> cols;

    int array[50][50];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            inputFile >> array[i][j];
        }
    }

    inputFile.close();

    for (int i = 0; i < rows; ++i) {
        for (int j = cols - 1; j >= 0; --j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return EXIT_SUCCESS;
}