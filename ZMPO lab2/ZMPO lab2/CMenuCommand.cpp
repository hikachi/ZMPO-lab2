#include "pch.h"
#include "CMenuCommand.h"
#include "CCommand.h"

using namespace std;


CMenuCommand::CMenuCommand(CCommand* commandPointer)
{
	pointer = commandPointer;
}

CMenuCommand::~CMenuCommand()
{
}

void CMenuCommand::run()
{
}

