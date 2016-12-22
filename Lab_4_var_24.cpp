#include <iostream>
#include <conio.h>
using namespace std;

class plain
{
public:
	virtual void out() = 0;
	virtual void get() = 0;

	double weight;
	int seats;


	void basicInfo()
	{
		cout << "- weight: "<< weight << endl;
		
		cout << "- number of seats: "<< seats << endl;
  	
	}





};


class military: public plain
{
public:
	int power;

void get()
{
cout << "weight: ";
cin >> weight;
cout << "number of seats: ";
cin >> seats;
cout << "firepower: ";
cin >> power;


}
};

class civilc: public plain
{
public:
	int price;

void get()
{
cout << "weight: ";
cin >> weight;
cout << "number of seats: ";
cin >> seats;
cout << "price: ";
cin >> price;

}
};

class pass: public civilc
{
public:
	void out()
	{
		cout<<"- price: "<< price;
	}
};

class sport: public civilc
{
public:
	void out()
	{
		cout<<"- price: "<< price;
	}
};

class glider: public civilc
{
public:
	void out()
	{
		cout<<"- price: "<< price;
	}
};


class dest: public military
{
public:
	void out()
	{
		cout << "- firepower: "<< power;
	}

};

class bomb: public military
{
public:
	void out()
	{
			cout << "- firepower: "<< power;
	}

};


int main()
 {
    int t;
    setlocale(LC_ALL, "Ukrain");

	plain *mas[6];

	mas[1]=new pass;
	mas[2]=new sport;
	mas[3]=new glider;
	mas[4]=new dest;
	mas[5]=new bomb;

	cout << "plain: \n";
	cout <<"1. pass plain \n";
	cout <<"2. sport plain \n";
	cout <<"3. glider \n";
	cout <<"4. dest \n";
	cout <<"5. bomb\n";

	cout << endl;
	cin >> t;
    cout << endl;

	mas[t]->get();
	cout << endl;

	mas[t]->basicInfo();
	mas[t]->out();
 	getch();
    return 0;
 }
