#pragma once
#include <string>

// �������� ����� Book �������� ������������ �����, ������ � ��� ��������
// ���� ������� ��� ���� ���������� � ����������� � �����������
class Book {
public:
	Book(std::string name, std::string author, int year) {
		_name = name;
		_author = author;
		_year = year;
	}

	bool operator>(int a) {
		if (_year > a)
			return true;
		else 
			return false;
	}

	bool operator<(int a) {
		if (_year > a)
			return true;
		else
			return false;
	}

	bool operator==(int a) {
		if (_year == a)
			return true;
		else
			return false;
	}

	bool operator!=(int a) {
		if (_year != a)
			return true;
		else
			return false;
	}

	std::string getName() { return _name; }
	std::string getAuthor() { return _author; }
	int getYear() { return _year; }

private:
	std::string _name;
	std::string _author;
	int _year;
};