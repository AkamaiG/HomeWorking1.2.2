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
    std::string sex{};          // Пол
    std::string zodiacSign{};   // Знак зодиака
    int age{};                  // Возраст

    /* Форма для пользователя */
    std::cout << "Введите пол (м/ж):\n";
    std::getline(std::cin >> std::ws, sex);
    std::cout << "Введите знак зодиака (в нижнем регистре):\n";
    std::getline(std::cin >> std::ws, zodiacSign);
    std::cout << "Введите возраст:\n";
    std::cin >> age;
    std::cout << "Ваше предсказание:\n";

    /* Проверка с помощью операторов */
    if (sex == "м" && (zodiacSign == "рыба" || zodiacSign == "рак" || zodiacSign == "скорпион") && age < 40)
    {
        std::cout << "Сегодня очень плодотворный день. Можно добиться того, что прежде казалось почти невозможным.\n" << std::endl;
    }
    else if (sex == "ж" && (zodiacSign == "телец" || zodiacSign == "козерог" || zodiacSign == "дева") && age >= 15 && age <= 30)
    {
        std::cout << "Сегодняшний вечер подходит для общения с друзьями, проведения домашних праздников и импровизированных вечеринок.\n" << std::endl;
        std::cout << "Будет не только весело, но и интересно : найдётся дело, которое увлечёт всех.\n" << std::endl;
    }
    else
    {
        std::cout << "Гороскоп для вас находится в разработке. Приходите чуточку позже ;)\n" << std::endl;
    }

    return EXIT_SUCCESS;
}