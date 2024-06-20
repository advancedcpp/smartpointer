#include <memory>
#include <iostream>

class MyClass {
public:
    ~MyClass() { std::cout << "MyClass Destructor" << std::endl; }
};

int main() {
    std::shared_ptr<MyClass> sharedPtr = std::make_shared<MyClass>();
    std::weak_ptr<MyClass> weakPtr = sharedPtr;

    // Using weak_ptr to access the shared object
    if (auto ptr = weakPtr.lock()) { // lock() returns shared_ptr if object exists
        // Use ptr safely
        std::cout << "Object is alive" << std::endl;
    } else {
        std::cout << "Object is expired" << std::endl;
    }

    // After sharedPtr goes out of scope, the object is deleted
    return 0;
}
