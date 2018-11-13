#include "pch.h"
#include "CTableHandler.h"


CTableHandler::CTableHandler()
{
	vector<CTable*> lista;
}


CTableHandler::~CTableHandler()
{
	for(int i=0;i<lista.size();i++)
	{
		delete lista[i];
	}
	lista.clear();
}

void CTableHandler::showList()
{
	for (int i = 0; i < lista.size(); i++) {
		cout << to_string(i) << ". " << lista[i]->toString() << endl;
	}
}


void CTableHandler::createDefaultCTable()
{
	lista.push_back(new CTable());
}

void CTableHandler::createCTable()
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
		lista.push_back(object);
	}
}

void CTableHandler::changeName()
{
	string CTable_name;
	int position;
	cout << "Wybierz CTable" << endl;
	cin >> position;
	if (position >= lista.size() || position < 0) {
		cout << "Zly zakres" << endl;
	}
	else {
		cout << "Podaj nowa nazwe: " << endl;
		cin >> CTable_name;
		lista[position]->SetName(CTable_name);
	}
}

void CTableHandler::deleteAll()
{
	if (lista.size() == 0) {
		cout << "List jest pusta" << endl;
	}
	else {
		for (int i = 0; i < lista.size(); i++) {
			delete lista[i];
		}

	}
	lista.clear();
}

void CTableHandler::deleteChosen()
{
	int position;
	cout << "Ktory usunac?" << endl;
	cin >> position;
	if (position >= 0 && position < lista.size()) {
		delete lista.at(position);
		lista.erase(lista.begin() + position);


	}
	else {
		cout << "Zly zakres" << endl;
	}
}

void CTableHandler::setTab()
{
	int position;
	int lista_position;
	int number;
	cout << "Podaj ktora CTable" << endl;
	cin >> lista_position;
	if (lista_position >= lista.size() || lista_position < 0) {
		cout << "Zly zakres" << endl;
	}
	else {
		cout << "Podaj ktora pozycja CTable[]" << endl;
		cin >> position;
		if (position >= lista[lista_position]->getTabLength() || position < 0) {
			cout << "Zly zakres" << endl;
		}
		else {
			cout << "Podaj co wpisac" << endl;
			cin >> number;
			lista[lista_position]->setTab(position, number);
		}
	}
}

void CTableHandler::copyCTable()
{
	int position;
	cout << "Podaj ktora CTable skopiowac" << endl;
	cin >> position;
	if (position >= lista.size() || position < 0) {
		cout << "Zly zakres" << endl;
	}
	else {
		lista.push_back(lista[position]->copyObject());
	}
}

void CTableHandler::printCTable()
{
	int position;
	cout << "Podaj ktora CTable wyswietlic" << endl;
	cin >> position;
	if (position >= lista.size() || position < 0) {
		cout << "Zly zakres" << endl;
	}
	else {
		cout << lista[position]->toString() << endl;
	}
}

void CTableHandler::copyCTableTab()
{
	int CTableSrc;
	int CTableDest;
	cout << "Podaj zrodlo tablicy CTable" << endl;
	cin >> CTableSrc;
	if (CTableSrc >= lista.size() || CTableSrc < 0) {
		cout << "Zly zakres" << endl;
	}
	else {
		cout << "Podaj Ctable gdzie skopiowac tablice" << endl;
		cin >> CTableDest;
		if (CTableDest >= lista.size() || CTableDest < 0) {
			cout << "Zly zakres" << endl;
		}
		else {
			lista[CTableDest]->copyTab(*lista[CTableSrc]);
		}
	}
}

