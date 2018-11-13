#pragma once

#include "CTable.h"
#include <vector>


using namespace std;

class CTableHandler
{
public:
	CTableHandler();
	~CTableHandler();
	void showList();
	void createDefaultCTable();
	void createCTable();
	void changeName();
	void deleteAll();
	void deleteChosen();
	void setTab();
	void copyCTable();
	void printCTable();
	void copyCTableTab();



private:
	static vector<CTable*> lista;
};

