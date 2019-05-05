#include "pch.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <algorithm>

using namespace std;

bool cmp(const string &a1, const string &a2)
{
	if ((a1) == (a2))
	{
		return true;
	}
	else 
	{
		return false;
	}
}


int main()
{
	string MainStr,SubStr, AnsString;
	int counter = 0;

	getline(cin, MainStr);
	getline(cin, SubStr);
	AnsString = MainStr;

	if (sizeof(SubStr) > sizeof(MainStr))
	{
		cout << MainStr;
	}
	else
	{
		unsigned int SubLen = SubStr.length();
		unsigned int MainLen = MainStr.length();
		
		for (int i = 0; i <= MainLen - SubLen; i++)
		{
			string tmp = MainStr.substr(i, SubLen);
			if (cmp(tmp, SubStr))
			{
				AnsString.insert(i + SubLen + counter, 1, '*');
				counter++;
			}
		}
		cout << AnsString;




	}



	return 0;
}

