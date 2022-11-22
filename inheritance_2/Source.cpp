// множественное наследование
#include <iostream>
#include <time.h>
using namespace std;

class A {
public:
	A() {
		n = 0;
	}

	A(int _n) {
		n = _n;
	}

	void setA(int temp_a) {
		n = temp_a;
	}

	int getA() {
		return n;
	}

	void f_a() {
		cout << "function A" << endl;
	}
	
	void print() {
		cout << n << endl;
	}

protected:
	int n;
	string name;
};

class B {
public:

	B() {
		a = 0;
	}
	
	B(int _a) {
		a = _a;
	}

	void setB(int temp_b) {
		a = temp_b;
	}

	int getB() {
		return a;
	}

	void f_b() {
		cout << "function B" << endl;
	}

	void print() {
		cout <<  a << endl;
	}

protected:
	int a;
	string st2;
};

class C : public A, public B {
public:

	C() { c = 0; }
	C(int n_a, int a_b, int c_) : A(n_a), B(a_b) {
		c = c_;
	}
	void f_b() {
		cout << "function C" << endl;
	}

	void print() {
		cout << n << " " << a << " " << c << endl;
	}

private:
	int c;
};

// важен порядок наследования
int main() {
	srand(time(NULL));

	// ЗАБЕРИ ШНУР
	C c(2, 5, 7);
	//c.B::print(); // вызов принта родителя
	c.setA(12);
	c.setB(9);
	//c.getA();
	//c.getB();
	c.print();


	return 0;
}