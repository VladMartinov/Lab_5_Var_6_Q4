#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include "book.h"
#include "greaterThan.h"


using namespace std;

int main() {

	setlocale(LC_ALL, "RUSSIAN");
	std::vector<Book> books;
	books.push_back(*(new Book("����� � ���", "������� �.�.", 2010)));
	books.push_back(*(new Book("���������", "����������� �.�.", 2004)));
	books.push_back(*(new Book("�����", "�������� �.�.", 2010)));
	books.push_back(*(new Book("���� ��������", "������� �.�.", 1999)));
	books.push_back(*(new Book("������������ �������", "�������� �.�.", 2011)));
	books.push_back(*(new Book("���������� �������", "������� �.", 2009)));
	books.push_back(*(new Book("������ �����", "������� �.", 2001)));
	books.push_back(*(new Book("�����", "ø�� �.�.", 2010)));
	books.push_back(*(new Book("����� ������", "������� �.", 1998)));

	// ��������� ������� (�� �������������)
	GreaterThan book_greaterThan(2009);

	// ��� � ������� ����������)
	int year = 2009;

	// ���������� � ���������� ���-�� ���� ��� ������� ����� 2009
	int count = count_if(books.begin(), books.end(), bind2nd(greater<int>(), year));

	cout << "���������� ���� ��� ������� ������� ����� 2009: " << count << endl;

	return 0;
}