#include "pch.h"
#include "CMenu.h"
#include"CMenuItem.h"
#include "CMenuCommand.h"
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

void CMenu :: showMenu() 
{
	
	for (int x = 0;x<(int)list.size() ; x++) {
		cout << list[x]->name << "(type: " << list[x]->command<< " )" << endl;
	}
}

void CMenu::addToList(CMenuItem* pointer)
{
	list.push_back(pointer);
}

bool CMenu::findAndRun()
{
	string commandToFind;
	cin >> commandToFind;
	bool found = false;

	if (commandToFind=="back")
	{
		return true;
	}
	for(int index=0;index<list.size();index++)
	{
		if (list[index]->command ==commandToFind)
		{
			list[index]->run();
			found = true;
			return false;
		}
	}
	
	if (!found)
	{
		cout <<endl<< "Command not found !" << endl;
		return false;
	}
}
void CMenu::run()
{
	bool back = false;
	while (!back)
	{
		showMenu();
		back=findAndRun();
	}
}
