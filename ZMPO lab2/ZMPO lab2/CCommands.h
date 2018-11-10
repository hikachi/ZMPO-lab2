#pragma once
#include "CCommand.h"
#include <string>
#include "CMenuCommand.h"
using namespace std;


class CTestClass :public CCommand 
{
public:
	void RunCommand();
	CTestClass(string name, string com);

private:
	string s_command;
	string s_name;
};


class CTestClass1 :public CCommand
{
public:
	void RunCommand();
	CTestClass1(string name, string com);
private:
	string s_name;
	string s_command;
};

