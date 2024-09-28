#include <iostream>

int main() {
    int rows, cols;
    std::cout << "Enter number of rows: ";
    std::cin >> rows;
    std::cout << "Enter number of columns: ";
    std::cin >> cols;
    int** array = new int*[rows];

    for (int i = 0; i < rows; ++i) {
        array[i] = new int[cols];
    }
    std::cout << "Enter elements of the array:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Element [" << i << "][" << j << "]: ";
            std::cin >> array[i][j];
        }
    }

    std::cout << "\nThe 2-D array is:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
        delete[] array[i];
    }
    delete[] array;
    return 0;
}

