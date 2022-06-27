#include<iostream>

using namespace std;

class Date {
private:
	int year_;
	int month_;
	int day_;
public:
	void SetDate(int year, int month, int date);
	void AddDay(int inc);
	void AddMonth(int inc);
	void AddYear(int inc);
	void PrintDate();
};

void Date::SetDate(int year, int month, int date)
{
	year_ = year;
	month_ = month;
	day_ = date;
}

void Date::AddDay(int inc)
{
	day_ += inc;
	if (month_ == 1 || month_ == 3 || month_ == 5 || month_ == 7 || month_ == 8 || month_ == 10 || month_ == 12) {
		if (day_ > 31) {
			day_ -= 31;
		}
	}
	else if (month_ == 2) {
		if (day_ > 28) {
			day_ -= 28;
		}
	}
	else {
		if (day_ > 30) {
			day_ -= 30;
		}
	}
}

void Date::AddMonth(int inc)
{
	month_ += inc;
	if (month_ > 12) {
		month_ -= 12;
	}
}

void Date::AddYear(int inc)
{
	year_ += inc;

}
void Date::PrintDate()
{
	cout << "Year: " << year_ << endl;
	cout << "Month: " <<month_  << endl;
	cout << "Date: " << day_ << endl;
}
int main() {
	Date date;
	date.SetDate(2022, 10, 5);
	date.AddYear(10);
	date.AddMonth(4);
	date.AddDay(27);
	date.PrintDate();
}
