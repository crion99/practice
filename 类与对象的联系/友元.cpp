#include<iostream>
using namespace std;
#include<string>
class room {
	friend class person;//        或者frieng void person::visit();//成员函数做友元
	string bedroom;
};
class person {
	friend void func2(person& p);//友元函数
public:
	string n_name;
	void visit() {
				room r;
		r.bedroom = "卧室";
		cout << n_name << "访问" << r.bedroom << endl;
	}
	void stepin(int pin1) {
		m_pin = pin1;

	}
private:
	int m_pin;
};
//全局函数无发访问类的私有成员
void func(person& p) {
	cout << p.n_name << endl;
	//cout << p.m_pin << endl;错误的，私有成员无法访问
}
void func2(person&p) {
	cout << p.m_pin << endl;
	
}
int main() {
	person p;
	p.n_name = "张三";
	p.stepin(1234);
	p.visit();
	func(p);
	func2(p);
	return 0;
}