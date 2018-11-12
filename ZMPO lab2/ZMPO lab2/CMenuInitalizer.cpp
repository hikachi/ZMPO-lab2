#include "pch.h"
#include "CMenuInitalizer.h"
#include "CCommands.h"
#include "CMenu.h"
#include "CTableHandler.h"

CMenuInitalizer::CMenuInitalizer()
{
}


CMenuInitalizer::~CMenuInitalizer()
{
}

void CMenuInitalizer::initMain(CMenu* main)
{
	
	CTestClass *command1 = new CTestClass();
	CMenuCommand *op1 = new CMenuCommand("test1", "test1", command1);
	main->addToList(op1);

	CTestClass1 *command2 = new CTestClass1();
	CMenuCommand *op2 = new CMenuCommand("test2", "test2", command2);
	main->addToList(op2);

	CMenu *ctableMenu = new CMenu("CTable Menu", "ctable");
	main->addToList(ctableMenu);

	//CTABLE
	CTableHandler *tableHandler = new CTableHandler();
	
	//create Ctable
	CCommandCreateCTable *createCTable = new CCommandCreateCTable(tableHandler->getHandler());
	CMenuCommand *createCTableCommand = new CMenuCommand("Create CTable", "create", createCTable);
	ctableMenu->addToList(createCTableCommand);
	
	//create  Default CTable
	CCommandCreateDefaultCTable *createDefaultCTable = new CCommandCreateDefaultCTable(tableHandler->getHandler());
	CMenuCommand *createDefaultCTableCommand = new CMenuCommand("Create default ctable", "def", createDefaultCTable);
	ctableMenu->addToList(createDefaultCTableCommand);
	
	//Show List
	//CCommandShowList *showList = new CCommandShowList(tableHandler->getHandler());
	//CMenuCommand *showListCommand = new CMenuCommand("Show list", "show", showList);
	//ctableMenu->addToList(showListCommand);


}
