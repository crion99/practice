#include<iostream>
using namespace std;
#include<string>
class room {
	friend class person;//        ����frieng void person::visit();//��Ա��������Ԫ
	string bedroom;
};
class person {
	friend void func2(person& p);//��Ԫ����
public:
	string n_name;
	void visit() {
				room r;
		r.bedroom = "����";
		cout << n_name << "����" << r.bedroom << endl;
	}
	void stepin(int pin1) {
		m_pin = pin1;

	}
private:
	int m_pin;
};
//ȫ�ֺ����޷��������˽�г�Ա
void func(person& p) {
	cout << p.n_name << endl;
	//cout << p.m_pin << endl;����ģ�˽�г�Ա�޷�����
}
void func2(person&p) {
	cout << p.m_pin << endl;
	
}
int main() {
	person p;
	p.n_name = "����";
	p.stepin(1234);
	p.visit();
	func(p);
	func2(p);
	return 0;
}