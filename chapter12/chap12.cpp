//
// Created by Lenovo on 2026/3/7.
//
#include <iostream>

// 指针更改为指向其他对象
int point() {
    std::cout << "point start ..." << '\n';
    int x{5};
    int *ptr{&x};
    std::cout << x << '\n';
    std::cout << *ptr << '\n';

    int y{10};
    ptr = &y;  // 修改指针指向其他对象
    std::cout << x << '\n';
    std::cout << *ptr << '\n';
    std::cout << "point end ..." << '\n';
    return 0;
}

int point1() {
    std::cout << "point1 start ..." << '\n';
    int x{5};
    int* ptr{&x};
    std::cout << x << '\n';
    std::cout << *ptr << '\n';
    *ptr = 10;  // 修改指针指向的值
    std::cout << x << '\n';
    std::cout << *ptr << '\n';
    std::cout << "point1 end ..." << '\n';
    return 0;
}

int main() {
    int x{5};
    std::cout << x << '\n'; // 打印变量 x 的值
    std::cout << &x << '\n'; // 打印变量 x 的地址
    std::cout << *(&x) << '\n'; // 解地址
    int *ptr1{&x};
    std::cout << *ptr1 << '\n';
    point();
    point1();
}
