#ifndef TENSOR_H
#define TENSOR_H

#include <vector>

class Tensor {
private:
    int rows, cols;
    std::vector<std::vector<float>> data;

public:
    Tensor add(const Tensor& other) const;
Tensor multiply(const Tensor& other) const;
float dot(const Tensor& other) const;
    Tensor(int rows, int cols);
    void set_value(int i, int j, float value);
    float get_value(int i, int j) const;
    void print() const;
};

#endif
