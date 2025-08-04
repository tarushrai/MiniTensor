#include "tensor.h"
#include <iostream>
#include <stdexcept>

Tensor Tensor::add(const Tensor &other) const {
    if (rows_ != other.rows_ || cols_ != other.cols_)
        throw std::invalid_argument("Tensor dimensions must match for addition.");

    Tensor result(rows_, cols_);
    for (int i = 0; i < rows_; ++i)
        for (int j = 0; j < cols_; ++j)
            result.set_value(i, j, get_value(i, j) + other.get_value(i, j));
    return result;
}

Tensor Tensor::multiply(const Tensor &other) const {
    if (rows_ != other.rows_ || cols_ != other.cols_)
        throw std::invalid_argument("Tensor dimensions must match for multiplication.");

    Tensor result(rows_, cols_);
    for (int i = 0; i < rows_; ++i)
        for (int j = 0; j < cols_; ++j)
            result.set_value(i, j, get_value(i, j) * other.get_value(i, j));
    return result;
}

float Tensor::dot(const Tensor &other) const {
    if (rows_ != other.rows_ || cols_ != other.cols_)
        throw std::invalid_argument("Tensor dimensions must match for dot product.");

    float result = 0.0f;
    for (int i = 0; i < rows_; ++i)
        for (int j = 0; j < cols_; ++j)
            result += get_value(i, j) * other.get_value(i, j);
    return result;
}
