#include <iostream>

class A {
virtual void f();
};

class B : public A {
virtual void f();
};

int main() {
	std::cout << "a = " << sizeof(A) << " B = " << sizeof(B) << std::endl;
	return 0;
}
