# MiniTensor 🧮

A lightweight tensor arithmetic engine built in Modern C++ for educational and systems-level experimentation.

## ✅ Features
- Basic Tensor operations: `+`, `*`, shape config
- Broadcasting support (coming)
- Clean, minimal API
- Easy extensibility to CUDA and autograd

## 🚀 Example

```cpp
Tensor A({2, 3}, 1.0f);
Tensor B({2, 3}, 2.0f);
Tensor C = A + B;
C.print();
