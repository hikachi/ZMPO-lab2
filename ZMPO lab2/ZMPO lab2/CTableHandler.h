#pragma once

#include "CTable.h"
#include <vector>


using namespace std;

class CTableHandler
{
public:
	CTableHandler();
	~CTableHandler();
	void showMenu();
	void createDefaultCTable();
	void createCTable();
	void changeName();

private:
	static vector<CTable*> handler;
};

