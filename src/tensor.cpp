#include "tensor.h"
#include <iostream>

Tensor::Tensor(int rows, int cols) : rows(rows), cols(cols) {
    data.resize(rows, std::vector<float>(cols, 0.0f));
}

void Tensor::set_value(int i, int j, float value) {
    data[i][j] = value;
}

float Tensor::get_value(int i, int j) const {
    return data[i][j];
}

void Tensor::print() const {
    for (const auto& row : data) {
        for (float val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
}
