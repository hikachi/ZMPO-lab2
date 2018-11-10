#include "pch.h"
#include "CCommands.h"
#include "CCommand.h"
#include <string>
#include <iostream>

using namespace std;
// KLASA TESTCLASS
CTestClass::CTestClass(string name, string com)
{
	s_name = name;
	s_command = com;
}

void CTestClass::RunCommand()
{
	cout << "Test Class dziala" << endl;
}



// KLASA TESTCLASS1
CTestClass1::CTestClass1(string name, string com)
{
	s_name = name;
	s_command = com;
}

void CTestClass1::RunCommand()
{
	cout << "test class 1" << endl;
}
