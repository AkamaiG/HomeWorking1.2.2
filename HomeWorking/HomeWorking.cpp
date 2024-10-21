#include <iostream>

int main()
{
    /* Установка кодировки */
    setlocale(LC_ALL, "rus");

    /* Инициализация переменных */
    int writeNumber{ 0 };
    int totalClientNumber{ 0 };
    
    /* Код программы */
    std::cout << "Введите целое число или число '0', чтобы закончить:" << std::endl;
    std::cin >> writeNumber;
    while (writeNumber != 0) {
        totalClientNumber += writeNumber;
        std::cout << "Введите целое число или число '0', чтобы закончить:" << std::endl;
        std::cin >> writeNumber;
    }
    std::cout << "Сумма:" << totalClientNumber << std::endl;

    return EXIT_SUCCESS;
}
