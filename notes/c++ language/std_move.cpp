// 左值：lvalue, 可以取地址的、有名字的对象，通常是变量
// 右值：rvalue，不能取地址的，临时的对象
// std::move 本质上是类型转换，将一个左值转换为右值引用
#include <iostream>
#include <utility>

class MyObject{
    private:
        char* data;
        size_t length;

}


int main() {
    std::string str1 = "hello";
    std::string str2 = std::move(str1); //std::move将左值str1转换为右值引用

    std::cout << "str1: " << str1 << std::endl; // 空
    std::cout << "str2: " << str2 << std::endl; // 'hello'

    // 这个过程中发生了什么？
    //    调用了std::string的【移动构造函数】，将str1的资源（如动态分配的内存）转移到了str2中
    // 如果str1打印出来不是空呢？可能是不同编译器实现细节差异，比如如果指定c++11则会打印空（加上-std=c++11）


    // 上面是在string类型对象上进行的std::move操作，那么是否可以用在任意类型对象上呢？是的可以
    class myobject()

}