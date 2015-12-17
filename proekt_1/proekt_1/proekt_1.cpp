// proekt_1.cpp: определ€ет точку входа дл€ консольного приложени€.

#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector<long> v,v1; //(1,4) //создаем два вектора типа long

	for (int i = 0;i < 5;i++)
	{
		v.push_back(i + 1);  //забрасываем функцией push_back в него элементы
		v1.push_back(i + 1);
		cout << v[i] << " ";
	}

	vector<long>::iterator p = v.begin(); //дл€ вектора v создаем итератор на начало вектора
	//p += 2;

			v.erase(p);   //удал€ем первый элемент вектора
			p = v.begin(); //p присваиваем значение новой вершины
			*p = 111;   // мен€ем 2 на 111 (2)
			v.insert(p+1, 2, 10);//добавл€ем элементы в вектор
			v.insert(p+2, 9);
			cout << "\n";

			p = v.begin(); //присваиваем p значение вершины вектора 
			while (p != v.end())  //(3)
			{
				cout << *p << " ";
				p++; 
			}
			cout << "\n";


			p = v.begin();
			v.erase(p+2,p+5); //удал€ем все элементы от p+2 до p+5


			p = v.begin();
			while (p != v.end())  //(3)
			{
				cout << *p << " ";
				p++;
			}
			cout << "\n";
			v.insert(v.begin()+2, v1.begin(), v1.end());// вставл€ем в v с позиции (3) все элементы вектора v1
	                                                   

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

