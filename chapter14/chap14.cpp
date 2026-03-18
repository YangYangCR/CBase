#include <iostream>

class Date {
    // class 成员默认是是 private, 只能被其它本类的成员访问, 加 public之后可以被其他类访问
    // 在C++中，以“m_”前缀开头命名私有数据成员是一种常见的约定
private:
    int m_day{};
    int m_month{};
    int m_year{};

    // 不加访问修饰符，默认是public的
public:
    void print() {
        std::cout << m_day << "/" << m_month << "/" << m_year << std::endl;
    }

    // 方法重载
public:
    void print(std::string str) {
        std::cout << m_day << "/" << m_month << "/" << m_year << std::endl;
        std::cout << str << std::endl;
    }

    Date() = default;

    Date(int day, int month, int year) {
        m_day = day;
        m_month = month;
        m_year = year;
    }
};


int main() {
    std::cout << "hello world!" << std::endl;
    // 这个初始化动作相当于调用构造器,且构造器必须是public修饰的
    Date dateObj{1, 2, 2025};
    dateObj.print();
    return 0;
}
