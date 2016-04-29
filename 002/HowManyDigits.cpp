#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char str[50];
	gets(str); //ñ÷èòûâàíèå ñ ïðîáåëàìè, â îòëè÷èè îò cin
	int s=0;
	for (int i = 0; i < strlen(str); i++){
		//if (isdigit(str[i]))s++;//íå ðàáîòàåò ñ ðóññêèìè áóêâàìè
		if (isdigit((unsigned char)str[i]))s++;
	}
	cout << "Total " << s << " digit(s)";

	return 0;
}
