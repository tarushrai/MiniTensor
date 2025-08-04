#pragma once
#include <vector>

class Tensor {
public:
    Tensor(int rows, int cols);
    void set_value(int row, int col, float value);
    float get_value(int row, int col) const;
    void print() const;

    // New ops
    Tensor add(const Tensor &other) const;
    Tensor multiply(const Tensor &other) const;
    float dot(const Tensor &other) const;

private:
    int rows_, cols_;
    std::vector<std::vector<float>> data_;
};
