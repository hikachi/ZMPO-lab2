#pragma once
#include <iostream>

using namespace std;
class CMenuItem
{
protected:
	string zmiana;
	virtual void run() = 0;
	string command;
	string name;
};

