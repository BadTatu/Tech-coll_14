// HowManyDigits.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char str[50];
	gets(str); //���������� � ���������, � ������� �� cin
	int s=0;
	for (int i = 0; i < strlen(str); i++){
		//if (isdigit(str[i]))s++;//�� �������� � �������� �������
		if (isdigit((unsigned char)str[i]))s++;
	}
	cout << "Total " << s << " digit(s)";

	return 0;
}

