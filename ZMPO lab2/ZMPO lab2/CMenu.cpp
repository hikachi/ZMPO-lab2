#include "pch.h"
#include "CMenu.h"
#include"CMenuItem.h"
#include "CMenuCommand.h"
#include "CCommand.h"
#include "CCommands.h"
#include <vector>
#include <cstdlib>
#include <string>

using namespace std;


CMenu::CMenu(string s_name,string s_command)
{
	name = s_name;
	command = s_command;

}


CMenu::~CMenu()
{
}


void CMenu :: showMenu() {
	
	for (int x = 0;x<(int)list.size() ; x++) {
		cout << list[x]->name << "(type: " << list[x]->command<< " )" << endl;
	}
}
void CMenu::initalizeMainMenu()
{
	CTestClass *command1 = new CTestClass();
	CMenuCommand *op1 = new CMenuCommand("test1","test1",command1);
	list.push_back(op1);

	CTestClass1 *command2 = new CTestClass1();
	CMenuCommand *op2 = new CMenuCommand("test2","test2",command2);
	list.push_back(op2);

}

void CMenu::run()
{
	initalizeMainMenu();
	showMenu();

}
