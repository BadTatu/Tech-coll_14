#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	vector <vector<int>> vecInt;
	vector<int> vecInt1(10);
	vector <int> vecInt2(10, 34);
	vector <int> vecInt3(vecInt2);
	vector <int> vecInt4(vecInt2.cbegin(), vecInt2.cbegin() + 3);
	vecInt4.push_back(111);	//динамическое добавление элементв в конец вектора

	vector <int> vecInt5 = { 2001, 2012, 2023, 2345 };	//в с++11 списки инициализации , которые позволяют создать и инициализировать вектор как статический массив

	vector<int>::const_iterator iElements=vecInt2.begin();
	while (iElements != vecInt2.end()){
		cout << *iElements<<'\t';
		iElements++;
	}
	cout << endl;
	iElements = vecInt3.begin();
	while (iElements != vecInt3.end()){
		cout << *iElements << '\t';
		iElements++;
	}
	cout << endl;
	
	vecInt4.insert(vecInt4.begin(), -5);	//позиция, значение
	vecInt4.insert(vecInt4.end() - 1, 2, 4000);	//позиция, количество, значение
	vecInt4.insert(vecInt4.begin(),vecInt5.begin(),vecInt5.end()-1);	//используется иетратор, возвращаемый функциями begin() и end()
	iElements = vecInt4.begin();
	while (iElements != vecInt4.end()){
		cout << *iElements << '\t';
		iElements++;
	}
	cout << "\nTotal " << vecInt4.size() << " elements\n";	//Возвращает количество элементов в векторе
	return 0;
}

