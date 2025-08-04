#include "../include/tensor.hpp"

int main() {
    // Create two 2x3 tensors
    Tensor A({2, 3}, 1.0f);   // Fills with 1.0
    Tensor B({2, 3}, 2.0f);   // Fills with 2.0

    std::cout << "Tensor A:\n";
    A.print();

    std::cout << "\nTensor B:\n";
    B.print();

    // Element-wise addition
    Tensor C = A + B;
    std::cout << "\nA + B:\n";
    C.print();

    // Element-wise multiplication
    Tensor D = A * B;
    std::cout << "\nA * B:\n";
    D.print();

    return 0;
}
