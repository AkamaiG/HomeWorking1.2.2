#include <iostream>
#include <string>

int main()
{
    /* Установка кодировки */
    setlocale(LC_ALL, "rus");

    /* Инициализация переменных */
    bool a = true;
    bool b = false;

    /* Таблица истинности */
    std::cout << "Оператор: ||" << std::endl;
    std::cout << (a ? "true" : "false") << ' ' << (!b ? "true" : "false") << ' ' << ((a || b) ? "true" : "false") << std::endl;
    std::cout << (!a ? "true" : "false") << ' ' << (!b ? "true" : "false") << ' ' << ((a || b) ? "true" : "false") << std::endl;
    std::cout << (a ? "true" : "false") << ' ' << (b ? "true" : "false") << ' ' << ((a || b) ? "true" : "false") << std::endl;
    std::cout << (!a ? "true" : "false") << ' ' << (b ? "true" : "false") << ' ' << (!(a || b) ? "true" : "false") << std::endl;

    std::cout << std::endl;

    std::cout << "Оператор: &&" << std::endl;
    std::cout << (a ? "true" : "false") << ' ' << (!b ? "true" : "false") << ' ' << (!(a && b) ? "true" : "false") << std::endl;
    std::cout << (!a ? "true" : "false") << ' ' << (!b ? "true" : "false") << ' ' << ((a && b) ? "true" : "false") << std::endl;
    std::cout << (a ? "true" : "false") << ' ' << (b ? "true" : "false") << ' ' << ((a && b) ? "true" : "false") << std::endl;
    std::cout << (!a ? "true" : "false") << ' ' << (b ? "true" : "false") << ' ' << ((a && b) ? "true" : "false") << std::endl;

    return EXIT_SUCCESS;
}