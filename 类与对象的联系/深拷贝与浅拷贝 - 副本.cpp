#include<iostream>
using namespace std;
#include<string>
class person {
public:
	//Ĭ�Ϻ���
	void func() {
		cout << "Ĭ�Ϲ��캯����ʹ��" << endl;
	}
	//�вκ���
	void Hfunc( int age,int h) {
		m_age = age;
		m_hight = new int(h);//�ڶ������ٿռ�
	cout<< "�вι��캯����ʹ��" << endl;
	
	}
	//�Լ����쿽������������ǳ��������������
	void copy(const person& p) {
		m_age = p.m_age;
		//m_hight = p.m_hight;��Ϊ������Ĭ�ϵĴ���
		m_hight = new int(*p.m_hight);//���
	}
	//��������
	~person() {
		if (m_hight != NULL) {
			delete m_hight;//�ͷſռ�
			m_hight = NULL;
		}
		cout << "����������ʹ��" << endl;
	}
	string m_name;
	int m_age;
	int* m_hight;//��������ָ�룬Ӧ����Ϊ���������ڴ��ڣ�ʹ��new�ڶ������ٿռ�
};
void test01() {
	person p1;
	p1.Hfunc(10, 10);
	//person p2 = p1;//�����������������Լ��ṩ��
	person p2;
	p2.copy(p1);
	cout << p2.m_age << *p2.m_hight << endl;
}
int main() {
	test01();
	return 0;
}