#include "tensor.h"

int main() {
    Tensor A({2, 3});
    Tensor B({2, 3});

    // Fill A and B with values
    int val = 1;
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 3; ++j) {
            A.at({i, j}) = val;
            B.at({i, j}) = val * 2;
            ++val;
        }

    Tensor C = A.add(B);
    Tensor D = A.multiply(B);
    float dot = A.dot(B);

    std::cout << "Tensor A: ";
    A.print();
    std::cout << "Tensor B: ";
    B.print();
    std::cout << "A + B = ";
    C.print();
    std::cout << "A * B = ";
    D.print();
    std::cout << "A . B = " << dot << "\n";

    return 0;
}
