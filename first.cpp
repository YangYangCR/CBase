//
// Created by Lenovo on 2026/3/1.
//

#include <iostream>
#define MY_NAME "Tom" // 宏定义 将 MY_NAME 替换为 First
#include "add.h"  // 用户定义的头文件是 .h 后缀  标准自带的头文件是用尖括号
using namespace std; // 使用命名空间，std::cout 可以直接写成 cout


void doPrint() {
    std::cout << "doPrint" << std::endl;
}

void printValue(int x) {
    std::cout << x << std::endl;
}

int main() {
    // 声明语句
    int n = 1;
    n = n + 1;
    std::cout << "n=" << n << std::endl;

    // 这句话是赋值语句
    int c(6);
    std::cout << "c=" << c << std::endl;

    // 这句话也是赋值语句
    int width = {1};
    std::cout << "width=" << width << std::endl;

    // int x{};
    // // 等待输入一个值
    // std::cin >> x;
    // std::cout << "x=" << x << std::endl;

    doPrint();
    doPrint();
    printValue(10);
    std::cout << "add(1, 2) " << add(1, 2) << std::endl;
    cout << MY_NAME << endl;
    return 100;
}
