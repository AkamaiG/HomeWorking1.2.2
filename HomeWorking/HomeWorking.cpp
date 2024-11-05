
#include <iostream>
#include <string>

namespace Math
{
    namespace Addition
    {
		int calc(int a, int b)
		{
			return a + b;
		}
    }

    namespace Subtraction
    {
        int calc(int a, int b)
		{
			return a - b;
		}
    }

    namespace Multiplication
	{
		int calc(int a, int b)
		{
			return a * b;
		}
	}

	namespace Division
	{
		int calc(int a, int b)
		{
			return a / b;
		}
	}
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "ru");

	int x = 5, y = 10;

	std::cout << "x = " << x << ", y = " << y << std::endl;
	std::cout << "Сложение: " << Math::Addition::calc(x, y) << std::endl;
	std::cout << "Вычитание: " << Math::Subtraction::calc(x, y) << std::endl;
	std::cout << "Умножение: " << Math::Multiplication::calc(x, y) << std::endl;
	std::cout << "Деление: " << Math::Division::calc(x, y) << std::endl;

    return EXIT_SUCCESS;
}