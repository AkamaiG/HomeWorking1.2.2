#include <iostream>

int main()
{
    /* Установка кодировки */
    setlocale(LC_ALL, "rus");
    
    /* Инициализация переменных */
    int a, b, c;

    /* Инпут пользователя */
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << "Введите третье число: ";
    std::cin >> c;

    // Сравниваем числа и находим максимальное, среднее и минимальное
    int max = (a >= b && a >= c) ? a : (b >= a && b >= c) ? b : c;
    int min = (a <= b && a <= c) ? a : (b <= a && b <= c) ? b : c;
    int mid = (a != max && a != min) ? a : (b != max && b != min) ? b : c;

    // Выводим числа в порядке убывания
    std::cout << "Результат: " << max << " " << mid << " " << min << std::endl;

    return EXIT_SUCCESS;
}