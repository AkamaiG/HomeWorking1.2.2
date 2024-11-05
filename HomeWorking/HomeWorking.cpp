
#include <iostream>
#include <string>

void counting_function()
{
    static int count{};
	std::cout << "Количество вызовов функции counting_function(): " << ++count << std::endl;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "ru");

    for (int i = 0; i < 15; i++)
    {
        counting_function();
    }

    return EXIT_SUCCESS;
}