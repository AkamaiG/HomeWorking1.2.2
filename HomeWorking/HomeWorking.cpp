#include <iostream>
#include <Windows.h>
#include <string>

int main()
{
    /* Установка кодировки */
    setlocale(LC_ALL, "rus");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    /* Инициализация переменных */
    int numberOne{};    // Введенное число 1
    int numberTwo{};    // Введенное число 2

    /* Форма для пользователя */
    std::cout << "Введите целое число:\n";
    std::cin >> numberOne;
    std::cout << "Введите целое число:\n";
    std::cin >> numberTwo;

    /* Проверка введенных чисел на допустимый диапазон -100 - 100 */
    if ((numberOne < -100 || numberOne > 100) || (numberTwo < -100 || numberTwo > 100))
    {
        std::cout << "Ошибка! Одно из чисел вне диапазона (-100 - 100)!\n" << std::endl;
        return EXIT_FAILURE;
    }

    /* Работа с числами с помощью операторов */
    if (numberOne > numberTwo)
    {
        std::cout << numberOne << " больше чем " << numberTwo << std::endl;
    }
    else if (numberOne < numberTwo)
    {
        std::cout << numberOne << " меньше чем " << numberTwo << std::endl;
    }
    else
    {
        std::cout << numberOne << " ровно " << numberTwo << std::endl;
    }

    return EXIT_SUCCESS;
}