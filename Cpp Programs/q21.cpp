#include <iostream>

class Matrix {
public:
    int rows;
    int cols;
    int** data;

    Matrix(int r, int c) : rows(r), cols(c) {
        // Dynamically allocate the 2D array
        data = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new int[cols];
        }
    }

    ~Matrix() {
        // Deallocate the 2D array
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }

    void input() {
        std::cout << "Enter elements of the matrix (" << rows << "x" << cols << "):\n";
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cin >> data[i][j];
            }
        }
    }

    void display() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << data[i][j] << " ";
            }
            std::cout << "\n";
        }
    }
};

Matrix multiply(const Matrix& A, const Matrix& B) {
    if (A.cols != B.rows) {
        throw std::invalid_argument("Incompatible matrices for multiplication.");
    }

    Matrix C(A.rows, B.cols);
    
    for (int i = 0; i < A.rows; ++i) {
        for (int j = 0; j < B.cols; ++j) {
            C.data[i][j] = 0; // Initialize the result matrix cell
            for (int k = 0; k < A.cols; ++k) {
                C.data[i][j] += A.data[i][k] * B.data[k][j];
            }
        }
    }

    return C;
}

int main() {
    int rowsA, colsA, rowsB, colsB;

    std::cout << "Enter dimensions of matrix A (rows columns): ";
    std::cin >> rowsA >> colsA;
    Matrix A(rowsA, colsA);
    A.input();

    std::cout << "Enter dimensions of matrix B (rows columns): ";
    std::cin >> rowsB >> colsB;
    Matrix B(rowsB, colsB);
    B.input();

    Matrix C = multiply(A, B);
    std::cout << "Result of A * B:\n";
    C.display();
    return 0;
}
