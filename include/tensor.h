#ifndef TENSOR_H
#define TENSOR_H

#include <vector>
#include <iostream>

class Tensor {
private:
    std::vector<int> dims;
    std::vector<float> data;

    int getOffset(const std::vector<int>& indices) const;

public:
    Tensor(const std::vector<int>& dims);

    float& at(const std::vector<int>& indices);
    const float& at(const std::vector<int>& indices) const;

    Tensor add(const Tensor& other) const;
    Tensor multiply(const Tensor& other) const;
    float dot(const Tensor& other) const;

    void print() const;
};

#endif
