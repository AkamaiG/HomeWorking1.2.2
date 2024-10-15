#include <iostream>
#include <Windows.h>
#include <string>

int main()
{
    setlocale(LC_ALL, "rus");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    std::cout << "Введите слово:\n";
    std::string stringAnswer{};
    std::getline(std::cin >> std::ws, stringAnswer);
    std::cout << "Вы ввели:\n";
    std::cout << stringAnswer << std::endl;
}