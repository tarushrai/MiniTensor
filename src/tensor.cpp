#include "tensor.h"
#include <stdexcept>

Tensor::Tensor(const std::vector<int>& dims) : dims(dims) {
    int total = 1;
    for (int d : dims) total *= d;
    data.resize(total, 0.0f);
}

int Tensor::getOffset(const std::vector<int>& indices) const {
    if (indices.size() != dims.size())
        throw std::invalid_argument("Incorrect number of indices.");

    int offset = 0;
    int multiplier = 1;

    for (int i = dims.size() - 1; i >= 0; --i) {
        offset += indices[i] * multiplier;
        multiplier *= dims[i];
    }
    return offset;
}

float& Tensor::at(const std::vector<int>& indices) {
    return data[getOffset(indices)];
}

const float& Tensor::at(const std::vector<int>& indices) const {
    return data[getOffset(indices)];
}

Tensor Tensor::add(const Tensor& other) const {
    if (dims != other.dims)
        throw std::invalid_argument("Tensor dimensions must match for addition.");

    Tensor result(dims);
    for (size_t i = 0; i < data.size(); ++i)
        result.data[i] = data[i] + other.data[i];
    return result;
}

Tensor Tensor::multiply(const Tensor& other) const {
    if (dims != other.dims)
        throw std::invalid_argument("Tensor dimensions must match for multiplication.");

    Tensor result(dims);
    for (size_t i = 0; i < data.size(); ++i)
        result.data[i] = data[i] * other.data[i];
    return result;
}

float Tensor::dot(const Tensor& other) const {
    if (dims != other.dims)
        throw std::invalid_argument("Tensor dimensions must match for dot product.");

    float result = 0.0f;
    for (size_t i = 0; i < data.size(); ++i)
        result += data[i] * other.data[i];
    return result;
}

void Tensor::print() const {
    std::cout << "[ ";
    for (float val : data)
        std::cout << val << " ";
    std::cout << "]\n";
}
