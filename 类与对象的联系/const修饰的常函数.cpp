#include<iostream>
using namespace std;
#include<string>
class home {
public:
	string m_name;
	int m_length;
	mutable int m_score;//mutable���εĳ�Ա���Կ�����const���εĺ������޸�
	void show()const {
		cout << "home�������ǣ�" << m_name << "�������ǣ�" << m_length << endl;
		//m_length = 100;����ģ�const���εĺ����������޸ĳ�Ա���� ���Ǽ���mutable�Ϳ���
		m_score = 100;
	}
};