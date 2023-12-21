#include<iostream>
using namespace std;
 
class Class1 {
private:
	int num1;
public:
	Class1(int a) : num1(a) {}
	int getNum1() { return num1; }
};
 
class Class2 {
private:
	int num2;
public:
	Class2(int b) : num2(b) {}
	int getNum2() { return num2; }
};
 
int main() {
	Class1 obj1(10);
	Class2 obj2(20);
 
	int product = obj1.getNum1() * obj2.getNum2();
	cout << "The product of Class1 and Class2 private data is: " << product << endl;
 
	return 0;
}
