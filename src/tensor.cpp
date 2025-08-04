#include "tensor.h"
#include <stdexcept> // For std::invalid_argument

Tensor Tensor::add(const Tensor& other) const {
    if (data.size() != other.data.size()) {
        throw std::invalid_argument("Size mismatch in add()");
    }

    Tensor result(data.size());
    for (size_t i = 0; i < data.size(); ++i) {
        result.data[i] = data[i] + other.data[i];
    }
    return result;
}

Tensor Tensor::multiply(const Tensor& other) const {
    if (data.size() != other.data.size()) {
        throw std::invalid_argument("Size mismatch in multiply()");
    }

    Tensor result(data.size());
    for (size_t i = 0; i < data.size(); ++i) {
        result.data[i] = data[i] * other.data[i];
    }
    return result;
}

float Tensor::dot(const Tensor& other) const {
    if (data.size() != other.data.size()) {
        throw std::invalid_argument("Size mismatch in dot()");
    }

    float sum = 0;
    for (size_t i = 0; i < data.size(); ++i) {
        sum += data[i] * other.data[i];
    }
    return sum;
}
