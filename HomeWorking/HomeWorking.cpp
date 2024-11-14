#include <iostream>
#include <string>

int main(int argc, char** argv) {
    setlocale(LC_ALL, "RUS");

    std::string secretWord = "netology";
    std::string userInput;

    std::cout << "Угадайте слово: ";

    while (true) {
        std::getline(std::cin, userInput);
        if (userInput == secretWord) {
            std::cout << "Правильно! Вы победили! Загаданное слово — " << secretWord << std::endl;
            break;
        }
        else {
            std::cout << "Неправильно\nУгадайте слово: ";
        }
    }

    return EXIT_SUCCESS;
}