#include <iostream>
#include <string>

int main(int argc, char** argv) {
    setlocale(LC_ALL, "RUS");

    std::string firstName;
    std::string lastName;

    // Запрос имени у пользователя
    std::cout << "Введите имя: ";
    std::getline(std::cin, firstName);

    std::cout << "Введите фамилию: ";
    std::getline(std::cin, lastName);

    std::string fullName = firstName + " " + lastName;

    std::cout << "Здравствуйте, " << fullName << "!" << std::endl;

    return EXIT_SUCCESS;
}