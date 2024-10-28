#include <iostream>

void calc_func(int value, int power, int result)
{
	for (int i = 0; i < power; i++)
	{
		result *= value;
	}

	std::cout << value << " в степени " << power << " = " << result << std::endl;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "rus");

	calc_func(5, 2, 1);
	calc_func(3, 3, 1);
	calc_func(4, 4, 1);

	return EXIT_SUCCESS;
}