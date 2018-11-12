#pragma once
#include <vector>
#include "CTable.h"

using namespace std;

class CTableHandler
{
public:
	CTableHandler();
	~CTableHandler();
	vector<CTable*> getHandler();
private:
	static vector <CTable*> tableHandler;
};

