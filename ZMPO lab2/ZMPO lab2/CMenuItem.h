#pragma once
#include <iostream>

using namespace std;
class CMenuItem
{
public:
	string getName();
	string getCommand();

protected:
	string zmiana;
	virtual void run() = 0;
	string command;
	string name;
};

