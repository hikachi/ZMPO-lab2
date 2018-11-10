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
	
	cout << menu.size() << endl;

	for (int x = 0;x< menu.size() ; x++) {
		cout << menu[x]->getName() << "(type: " << menu[x]->getCommand() << " )" << endl;
	}
}
void CMenu::initalizeMainMenu()
{
	CTestClass *command1 = new CTestClass("test1", "test1");
	CMenuCommand *op1 = new CMenuCommand(command1);
	menu.push_back(op1);

	CTestClass1 *command2 = new CTestClass1("test2", "test2");
	CMenuCommand *op2 = new CMenuCommand(command2);
	menu.push_back(op2);

}

void CMenu::run()
{
	initalizeMainMenu();
	showMenu();

}
