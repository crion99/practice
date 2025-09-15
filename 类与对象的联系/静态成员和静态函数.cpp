#include<iostream>
using namespace std;
#include<string>
class person {
public:
	static int a;//静态成员变量类内声明
	static void func() {//静态成员函数
		cout << "静态成员函数的使用" << endl;
		cout << a << endl;
		//cout << b << endl;//静态成员函数只能访问静态成员变量
	}
	int b;
};
int person::a = 0;//静态成员变量类外初始化
int main() {
	person p1;
	person p2;
	p1.a = 10;
	p2.a = 20;
	cout << p1.a << p2.a << endl;
	p1.func();
	return 0;
}