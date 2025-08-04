// src/tensor.h

#ifndef TENSOR_H
#define TENSOR_H

#include <vector>

class Tensor {
private:
    std::vector<std::vector<float>> data;
    int rows, cols;

public:
    Tensor(int rows, int cols);
    void fill(float value);
    void print() const;

    Tensor add(const Tensor& other) const;
    Tensor multiply(const Tensor& other) const;
    float dot(const Tensor& other) const;
};

#endif
