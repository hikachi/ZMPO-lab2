#include "pch.h"
#include "CCommands.h"
#include "CCommand.h"
#include <string>
#include <iostream>
#include "CTable.h"
#include <vector>

using namespace std;
// KLASA TESTCLASS
CTestClass::CTestClass()
{
}

void CTestClass::runCommand()
{
	cout << "Test Class dziala" << endl;
}



// KLASA TESTCLASS1
CTestClass1::CTestClass1()
{
}

void CTestClass1::runCommand()
{
	cout << "test class 1" << endl;
}
//CHANGE LENGTH

CCommandChangeLength::CCommandChangeLength(vector<CTable*> table)
{
	handler = table;
}

void CCommandChangeLength::runCommand()
{
	int position;
	int newLength;
	cout << "Wybierz obiekt: " << endl;
	cin >> position;
	cout << "Jaki nowy rozmiar ?" << endl;
	cin >> newLength;
	if (newLength > 0) {
		handler[position]->changeLength(newLength);
	}
	else
	{
		cout << "Podano bledna wartosc" << endl;
	}
}

// COMMAND CREATE CTABLE

CCommandCreateCTable::CCommandCreateCTable(vector<CTable*> table)
{
	handler = table;
}

void CCommandCreateCTable::runCommand()
{
	string CTable_name;
	int CTable_length;
	cout << "Wprowadz nazwe : " << endl;
	cin >> CTable_name;
	cout << "Podaj dlugosc tablicy : " << endl;
	cin >> CTable_length;
	if (CTable_length <= 0) {
		cout << "Wartosc <0" << endl;
	}
	else {
		CTable *object = new CTable(CTable_name, CTable_length);
		handler.push_back(object);
	}
}

// Create Default CTable
CCommandCreateDefaultCTable::CCommandCreateDefaultCTable(vector<CTable*> table)
{
	handler = table;
}

void CCommandCreateDefaultCTable::runCommand()
{
	CTable *object = new CTable();
	handler.push_back(object);
}

CCommandShowList::CCommandShowList(vector<CTable*> table)
{
	handler = table;
}

void CCommandShowList::runCommand()
{
	for (int i = 0; i < handler.size(); i++) {
		cout << to_string(i) << ". " << handler[i]->toString() << endl;
	}
}
