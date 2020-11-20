#include <iostream>
#include <stdexcept>
using namespace std;

class vehicle {

public:
	string company;
	int year;
};

class bus : public vehicle {

public:
	int no_of_seats;
	void print_info()
	{
		cout << "bus: " << company << " year: " << year << " number of seats: " << no_of_seats << endl;
	};
	bus(string b_company, int b_year, int b_no_of_seats)
	{
		company = b_company;
		if (b_year > 2020)
		{
			throw invalid_argument("bus is not produced yet");
		}
		else
		{
			year = b_year;
		}
		if (b_no_of_seats < 8 || b_no_of_seats > 70)
		{
			throw out_of_range("invalid number of seats");
		}
		else
		{
			no_of_seats = b_no_of_seats;
		}
	};
	~bus() {};

};

class car : public vehicle {

public:
	int weight;
	void print_info()
	{
		cout << "car: " << company << " year: " << year << " weight: " << weight << endl;
	};
	car(string c_company, int c_year, int c_weight)
	{
		company = c_company;
		if (c_year > 2020)
		{
			throw invalid_argument("car is not produced yet");
		}
		else
		{
			year = c_year;
		}
		if (c_weight > 3500)
		{
			throw "car is too heavy";
		}
		else
		{
			weight = c_weight;
		}
	};
	~car() {};
};

class motorcycle : public vehicle {

public:
	int no_of_tires;
	void print_info()
	{
		cout << "motorcycle: " << company << " year: " << year << " number of tires: " << no_of_tires << endl;
	}
	motorcycle(string m_company, int m_year, int m_no_of_tires)
	{
		company = m_company;
		if (m_year > 2020)
		{
			throw invalid_argument("motorcycle is not produced yet");
		}
		else
		{
			year = m_year;
		}
		if (m_no_of_tires != 2)
		{
			throw ("vehicle is not a motorcycle");
		}
		else
		{
			no_of_tires = m_no_of_tires;
		}
	};
	~motorcycle() {};

};

int main()
{
	try {
		bus Bus("Solaris", 2012, 30);
		Bus.print_info();
		car Car("Toyota", 1996, 2800);
		Car.print_info();
		motorcycle Motorcycle("Yamaha", 2010, 2);
		Motorcycle.print_info();
		motorcycle Motorcycle2("Yamaha", 2010, 4);
		Motorcycle2.print_info();
	}
	catch (invalid_argument& year)
	{
		cout << year.what() << endl;
	}
	catch (out_of_range& seats)
	{
		cout << seats.what() << endl;
	}
	catch (const char* exception)
	{
		cout << exception << endl;

	}
	system("PAUSE");
	return 0;
}