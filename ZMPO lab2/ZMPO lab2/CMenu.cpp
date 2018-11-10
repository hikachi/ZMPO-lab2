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


void showMenu() {
	
	

	for (int x = 0;x<list.size() ; x++) {
		cout << list[x]->getName() << "(type: " << list[x]->getCommand() << " )" << endl;
	}
}
void CMenu::initalizeMainMenu()
{
	CTestClass *command1 = new CTestClass("test1", "test1");
	CMenuCommand *op1 = new CMenuCommand(command1);
	list.push_back(op1);

	CTestClass1 *command2 = new CTestClass1("test2", "test2");
	CMenuCommand *op2 = new CMenuCommand(command2);
	list.push_back(op2);

}

void CMenu::run()
{
	initalizeMainMenu();
	showMenu();

}
