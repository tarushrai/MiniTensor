#pragma once
#include <vector>
#include <iostream>
#include <stdexcept>
#include <iomanip>

class Tensor {
private:
    std::vector<float> data;
    std::vector<size_t> shape;

public:
    // Constructors
    Tensor(std::vector<size_t> shape_, float value = 0.0f);

    // Element Access
    float& operator()(size_t i, size_t j);
    float operator()(size_t i, size_t j) const;

    // Getters
    std::vector<size_t> get_shape() const;

    // Operations
    Tensor operator+(const Tensor& other) const;
    Tensor operator*(const Tensor& other) const;

    // Utilities
    void print() const;

    // Broadcasting
    static Tensor broadcast_add(const Tensor& A, const Tensor& B);
    static Tensor broadcast_mul(const Tensor& A, const Tensor& B);
};
