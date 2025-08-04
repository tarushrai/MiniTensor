#ifndef TENSOR_H
#define TENSOR_H

#include <vector>

class Tensor {
private:
    int rows, cols;
    std::vector<std::vector<float>> data;

public:
    Tensor(int rows, int cols);
    void set_value(int i, int j, float value);
    float get_value(int i, int j) const;
    void print() const;
};

#endif
