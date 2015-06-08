#include "std_lib_facilities.h"
/*
Expression:
	Term;
	Expression'+'Term;
	Expression'-'Term;
Term:
	Primary;
	Term'*'Primary;
	Term'/'Primary;
	Term'%'Primary;
Primary:
	Number
	'('Expression')'
Number:
	floating-point-literal
*/
class Token {
public:
	char kind;
	double value;
	Token(char ch)
		: kind(ch) {}
	Token(char ch, double vard)
		: kind(ch), value(vard) {}
};

class Token_stream {
public:
	Token_stream();
	Token get();
	void putback(Token );
private:
	bool full;
	Token buffer;
};

Token_stream::Token_stream()
	: full(false), buffer(0) {}

Token Token_stream::get()
{
	if (full){
		full = false;
		return buffer;
	}
	
	char ch;
	cin >> ch;
	switch(ch){
		case'q':case';':case'(':case')':
		case'+':case'-':case'*':case'/':
			return Token(ch);
		case'0':case'1':case'2':case'3':
		case'4':case'5':case'6':case'7':
		case'8':case'9':case'.':
			{
				cin.putback(ch);
				double var;
				cin >> var;
				return Token('8', var);
			}
		default:
			error("Wrong Token!");
	}
}
void Token_stream::putback(Token t)
{
	if(full)
		error("token stream is full, can't do putback()");
	else
		full = true;
		buffer = t;
}
Token_stream ts;

double expression();
double term();
double primary();

double expression()
{
	double left = term();
	Token t = ts.get();
	while(true){
		switch(t.kind){
			case '+':
				left += term();
				t = ts.get();
				break;
			case '-':
				left -= term();
				t = ts.get();
				break;
			default:
				ts.putback(t);	//put back t ?
				return left;
		}
	}
}

double term()
{
	double left = primary();
	Token t = ts.get();
	while(true){
		switch(t.kind){
			case '*':
				left *= primary();
				t = ts.get();
				break;
			case '/':
				{
					double d = primary();
					if (d == 0)
						error("Wrong! deliver Zero!");
					left /= d;
						
					t = ts.get();
					break;
				}
			default:
				ts.putback(t);
				return left;
		}
	}
}

double primary()
{
	Token t = ts.get();
	switch(t.kind){
		case '(':
			{
				double d = expression();
				t = ts.get();
				
				if (t.kind != ')') error("')' expected!");
				return d;
			}
		case '8':
			return t.value;
		default:
			error("wrong type get()");
	}
}
int main()
{
	double val = 0;
	while(cin){
		Token t = ts.get();			// need to anounce here ?
		if (t.kind == 'q')
			break;
		if (t.kind = ';')
			cout <<"="<<val<<"\n";
		else
			ts.putback(t);

		val = expression(); 
	}	
}
