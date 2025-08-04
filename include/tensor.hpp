// include/tensor.hpp

#ifndef TENSOR_HPP
#define TENSOR_HPP

#include <vector>
#include <iostream>

class Tensor {
public:
    Tensor(const std::vector<int>& shape);
    void print() const;

private:
    std::vector<int> shape;
    std::vector<float> data;
};

#endif // TENSOR_HPP
