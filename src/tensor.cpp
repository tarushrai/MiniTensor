// src/tensor.cpp

#include "tensor.hpp"

Tensor::Tensor(const std::vector<int>& shape) : shape(shape) {
    int size = 1;
    for (int dim : shape)
        size *= dim;
    data.resize(size, 0.0f);  // Initialize with zeros
}

void Tensor::print() const {
    std::cout << "Tensor shape: [ ";
    for (int dim : shape)
        std::cout << dim << " ";
    std::cout << "]\n";

    std::cout << "Tensor data: [ ";
    for (float val : data)
        std::cout << val << " ";
    std::cout << "]\n";
}
