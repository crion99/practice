#include<iostream>
using namespace std;
#include<string>
class person {
public:
	static int a;//��̬��Ա������������
	static void func() {//��̬��Ա����
		cout << "��̬��Ա������ʹ��" << endl;
		cout << a << endl;
		//cout << b << endl;//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
	}
	int b;
};
int person::a = 0;//��̬��Ա���������ʼ��
int main() {
	person p1;
	person p2;
	p1.a = 10;
	p2.a = 20;
	cout << p1.a << p2.a << endl;
	p1.func();
	return 0;
}