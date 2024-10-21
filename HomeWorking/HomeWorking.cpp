#include <iostream>
#include <string>
#include <vector>

int main()
{
    /* Установка кодировки */
    setlocale(LC_ALL, "rus");

    /* Инициализация переменных */
    int writeNumber{ 0 };

    std::vector<int> vector{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    /* Код программы */
    std::cout << "Введите целое число:" << std::endl;
    std::cin >> writeNumber;

    std::cout << writeNumber << std::endl;

    for (const auto &vectorItem : vector)
    {
        int result{ 0 };
        std::cout << writeNumber << " x " << vectorItem << " = " << (result = writeNumber * vectorItem) << std::endl;
    }

    return EXIT_SUCCESS;
}
