#include <cmath>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include "utils.h"
// #include <Eigen/Dense>
#include <eigen3/unsupported/Eigen/CXX11/Tensor>
using namespace std;
using namespace Eigen;

void writeToCSVfile(string name, MatrixXf matrix)
{
    ofstream file(name.c_str());

    for (int i = 0; i < matrix.rows(); i++)
    {
        for (int j = 0; j < matrix.cols(); j++)
        {
            string str = std::to_string(matrix(i, j));
            if (j + 1 == matrix.cols())
            {
                file << str;
            }
            else
            {
                file << str << ',';
            }
        }
        file << '\n';
    }
}

int main()
{
    MatrixXf m = MatrixXf::Random(35, 3);
    Eigen::Tensor<double, 3> epsilon(3, 3, 3); // 3 dimensions (4x5x6)
    epsilon.setZero();
    epsilon(0, 1, 2) = 1;
    epsilon(1, 2, 0) = 1;
    epsilon(2, 0, 1) = 1;
    epsilon(1, 0, 2) = -1;
    epsilon(2, 1, 0) = -1;
    epsilon(0, 2, 1) = -1;
    epsilon.setZero();
    epsilon(0, 1, 2) = 1;
    epsilon(0, 2, 1) = -1;
    writeToCSVfile("test.cvs", m);
    return 0;
}