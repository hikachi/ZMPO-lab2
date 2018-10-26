#include "pch.h"
#include "CMenu.h"
#include"CMenuItem.h"
#include "CMenuCommand.h"
#include <vector>
#include <cstdlib>
#include <string>

using namespace std;


CMenu::CMenu(string nameVar,string commandVar)
{
	name = nameVar;
	command = commandVar;
}


CMenu::~CMenu()
{
}

void CMenu::run()
{
	showMenu();
}

void showMenu() {
	for (int x = 0; x < menu.size(); x++) {
		cout << menu[x].name << "(type: " << menu[x].command << " )" << endl;
	}
}
void CMenu::initalizeMainMenu()
{
}

