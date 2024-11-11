#include <iostream>
#include <string>

int** create_two_dim_array(int rows, int cols) {
    int** array = new int* [rows];
    for (int i = 0; i < rows; i++) {
        array[i] = new int[cols];
    }
    return array;
}

void fill_two_dim_array(int** array, int rows, int cols) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            array[i - 1][j - 1] = i * j;
        }
    }
}

void print_two_dim_array(int** array, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << array[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}

void delete_two_dim_array(int** array, int rows) {
    for (int i = 0; i < rows; i++) {
        delete[] array[i];
    }
    delete[] array;
}

int main(int argc, char** argv) {
    setlocale(LC_ALL, "RUS");

    int rows, cols;

    std::cout << "Введите количество строк: ";
    std::cin >> rows;
    std::cout << "Введите количество столбцов: ";
    std::cin >> cols;

    int** multiplication_table = create_two_dim_array(rows, cols);
    fill_two_dim_array(multiplication_table, rows, cols);

    std::cout << "Таблица умножения:" << std::endl;
    print_two_dim_array(multiplication_table, rows, cols);

    delete_two_dim_array(multiplication_table, rows);

    return EXIT_SUCCESS;
}