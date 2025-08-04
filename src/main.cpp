#include "tensor.h"
#include <iostream>

int main() {
    Tensor A(2, 2);
    A.set_value(0, 0, 1.0f);
    A.set_value(0, 1, 2.0f);
    A.set_value(1, 0, 3.0f);
    A.set_value(1, 1, 4.0f);

    Tensor B(2, 2);
    B.set_value(0, 0, 5.0f);
    B.set_value(0, 1, 6.0f);
    B.set_value(1, 0, 7.0f);
    B.set_value(1, 1, 8.0f);

    std::cout << "A:\n"; A.print();
    std::cout << "B:\n"; B.print();

    Tensor C = A.add(B);
    std::cout << "A + B:\n"; C.print();

    Tensor D = A.multiply(B);
    std::cout << "A * B (element-wise):\n"; D.print();

    float dot = A.dot(B);
    std::cout << "A . B (dot product): " << dot << "\n";

    return 0;
}
