#pragma once
#include "CMenuItem.h"
#include <vector>
#include <string>

using namespace std;
class CMenu : public CMenuItem
{
public:
	CMenu(string name,string command);
	~CMenu();
	void run();

private:
	void showMenu();
	void initalizeMainMenu();
	vector<CMenuItem*> list;
		
};

