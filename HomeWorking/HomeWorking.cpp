#include <iostream>
#include <string>

int main()
{
    /* Установка кодировки */
    setlocale(LC_ALL, "rus");
    
    /* Инициализация переменных массива */
    const int rows = 3;
    const int cols = 6;
    int array[rows][cols] = {
        {5, 2, 8, 1, 6, 4},
        {9, 0, 7, 3, 12, 11},
        {14, 10, 15, 18, 17, 16}
    };

    /* Выводим массив */
    std::cout << "Массив:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << array[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    /* Инициализация переменных для минимального и максимального значения */
    int minIndex[2] = { 0, 0 };
    int maxIndex[2] = { 0, 0 };
    int minValue = array[0][0];
    int maxValue = array[0][0];

    /* Находим минимальное и максимальное значения и их индексы */
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (array[i][j] < minValue) {
                minValue = array[i][j];
                minIndex[0] = i;
                minIndex[1] = j;
            }
            if (array[i][j] > maxValue) {
                maxValue = array[i][j];
                maxIndex[0] = i;
                maxIndex[1] = j;
            }
        }
    }

    /* Выводим индексы минимального и максимального элемента */
    std::cout << "Индекс минимального элемента: " << minIndex[0] << " " << minIndex[1] << std::endl;
    std::cout << "Индекс максимального элемента: " << maxIndex[0] << " " << maxIndex[1] << std::endl;


    return EXIT_SUCCESS;
}
