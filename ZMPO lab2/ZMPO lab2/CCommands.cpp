#include "pch.h"
#include "CCommands.h"
#include "CCommand.h"
#include <string>
#include <iostream>

using namespace std;
// KLASA TESTCLASS
CTestClass::CTestClass()
{
}

void CTestClass::RunCommand()
{
	cout << "Test Class dziala" << endl;
}



// KLASA TESTCLASS1
CTestClass1::CTestClass1()
{
}

void CTestClass1::RunCommand()
{
	cout << "test class 1" << endl;
}
