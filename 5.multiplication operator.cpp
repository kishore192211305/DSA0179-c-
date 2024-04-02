#include <iostream>
#include <vector>

class Matrix {
private:
    std::vector<std::vector<int>> data;

public:
    Matrix(const std::vector<std::vector<int>>& d) : data(d) {}

    Matrix operator*(const Matrix& other) {
        int rows1 = data.size();
        int cols1 = data[0].size();
        int rows2 = other.data.size();
        int cols2 = other.data[0].size();

        if (cols1 != rows2) {
            std::cerr << "Cannot multiply matrices: incompatible dimensions" << std::endl;
            return Matrix({{}});
        }

        std::vector<std::vector<int>> result(rows1, std::vector<int>(cols2, 0));

        for (int i = 0; i < rows1; ++i) {
            for (int j = 0; j < cols2; ++j) {
                for (int k = 0; k < cols1; ++k) {
                    result[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }

        return Matrix(result);
    }

    void display() {
        for (const auto& row : data) {
            for (int val : row) {
                std::cout << val << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    std::vector<std::vector<int>> mat1 = {{1, 2, 3}, {4, 5, 6}};
    std::vector<std::vector<int>> mat2 = {{7, 8}, {9, 10}, {11, 12}};

    Matrix matrix1(mat1);
    Matrix matrix2(mat2);

    std::cout << "Matrix 1:" << std::endl;
    matrix1.display();

    std::cout << "Matrix 2:" << std::endl;
    matrix2.display();

    Matrix result = matrix1 * matrix2;

    std::cout << "Matrix 1 * Matrix 2:" << std::endl;
    result.display();

    return 0;
}