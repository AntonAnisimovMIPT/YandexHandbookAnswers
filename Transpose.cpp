#include <iostream>
#include <vector>

std::vector<std::vector<int>> Transpose(const std::vector<std::vector<int>>& matrix) 
{

    //создадим транспонированную матрицу
    std::vector<std::vector<int>> tr_matrix(matrix[0].size());

    for (size_t i = 0; i != matrix[0].size(); ++i)
    {
        tr_matrix[i].resize(matrix.size());
        for (size_t j = 0; j != matrix.size(); ++j)
        {
            tr_matrix[i][j] = matrix[j][i];
            
        }
    }

    return tr_matrix;
    
}
