#include <iostream>
#include <string>

int main()
{
    /* Установка кодировки */
    setlocale(LC_ALL, "rus");

    /* Инициализация переменных */
    std::string sex{};          // Пол
    std::string zodiacSign{};   // Знак зодиака
    int age{};                  // Возраст

    /* Форма для пользователя */
    std::cout << "Введите пол (м/ж):" << std::endl;
    std::getline(std::cin >> std::ws, sex);
    std::cout << "Введите знак зодиака (в нижнем регистре):" << std::endl;
    std::getline(std::cin >> std::ws, zodiacSign);
    std::cout << "Введите возраст:" << std::endl;
    std::cin >> age;
    std::cout << "Ваше предсказание:" << std::endl;

    /* Проверка с помощью операторов */
    if (sex == "м" && (zodiacSign == "рыба" || zodiacSign == "рак" || zodiacSign == "скорпион") && age < 40)
    {
        std::cout << "Сегодня очень плодотворный день. Можно добиться того, что прежде казалось почти невозможным." << std::endl;
    }
    else if (sex == "ж" && (zodiacSign == "телец" || zodiacSign == "козерог" || zodiacSign == "дева") && age >= 15 && age <= 30)
    {
        std::cout << "Сегодняшний вечер подходит для общения с друзьями, проведения домашних праздников и импровизированных вечеринок." << std::endl;
        std::cout << "Будет не только весело, но и интересно : найдётся дело, которое увлечёт всех." << std::endl;
    }
    else
    {
        std::cout << "Гороскоп для вас находится в разработке. Приходите чуточку позже ;)" << std::endl;
    }

    return EXIT_SUCCESS;
}