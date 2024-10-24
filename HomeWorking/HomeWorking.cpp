#include <iostream>
#include <string>

int main()
{
    /* Установка кодировки */
    setlocale(LC_ALL, "rus");

    /* Инициализация переменных */
    int array[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

    int minNumber = array[0];
    int maxNumber = array[0];
    std::string numbers;

    /* Узнаем длину массива для цикла */
    int size = sizeof(array) / sizeof(array[0]);

    /* Собираем содержимое массива в строку */
    for (int i = 0; i < size; ++i) {
        numbers += std::to_string(array[i]) + " ";
    }

    /* Выводим содержимое строки массива */
    std::cout << "Массив: " << numbers << std::endl;

    for (int number : array) {
        if (number < minNumber) {
            minNumber = number;
        }

        if (number > maxNumber) {
            maxNumber = number;
        }
    }

    std::cout << "Минимальный элемент: " << minNumber << std::endl;
    std::cout << "Максимальный элемент: " << maxNumber << std::endl;


    return EXIT_SUCCESS;
}
