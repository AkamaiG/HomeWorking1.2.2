#include <iostream>
#include <string>

int main()
{
    /* Создаем массив из 10 целых чисел */
    int array[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

    /* Выводим элементы массива через запятую и пробел */
    for (int i = 0; i < 10; ++i) {
        std::cout << array[i];
        if (i < 9) { // Добавляем запятую и пробел, если это не последний элемент
            std::cout << ", ";
        }
    }

    std::cout << std::endl;

    return EXIT_SUCCESS;
}
