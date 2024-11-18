#include <iostream>
#include <fstream>

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Rus");

    std::ifstream inputFile("in.txt");
    if (!inputFile) {
        std::cerr << "Не удалось открыть файл!" << std::endl;
        return EXIT_FAILURE;
    }

    int n;
    inputFile >> n;

    int arr[100];

    for (int i = 0; i < n; ++i) {
        inputFile >> arr[i];
    }

    inputFile.close();

    for (int i = n - 1; i >= 0; --i) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;

    return EXIT_SUCCESS;
}