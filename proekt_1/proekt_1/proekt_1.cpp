// proekt_1.cpp: ���������� ����� ����� ��� ����������� ����������.

#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector<long> v,v1; //(1,4) //������� ��� ������� ���� long

	for (int i = 0;i < 5;i++)
	{
		v.push_back(i + 1);  //����������� �������� push_back � ���� ��������
		v1.push_back(i + 1);
		cout << v[i] << " ";
	}

	vector<long>::iterator p = v.begin(); //��� ������� v ������� �������� �� ������ �������
	//p += 2;

			v.erase(p);   //������� ������ ������� �������
			p = v.begin(); //p ����������� �������� ����� �������
			*p = 111;   // ������ 2 �� 111 (2)
			v.insert(p+1, 2, 10);//��������� �������� � ������
			v.insert(p+2, 9);
			cout << "\n";

			p = v.begin(); //����������� p �������� ������� ������� 
			while (p != v.end())  //(3)
			{
				cout << *p << " ";
				p++; 
			}
			cout << "\n";


			p = v.begin();
			v.erase(p+2,p+5); //������� ��� �������� �� p+2 �� p+5


			p = v.begin();
			while (p != v.end())  //(3)
			{
				cout << *p << " ";
				p++;
			}
			cout << "\n";
			v.insert(v.begin()+2, v1.begin(), v1.end());// ��������� � v � ������� (3) ��� �������� ������� v1
	                                                   

			p = v.begin(); 
			while (p!=v.end())  //(3)
	{
		cout << *p<< " ";
		p++;
	}
			cout << "\n";


			p = v1.begin();
			while (p != v1.end())  //(3)
			{
				cout << *p << " ";
				p++;
			}

    return 0;
}

