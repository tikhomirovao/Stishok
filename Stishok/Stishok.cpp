#include <iostream>
using namespace std;

#define offset "\t\t\t\t\t\t"
#define ELOCHKA

void main()
{
	setlocale(LC_ALL, "Russian");
#if defined ELOCHKA
	cout << offset << "� ���� �������� ������,\n";
	cout << offset << "� ���� ��� �����,\n";
	cout << offset << "����� � ����� ��������,\n";
	cout << offset << "������� ����.\n";
	cout << "\n";
	cout << offset << "������ �� ���� �������:\n";
	cout << offset << "\"���, ������, ��� - ���!\"\n";
	cout << offset << "����� ������� ��������:\n";
	cout << offset << "\"������, �� ��������!\"\n";
	cout << "\n";
	cout << offset << "�������� ����� ���������\n";
	cout << offset << "��� ������� ������.\n";
	cout << offset << "����� ����, �������� ����,\n";
	cout << offset << "������ ��������.\n";
	cout << "\n";
	cout << offset << "��! ���� �� ���� �������\n";
	cout << offset << "��� ������� �������\n";
	cout << offset << "������� ����������\n";
	cout << offset << "���������, �����.\n";
	cout << "\n";
	cout << offset << "���� ������� ��������\n";
	cout << offset << "� � ������� �������\n";
	cout << offset << "������ �� ���� ������\n";
	cout << offset << "��� ����� �������.\n";
	cout << "\n";
	cout << offset << "������ ���, ��������,\n";
	cout << offset << "�� �������� � ��� ������,\n";
	cout << offset << "� �����, ����� �������\n";
	cout << offset << "�������� ��������.\n";
	cout << offset << "\t\t\t\t �����: �������� �.�.";
#endif
}