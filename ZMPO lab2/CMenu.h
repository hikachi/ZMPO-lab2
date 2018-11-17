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
	vector<CMenuItem*> getLista();
	void printTree(int lev);
	void PrintLevels();
	void showTree(CMenuItem * item);
	void menuTree(CMenuItem* menu);
	
	void printTree();
	
	void addToList(CMenuItem* pointer);
	bool findAndRun();
	static vector < vector<CMenuItem*>> levels;
private:
	void showMenu();
	vector<CMenuItem*> list;
	
		
};

