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
		cout << "- ����: "<< weight << endl;
		cout << "- �i���i��� �i���: "<< seats << endl;
  	}





};


class military: public plain
{
public:
	int power;

void get(){
cout << "����: ";
cin >> weight;
cout << "�i���i��� �i���: ";
cin >> seats;
cout << "������� �i��: ";
cin >> power;


}
};

class civilc: public plain
{
public:
	int price;

void get(){
cout << "����: ";
cin >> weight;
cout << "�i���i��� �i���: ";
cin >> seats;
cout << "�i��: ";
cin >> price;

}
};

class pass: public civilc
{
public:
	void out()
	{
		cout<<"- �i��: "<< price;
	}
};

class sport: public civilc
{
public:
	void out()
	{
		cout<<"- �i��: "<< price;
	}
};

class glider: public civilc
{
public:
	void out()
	{
		cout<<"- �i��: "<< price;
	}
};


class dest: public military
{
public:
	void out()
	{
		cout << "- ������� �i��: "<< power;
	}

};

class bomb: public military
{
public:
	void out()
	{
			cout << "- ������� �i��: "<< power;
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

	cout << "�i����: \n";
	cout <<"1. ������������ �i���\n";
	cout <<"2. ���������� �i���\n";
	cout <<"3. ������\n";
	cout <<"4. ���������\n";
	cout <<"5. ���������������\n";

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
