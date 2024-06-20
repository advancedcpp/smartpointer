#include <memory>
#include <iostream>

class MyClass {
public:
    MyClass() { std::cout << "MyClass Constructor" << std::endl; }
    ~MyClass() { std::cout << "MyClass Destructor" << std::endl; }
    void doSomething() { std::cout << "Doing something..." << std::endl; }
};

int main() {
    // Creating a shared_ptr to MyClass
    std::shared_ptr<MyClass> ptr1 = std::make_shared<MyClass>();

    // Creating another shared_ptr pointing to the same object
    std::shared_ptr<MyClass> ptr2 = ptr1;

    // Using the shared_ptrs
    ptr1->doSomething();
    ptr2->doSomething();

    // The object is automatically destroyed when all shared_ptrs are out of scope
    return 0;
}
