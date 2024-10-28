
#include <iostream>
#include <string>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(int argc, char** argv) {
    setlocale(LC_ALL, "rus");

    int count{ 0 };

    std::cout << "Введите число: ";
    std::cin >> count;

    std::cout << "Числа Фибоначчи: ";

    for (int i = 0; i < count; ++i) {
        std::cout << fibonacci(i) << " ";
    }

    std::cout << std::endl;

    return EXIT_SUCCESS;
}