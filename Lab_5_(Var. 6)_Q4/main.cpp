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
	books.push_back(*(new Book("Война и мир", "Толстой Л.Н.", 2010)));
	books.push_back(*(new Book("Подросток", "Достоевский Ф.М.", 2004)));
	books.push_back(*(new Book("Обрыв", "Гончаров И.А.", 2010)));
	books.push_back(*(new Book("Анна Каренина", "Толстой Л.Н.", 1999)));
	books.push_back(*(new Book("Обыкновенная история", "Гончаров И.А.", 2011)));
	books.push_back(*(new Book("Утраченные иллюзии", "Бальзак О.", 2009)));
	books.push_back(*(new Book("Оливер Твист", "Диккенс Ч.", 2001)));
	books.push_back(*(new Book("Фауст", "Гёте И.В.", 2010)));
	books.push_back(*(new Book("Лилия долины", "Бальзак О.", 1998)));

	// Созданный функтор (не использовался)
	GreaterThan book_greaterThan(2009);

	// Год с которым сравнивали)
	int year = 2009;

	// Записываем в переменную кол-во книг год которых новее 2009
	int count = count_if(books.begin(), books.end(), bind2nd(greater<int>(), year));

	cout << "Количество книг год издания которых новее 2009: " << count << endl;

	return 0;
}