#include "pch.h"
#include "CTableHandler.h"


CTableHandler::CTableHandler()
{
	vector<CTable*> handler;
}


CTableHandler::~CTableHandler()
{
	for(int i=0;i<handler.size();i++)
	{
		delete handler[i];
	}
	handler.clear();
}

void CTableHandler::createDefaultCTable()
{
	handler.push_back(new CTable());
}

