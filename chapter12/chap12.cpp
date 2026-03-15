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
    // *ptr = a;
    ptr = &a;
}

// 函数参数按值传递,即拷贝副本
int main() {
    std::string str = "10";
    std::string *p = &str;
    func3(p);
    std::cout << str << std::endl;
}
