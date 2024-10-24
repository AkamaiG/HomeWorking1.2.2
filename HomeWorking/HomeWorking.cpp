#include <iostream>
#include <string>

int main()
{
    /* Установка кодировки */
    setlocale(LC_ALL, "rus");
    
    /* Инициализация массива целых чисел */
    int arr[10] = { 34, 12, 5, 67, 23, 90, 1, 45, 28, 76 };

    /* Вывод массива до сортировки */
    std::cout << "Массив до сортировки: ";
    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    /* Сортировка массива пузырьком в обратном порядке */
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    /* Вывод массива после сортировки */
    std::cout << "Массив после сортировки: ";
    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return EXIT_SUCCESS;
}
