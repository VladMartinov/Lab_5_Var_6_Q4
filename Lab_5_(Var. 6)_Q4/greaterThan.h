#pragma once
#include "book.h"

// Функтор для сравнения книги с числом ( год больше чем принимаемый в конструкторе год)
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