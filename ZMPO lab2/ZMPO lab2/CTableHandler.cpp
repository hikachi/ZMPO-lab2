#include "pch.h"
#include "CTableHandler.h"


CTableHandler::CTableHandler()
{
	vector<CTable*> tableHandler;
}


CTableHandler::~CTableHandler()
{
	for(int i=0;i<tableHandler.size();i++)
	{
		delete tableHandler[i];
	}
	tableHandler.clear();
}

vector<CTable*> CTableHandler::getHandler()
{
	return tableHandler;
}