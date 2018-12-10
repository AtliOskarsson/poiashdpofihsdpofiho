// próf.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

/*------------------------ 5. ------------------------ */
int tryggjaOddatolu(int i) {
	// Fann enga lausn án skilyrğassetningu.
	while (i % 2 != 0) {
		return i;
	}
	return ++i;
}
/*---------------------------------------------------- */

/*---------------------------------------------------- */
class Leikmadur
{
public:
	Leikmadur();
	Leikmadur(int id, string nafn, int stig, string stada);
	~Leikmadur();
	string Nafn();

private:
	int id;
	string nafn;
};

Leikmadur::Leikmadur()
{
	this->id = 0;
	this->nafn = "";
}

Leikmadur::Leikmadur(int id, string nafn, int stig, string stada)
{
	this->id = id;
	this->nafn = nafn;
}

Leikmadur::~Leikmadur()
{
}
/*---------------------------------------------------- */


/*---------------------------------------------------- */
class VistarLeikmadur : public Leikmadur
{
public:
	VistarLeikmadur();
	VistarLeikmadur(int id, string nafn, int stig, string stada);
	~VistarLeikmadur();
	int Stig(int);

	friend bool operator<(const VistarLeikmadur& b, const VistarLeikmadur &c);
	friend bool operator>(const VistarLeikmadur& b, const VistarLeikmadur &c);
private:
	int stig;
	string stada;
};

bool operator<(const VistarLeikmadur& b, const VistarLeikmadur &c) {
	return b.stig < c.stig;
}

bool operator>(const VistarLeikmadur& b, const VistarLeikmadur &c) {
	return b.stig > c.stig;
}


VistarLeikmadur::VistarLeikmadur()
{
	this->stig = 0;
	this->stada = "";
}

VistarLeikmadur::VistarLeikmadur(int id, string nafn, int stig, string stada)
{
}

VistarLeikmadur::~VistarLeikmadur()
{
}

int Stig(int stiginn) {
	
}
/*---------------------------------------------------- */



/*---------------------------------------------------- */
class Stada
{
public:
	Stada();
	Stada(string stada, string nafn);
	~Stada();

private:
	string stada;
	string nafn;

};

Stada::Stada()
{
}

Stada::Stada(string stada, string nafn)
{
}

Stada::~Stada()
{
}
/*---------------------------------------------------- */

int main()
{
	/*------------------------ 5. ------------------------ */
	int i = 8, k;
	k = tryggjaOddatolu(i);
	cout << "Upprunalega: " << i << ", Eftir fall: " << k << endl;
	int y = 7, j;
	j = tryggjaOddatolu(y);
	cout << "Upprunalega: " << y << ", Eftir fall: " << j << endl;
	/*---------------------------------------------------- */
	Stada austur("A", "Austur");
	Stada vestur("V", "Vestur");

	// Ég hafği ekki tíma til ağ hugsa útí şessa villu
	VistarLeikmadur geir(101, "Geir", 0, austur);
	VistarLeikmadur gauti(102, "Gauti", 0, vestur);
	// náği ekki helfur ağ hugsa úti şetta
	geir.Stig(10);
	gauti.Stig(3);
	// Enga hugmynd hvort ağ şessi overload operator virkar
	if (geir < gauti) cout << gauti.Nafn() << " vann!" << endl;
	else cout << geir.Nafn() << " vann!" << endl;
	


	return 0;
}

