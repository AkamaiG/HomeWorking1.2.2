#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <cstdlib>

using namespace std;

void printUniverse(int rows, int cols, char universe[][30], int generation, int aliveCount) {
    system("cls");
    cout << "Generation: " << generation << ". Alive cells: " << aliveCount << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << universe[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
}

int countAliveNeighbors(int rows, int cols, char universe[][30], int x, int y) {
    int aliveCount = 0;
    for (int i = -1; i <= 1; ++i) {
        for (int j = -1; j <= 1; ++j) {
            if (i == 0 && j == 0) continue;
            int newX = x + i, newY = y + j;
            if (newX >= 0 && newX < rows && newY >= 0 && newY < cols) {
                if (universe[newX][newY] == '*') {
                    aliveCount++;
                }
            }
        }
    }
    return aliveCount;
}

int main() {
    int rows, cols;
    char universe[20][30] = { '-' };

    ifstream inputFile("input.txt");
    if (!inputFile) {
        cout << "Error opening file!" << endl;
        return EXIT_FAILURE;
    }

    inputFile >> rows >> cols;

    int x, y;
    while (inputFile >> x >> y) {
        universe[x][y] = '*';
    }
    inputFile.close();

    int generation = 0;
    int aliveCount = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (universe[i][j] == '*') {
                aliveCount++;
            }
        }
    }

    while (aliveCount > 0) {
        char newUniverse[20][30] = { '-' };
        int newAliveCount = 0;

        if (generation != 0) {
            printUniverse(rows, cols, universe, generation, aliveCount);
            Sleep(1000);
		}

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                int neighbors = countAliveNeighbors(rows, cols, universe, i, j);
                if (universe[i][j] == '*' && (neighbors == 2 || neighbors == 3)) {
                    newUniverse[i][j] = '*';
                }
                else if (universe[i][j] == '-' && neighbors == 3) {
                    newUniverse[i][j] = '*';
                }
                else {
                    newUniverse[i][j] = '-';
                }

                if (newUniverse[i][j] == '*') {
                    newAliveCount++;
                }
            }
        }

        bool stable = true;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (universe[i][j] != newUniverse[i][j]) {
                    stable = false;
                    break;
                }
            }
            if (!stable) break;
        }


        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                universe[i][j] = newUniverse[i][j];
            }
        }

        if (stable) {
            printUniverse(rows, cols, universe, generation, aliveCount);
            cout << "Game over: stable configuration reached." << endl;
            break;
        }

        generation++;
        aliveCount = newAliveCount;
    }

    if (aliveCount == 0) {
        printUniverse(rows, cols, universe, generation, aliveCount);
        cout << "Game over: no living cells." << endl;
    }

    return EXIT_SUCCESS;
}