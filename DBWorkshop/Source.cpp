#include <dbmanager.h>
#include<iostream>

using namespace dbmanager;
int main() {
	setlocale(LC_ALL, "Russian");	
	DBTableTxt table;
	string pathTo = "D:\\�����\\������ �������\\����������������\\repository\\Project\\LibraryTxt\\Students.csv";
	table.ReadDBTable(pathTo);
	table.PrintTable(80);
	char c;
	cin >> c;
	return 0;
}