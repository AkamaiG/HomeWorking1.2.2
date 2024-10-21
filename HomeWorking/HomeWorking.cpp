#include <iostream>

int main()
{
    /* Установка кодировки */
    setlocale(LC_ALL, "rus");

    /* Инициализация переменных */
    int writeNumber{ 0 };
    int sum{ 0 };
    
    /* Код программы */
    std::cout << "Введите целое число:" << std::endl;
    std::cin >> writeNumber;

    /* Если отрицательное то приводим */
    if (writeNumber < 0) {
        writeNumber = -writeNumber;
    }

    /* Цикл перебора остатка */
    while (writeNumber > 0) {
        sum += writeNumber % 10;
        writeNumber /= 10;
    }
    
    /* Итоговый результат */
    std::cout << "Сумма цифр: " << sum << std::endl;

    return EXIT_SUCCESS;
}
