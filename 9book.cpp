#include "std_lib_facilities.h"

class Book{
public:
	Book();
	Book(string ISBN, string name, string author, string prdate, bool isout);

	enum Genre{fiction=1, nonfiction, periodical, biography, children};
	class invalid{};
	void borrow_book() {isout = true;}
	void return_book() {isout = false;}

	string get_ISBN() const {return ISBN;}
	string get_name() const {return name;}
	string get_author() const {return author;}
	string get_prdate() const {return prdate;}
	void set_type(int a)  {type = Genre(a);}
	Genre get_type() const {return type;}
	bool get_isout() const {return isout;}
private:
	string ISBN;
	string name;
	string author;
	string prdate;
	Genre type;
	bool isout;
}

Book::Book(string ISBN, string name, string author, string prdate, bool isout)
{
	if(!is_valid(ISBN))  throw invalid();
}

bool is_valid(string isbn)
{
	// type as n-n-n-x
}
bool operator==(const Book& a, const Book& b)
{
	return a.get_ISBN()==b.get_ISBN();
}
bool operator!=(const Book& a, const Book& b)
{
	return !(a==b);
}
ostream& operator<<(ostream& os, const Book& a)
{
	os<<a.get_name()<<"\n"
		<<a.get_author()<<"\n"
		<<a.get_ISBN()<<"\n";
}


class Patron{
public:
	string name() const {return name;}
	string num()  const {return num;}
	double fee()  const {return fee;}
	void set_fee(double n) {fee = n;}
private:
	string name;
	string num;
	double fee;
};
bool is_outfee(double n)
{
	return (n>0)?false:true;
}

struct Transaction{
	Book a;
	Patron b;
	Date d;
};
class Library{
public:
	void add_book(const Book& book);
	void add_patron(const Patron& pat);
	void out_book(const Book& book, const Patron& pat);
private:
	vector<Book> books;
	vector<Patron> patrons;
	vector<Transaction> trans;
};


































