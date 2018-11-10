#include "pch.h"
#include "CMenuInitalizer.h"
#include "CCommands.h"
#include "CMenu.h"

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
}
