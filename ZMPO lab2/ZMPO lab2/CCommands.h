#pragma once
#include "CCommand.h"
#include <string>
#include "CMenuCommand.h"
#include "CTable.h"
#include <vector>
using namespace std;


class CTestClass :public CCommand 
{
public:
	void runCommand();
	CTestClass();
};


class CTestClass1 :public CCommand
{
public:
	void runCommand();
	CTestClass1();
};

class CCommandChangeLength:public CCommand
{
public :
	CCommandChangeLength(vector<CTable*> table);
	void runCommand();
	vector<CTable*> handler;
};

class CCommandCreateCTable:public CCommand
{
public:
	CCommandCreateCTable(vector<CTable*> table);
	void runCommand();
	vector <CTable*> handler;
};

class CCommandCreateDefaultCTable:public CCommand
{
public :
	CCommandCreateDefaultCTable(vector<CTable*>table);
	void runCommand() override;;
	vector<CTable*> handler;
};
class CCommandShowList:public CCommand
{
public:
	CCommandShowList(vector<CTable*>table);
	void runCommand() override;
	vector<CTable*> handler;
}