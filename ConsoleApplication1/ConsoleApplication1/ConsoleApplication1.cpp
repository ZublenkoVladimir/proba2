// Firma.cpp: ���������� ����� ����� ��� ����������� ����������.
//IZMENENIE11111
//nnnnnnnnn
//jjjjljlkjlk


/////ggfy
#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h>
#include <string>

using namespace std;

class Sys_Admis
{
public:
	Sys_Admis();
	~Sys_Admis();
	void virtual Knowledge() = 0;
	void virtual ability() = 0;

protected:
	string name;

};
Sys_Admis::Sys_Admis()
{
}
Sys_Admis::~Sys_Admis()
{
}


class Programer
{
public:
	Programer();
	~Programer();
	void virtual knowledge() = 0;
	void virtual ability() = 0;
protected:
	string name;

};
Programer::Programer()
{

}
Programer::~Programer()
{
}

class Tester
{
public:
	Tester();
	~Tester();
	void virtual knowledge() = 0;
	void virtual ability() = 0;
protected:
	string name;

};
Tester::Tester()
{

}
Tester::~Tester()
{
}

class Humman
{
public:
	Humman();
	~Humman();
	int age;
	string male;
	string education;
private:
};

Humman::Humman()
{
	//	cout << "Hello\n";
}

Humman::~Humman()
{
}



class vasya :public Sys_Admis, public Humman

{
public:
	vasya();
	~vasya();
	void virtual Knowledge();
	void virtual ability();
	int age = 18;
	string name = "Vasya";

	string male = "men";
	string education = "bachelor";
private:

};

vasya::vasya()
{
	/*cout << "my name "<<this->name<<endl;
	cout << "my age " << this->age << endl;
	cout << "my male " << this->male << endl;
	cout << "my education " << this->education << endl;
	ability();
	Knowledge();*/
}
void vasya::Knowledge()
{
	cout << this->name << " �������� �������� �� Windows 7\n";

}

void vasya::ability()
{
	cout << this->name << " �������� �������� � ������� � Cisco\n";
}

vasya::~vasya()
{
}


class Petya :public Sys_Admis, public Humman

{
public:
	Petya();
	~Petya();
	void virtual Knowledge();
	void virtual ability();
	string name = "Petya";
	int age = 23;
	string male = "men";
	string education = "bachelor";
private:

};

Petya::Petya()
{
	/*cout << "my name " << this->name << endl;
	cout << "my age " << this->age << endl;
	cout << "my male " << this->male << endl;
	cout << "my education " << this->education << endl;
	ability();
	Knowledge();*/
}
void Petya::Knowledge()
{
	cout << this->name << " �������� �������� �� Windows 7\n";

}

void Petya::ability()
{
	cout << this->name << " �������� �������� � ������� � Cisco\n";
}

Petya::~Petya()
{
}


class Vanya :public Programer, public Humman

{
public:
	Vanya();
	~Vanya();
	void virtual knowledge();
	void virtual ability();
	string name = "Vanya";
	int age = 25;
	string male = "men";
	string education = "hiet";
private:

};
Vanya::Vanya()
{
	/*cout << "my name " << this->name << endl;
	cout << "my age " << this->age << endl;
	cout << "my male " << this->male << endl;
	cout << "my education " << this->education << endl;
	ability();
	knowledge();*/
}
void Vanya::knowledge()
{
	cout << this->name << " �������� �������� �� C++, Python, Ruby\n";

}
void Vanya::ability()
{
	cout << this->name << " �������� ��������  �������� � ������\n";
}
Vanya::~Vanya()
{
}


class Olya :public Programer, public Humman

{
public:
	Olya();
	~Olya();
	void virtual knowledge();
	void virtual ability();
	string name = "Olya";
	int age = 21;
	string male = "wumen";
	string education = "hiet";
private:

};
Olya::Olya()
{
	/*cout << "my name " << this->name << endl;
	cout << "my age " << this->age << endl;
	cout << "my male " << this->male << endl;
	cout << "my education " << this->education << endl;
	ability();
	knowledge();*/
}
void Olya::knowledge()
{
	cout << this->name << " �������� �������� �� C++, IOS, Android, \n";

}
void Olya::ability()
{
	cout << this->name << " �������� ��������  �������� � ������ � �������\n";
}
Olya::~Olya()
{
}

class Tonya :public Tester, public Humman

{
public:
	Tonya();
	~Tonya();
	void virtual knowledge();
	void virtual ability();
	string name = "Tonya";
	int age = 20;
	string male = "wumen";
	string education = "hiet";
private:

};
Tonya::Tonya()
{
	/*cout << "my name " << this->name << endl;
	cout << "my age " << this->age << endl;
	cout << "my male " << this->male << endl;
	cout << "my education " << this->education << endl;
	ability();
	knowledge();*/
}
void Tonya::knowledge()
{
	cout << this->name << " �������� �������� �� ������������ \n";

}
void Tonya::ability()
{
	cout << this->name << " �������� ��������  ��������  � �������\n";
}
Tonya::~Tonya()
{
}

class Boris :public Tester, public Humman

{
public:
	Boris();
	~Boris();
	void virtual knowledge();
	void virtual ability();
	string name = "Boris";
	int age = 22;
	string male = "men";
	string education = "hiet";
private:

};
Boris::Boris()
{
	/*cout << "my name " << this->name << endl;
	cout << "my age " << this->age << endl;
	cout << "my male " << this->male << endl;
	cout << "my education " << this->education << endl;
	ability();
	knowledge();*/
}
void Boris::knowledge()
{
	cout << this->name << " �������� �������� �� ������������ \n";

}
void Boris::ability()
{
	cout << this->name << " �������� ��������  ��������  \n";
}
Boris::~Boris()
{
}

void Privetstvie()
{
	cout << "\n" << "\n" << "\n";
	cout << "\t" << "\t" << "\t";
	cout << "IT_Firma\n\n";
	cout << "\t" << "\t" << "\t";
	cout << " GUK\n";
	cout << "\n" << "\n" << "\n";
	cout << "\t" << "�� ����� ����� �������� 6 ����������� \n";
	srand(clock());
	Sleep(2000);
	system("cls");
}

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	vasya A;
	Petya B;
	Vanya C;
	Olya D;
	Tonya E;
	Boris I;

	Privetstvie();


	cout << "������� ������� ���� �����������?\n" << endl;
	cout << "YES  /  NO\n";
	cout << "esc-Exit";

	int key = _gettch();
	if (key == 27)
	{
		return 0;
	}
				{
					switch (key){

					case 121:
						system("cls");
						cout << A.name << " Sys_Admis" << endl;
						cout << B.name << "  Sys_Admis\n" << endl;
						cout << C.name << "  Programer" << endl;
						cout << D.name << "  Programer\n" << endl;
						cout << E.name << "  Tester" << endl;
						cout << I.name << "  Tester\n" << endl;
						//	_gettch();
						break;
					case 110:
						break;

					default:
						system("cls");
						cout << "������ �����";

						_gettch();
					}
				}


	cout << "���� ������ �������� ������ � �����������, �������� ���������\n" << endl;

	cout << "1 -Sys_Admis,  2-Programer,  3- Tester\n";
	cout << "esc- EXIT\n";
	//int y =_gettch();
	int y = _gettch();
	if (y == 27)
	{
		return 0;
	}
				{
					switch (y){
					case 49:
						system("cls");
						cout << A.name << " Sys_Admis" << endl;
						cout << B.name << "  Sys_Admis\n" << endl;
						cout << "\n ������ ��������? ������ ����������\n";
						cout << "1-Vasya, 2-Petya\n";
						cout << "esc-Exit\n";
						int z;
						cin >> z;

						/*if (y == 27)
						{
						return 0;
						}*/

						{
							switch (z){

							case 52:
								system("cls");
								cout << A.name << endl;
								cout << A.age << endl;
								cout << A.education << endl;
								cout << A.male << endl;
								_gettch();
								break;
							case 53:

								break;

							default:
								system("cls");
								cout << "������ �����";
								_gettch();
								break;
							}
						}
						break;
					case 50:
						system("cls");
						cout << C.name << "  \n Programer" << endl;
						cout << D.name << "  \nProgramer\n" << endl;
						_gettch();
						break;
					case 51:
						system("cls");
						cout << E.name << "  Tester" << endl;
						cout << I.name << "  Tester\n" << endl;
						_gettch();
						break;

					default:
						system("cls");
						cout << "������ �����";

						_gettch();
					}
				}
	cout << A.age;
	cout << endl;
	//cout << A.education; cout << endl;

	//cout<<I.name<<" "<<I.name;
	//A.Knowledge();
	_gettch();
	return 0;
}

