#include<iostream>
#include<string>
using namespace std;
class person {
public:
	string name;
	int age;
	person operator+ (person & p) {//重载+号
		person temp;
		temp.age = this->age + p.age;
		return temp;
	}
	//递增运算符重载
	person& operator++() {//前置递增
		this->age++;
		return *this;
	}
	person operator++(int) {//后置递增
		person temp = *this;
		this->age++;
		return temp;
	}
	//赋值运算符重载类似于拷贝构造函数，可以防止浅拷贝报错
	person& operator= (const person & p) {//赋值运算符重载
		this->name = p.name;
		this->age = p.age;
		return *this;
	}
	//关系运算符重载
	bool operator== (const person& p) {
		if (p.age == this->age && p.name == this->name) {
			return true;
		}
		else  return false;
		
	}
	//函数调用运算符重载
	void operator() (string test) {
		cout <<test<< endl;
	}
	 
	


};
   //左移运算符重载
ostream& operator<< (ostream& cout, const person& p) {//此处ostream&不能写成ostream，因为cout不能复制
	cout << "姓名：" << p.name << " 年龄：" << p.age << endl;
	return cout;

}



void test01() {
	person p1;
	p1.name = "张三";
	p1.age = 20;
	person p2;
	p2.name = "李四";
	p2.age = 30;
	person p3 = p1 + p2;//p1.operator+(p2);
	cout << "p3的年龄为：" << p3.age << endl;
	cout << p1 << endl;
	cout << ++p1;
	cout << p1++;/*而 p1++（后置++）返回的是一个临时对象（按值返回）。临时对象不能绑定到非 const 的左值引用，所以 operator<< 接收不了它，编译就报错了
	也就是说 const person &p使得可以接受象temp这种临时的变量，在不改变值的函数中完全可以直接加const*/
	p1("hello world");
	
}
int main() {
	test01();
	return 0;
}

