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
		cout << "- вага: "<< weight << endl;
		cout << "- кiлькiсть мiсць: "<< seats << endl;
  	}





};


class military: public plain
{
public:
	int power;

void get(){
cout << "Вага: ";
cin >> weight;
cout << "Кiлькiсть мiсць: ";
cin >> seats;
cout << "Вогнева мiць: ";
cin >> power;


}
};

class civilc: public plain
{
public:
	int price;

void get(){
cout << "Вага: ";
cin >> weight;
cout << "Кiлькiсть мiсць: ";
cin >> seats;
cout << "Цiна: ";
cin >> price;

}
};

class pass: public civilc
{
public:
	void out()
	{
		cout<<"- цiна: "<< price;
	}
};

class sport: public civilc
{
public:
	void out()
	{
		cout<<"- цiна: "<< price;
	}
};

class glider: public civilc
{
public:
	void out()
	{
		cout<<"- цiна: "<< price;
	}
};


class dest: public military
{
public:
	void out()
	{
		cout << "- вогнева мiць: "<< power;
	}

};

class bomb: public military
{
public:
	void out()
	{
			cout << "- вогнева мiць: "<< power;
	}

};


int main()
 {
    int t;
    setlocale(LC_ALL, "Russian");

	plain *mas[6];

	mas[1]=new pass;
	mas[2]=new sport;
	mas[3]=new glider;
	mas[4]=new dest;
	mas[5]=new bomb;

	cout << "Лiтаки: \n";
	cout <<"1. Пасажирський лiтак\n";
	cout <<"2. Спортивний лiтак\n";
	cout <<"3. Планер\n";
	cout <<"4. Винищувач\n";
	cout <<"5. Бомбардувальник\n";

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
