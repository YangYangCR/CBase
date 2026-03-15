//
// Created by Lenovo on 2026/3/7.
//
#include <iostream>


void func0(std::string ptr) {
    std::string a = "20";
    ptr = a;
}

void func1(std::string &ptr) {
    std::string a = "20";
    ptr = a;
}

void func2(std::string *ptr) {
    std::string a = "20";
    *ptr = a;
}

void func3(std::string *&ptr) {
    std::string a = "20";
    ptr = &a;
}

// 函数参数按值传递,即拷贝副本
int main() {
    std::string str = "10";
    std::string *p = &str;
    // func0(str);
    // func1(str);
    // func2(p);
    func3(p); //编译报错 它要求 传入一个“指针变量”，而 &str 只是一个临时值（rvalue），不是变量。
    std::cout << str << std::endl;
}
