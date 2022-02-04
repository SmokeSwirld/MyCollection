#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <algorithm>
#include <ctime>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <list>
using namespace std;

class MyColection
{
protected:
	int count;
public:
	int GetCount() const
	{
		return count;
	}
	void PrintCount()
	{
		cout << count;
	}

};
