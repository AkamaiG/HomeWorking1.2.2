#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char** argv) {
    setlocale(LC_ALL, "rus");

    std::ifstream file("in.txt");

    if (!file.is_open()) {
        std::cerr << "Ошибка при открытии файла." << std::endl;
        return 1;
    }

    std::string word;
    while (file >> word) {
        std::cout << word << std::endl;
    }

    file.close();
    return EXIT_SUCCESS;
}