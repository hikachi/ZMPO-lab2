#pragma once
#include "CCommand.h"
#include <string>
#include "CMenuCommand.h"
using namespace std;


class CTestClass :public CCommand 
{
public:
	void RunCommand();
	CTestClass();
};


class CTestClass1 :public CCommand
{
public:
	void RunCommand();
	CTestClass1();
};

