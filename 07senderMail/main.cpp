#include <iostream>

using namespace std;

class Mail;

class Sender
{
public:
	Sender(string addr)
		:_addr(addr) {}
	Sender& operator<<(Mail& mail);

private:
	string _addr;
};

class Mail
{
public:
	Mail(string tt, string cts, string t)
		:_title(tt), _contents(cts), _time(t) {}
	friend Sender& Sender::operator<<(Mail& mail);
private:
	string _title;
	string _contents;
	string _time;
};

Sender& Sender::operator<<(Mail& mail)
{
	cout << _addr << endl;
	cout << mail._title << endl;
	cout << mail._contents << endl;
	cout << mail._time << endl;
	return *this;
}

int main()
{
	Sender sender("joey.zhou2019@gmail.com");
	Mail mail("meeting", "AR REVIEW", "2024/10/23");
	Mail mail1("cancel meeting", "layoff", "2024/10/24");
	sender << mail << mail1;
	mail >> mail1 >> sender;
	return 0;
}