#pragma once
#include "CMenuItem.h"
#include "CCommand.h"
using namespace std;
class CMenuCommand:public CMenuItem 	
{
public:
	CMenuCommand(CCommand* commandPointer);
	~CMenuCommand();
	void run();
	CCommand* pointer;
};

