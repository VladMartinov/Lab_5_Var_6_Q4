#pragma once
#include "book.h"

// ������� ��� ��������� ����� � ������ ( ��� ������ ��� ����������� � ������������ ���)
class GreaterThan {
public:

	GreaterThan(int yearThan) {
		_yearThan = yearThan;
	}

	bool operator()(Book* a) {
		if (a->getYear() > _yearThan)
			return true;
		else
			return false;
	}

private:
	int _yearThan;

};