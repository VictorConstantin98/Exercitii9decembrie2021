#include <iostream>
using namespace std;
void main()
{
	///Minimul dintre trei numere cu ajutorul unei variabile auxiliare
	int a;
	int b;
	int c;
	int min;
	cin >> a >> b >> c;
	min = a;
	if (b < min) 
	{
		min = b;
	}
	if (c < min) 
	{
		min = c;
	}
	cout << min;

	///Maximul dintre trei numere cu ajutorul unei variabile auxiliare
	int a;
	int b;
	int c;
	cin >> a >> b >> c;
	int max;
	max = a;
	if (b > max)
	{
		max = b;
	}
	if (c > max)
	{
		max = c;
	}
	cout << max;

	///Sa se calculeze media aritmetica dintre minimul si maximul urmatorui sir de numere:10, 50, 80, 5, 2, 7.
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	a = 10;
	b = 50;
	c = 80;
	d = 5;
	e = 2;
	f = 7;
	int min;
	min = a;
	if (b < min) 
	{
		min = b;
	}
	if (c < min) 
	{
		min = c;
	}
	if (d < min) 
	{
		min = d;
	}
	if (e < min) 
	{
		min = e;
	}
	if (f < min) 
	{
		min = f;
	}
	cout << min << endl;
	int max;
	max = a;
	if (b > max) 
	{
		max = b;
	}
	if (c > max) 
	{
		max = c;
	}
	if (d > max) 
	{
		max = d;
	}
	if (e > max) 
	{
		max = e;
	}
	if (f > max) 
	{
		max = f;
	}
	cout << max << endl;
	int medie;
	medie = (min + max) / 2;
	cout << medie;

	///Sa se calculeze media a patru numere stiind ca se elimina cel mai mare numar (Outlier-ul maxim)
	float a;
	float b;
	float c;
	float d;
	float max;
	float media;
	cin >> a >> b >> c >> d;
	max = a;
	if (b > max) 
	{
		max = b;
	}
	if (c > max) 
	{
		max = c;
	}
	if (d > max) 
	{
		max = d;
	}
	cout << max << endl;
	media = (a + b + c + d - max) / 3;
	cout << media;

	///Homework
	//Ex8
	float a;
	float b;
	float c;
	float d;
	float e;
	float max;
	float min;
	float media;
	cin >> a >> b >> c >> d >> e;
	max = a;
	if (b > max)
	{
		max = b;
	}
	if (c > max)
	{
		max = c;
	}
	if (d > max)
	{
		max = d;
	}
	if (e > max)
	{
		max = e;
	}
	cout << max << endl;
	min = a;
	if (b < min)
	{
		min = b;
	}
	if (c < min)
	{
		min = c;
	}
	if (d < min)
	{
		min = d;
	}
	if (e < min)
	{
		e = min;
	}
	cout << min << endl;
	media = (a + b + c + d + e - max - min) / 3;
	cout << media;

	///Ex 9
	int a;
	int b;
	int c;
	cin >> a >> b >> c;
	if ((a*a == b*b + c*c) || (b*b==a*a+c*c) || (c*c==a*a+b*b))
	{
		cout << "dreptunghic" << endl;
	}
	else
	{
		cout << "nu este dreptunghic" << endl;
	}
	
	///Ex 10
	int x;
	cin >> x;
	int F;
	if (x < 5)
	{
		F = x * x - 3;
		cout << "F=" << F << endl;
	}
	else
	{
		if (5 <= x && x <= 25) /// reprezinta 5<=x<=25
		{
			F = x + 1;
			cout << "F=" << F << endl;
		}
		else
		{
			if (x > 25)
			{
				F = x * x - 5 * x + 6;
				cout << "F=" << F << endl;
			}
		}
	}
	
	///Ex 11
	int nota;
	cin >> nota;
	if (1 >= nota && nota <= 10)
	{
		cout << "valida";
	}
	else
	{
		if (nota < 1 || nota > 10)
		{
			cout << "invalida";
		}
	}
	
	///De refacut
	///Ex 9
	int a;
	cin >> a;
	int viteza;
	if (a <= 50)
	{
		cout << "viteza in oras este legala" << endl;
	}
	else
	{
		cout << "viteza in oras este ilegala" << endl;
	}
	if (a <= 90)
	{
		cout << "viteza in afara orasului este legala" << endl;
	}
	else
	{
		cout << "viteza in afara orasului este ilegala" << endl;
	}
	if (a <= 130)
	{
		cout << "viteza pe autostrada este legala" << endl;
	}
	else
	{
		cout << "viteza pe autostrada este ilegala" << endl;
	}
	
	///Ex 12
	int produs1;
	int produs2;
	int produs3;
	int produs4;
	int produs5;
	int total;
	produs1 = 10;
	produs2 = 15;
	produs3 = 35;
	produs4 = 20;
	produs5 = 5;
	total = 85;
	cout << "produs1=" << produs1 << " " << "produs2=" << produs2 << " " << "produs3=" << produs3 << " " << "produs4=" << produs4 << " " << "produs5=" << produs5 << endl;
	if (produs1 + produs2 + produs3 + produs4 + produs5 == total)
	{
		cout << true << endl;
	}
	else
	{
		cout << false << endl;
	}

	///Ex 13
	int a;
	cin >> a;
	if (a == 1)
	{
		cout << "utilizatorul este autentificat" << endl;
	}
	else
	{
		if (a == -1)
		{
			cout << "utilizatorul nu este autentificat" << endl;
		}
	}

	///Ex 14
	int a;
	int b;
	int c;
	cin >> a >> b;
	if (a > 4 && b > 5)
	{
		c = a * b;
		cout << "c=" << c << endl;
	}
	else
	{
		if (a <= 4 && b <= 5)
		{
			c = a + b;
			cout << "c=" << c << endl;
		}
	}

	///Ex 15
	int luna;
	int total;
	luna = 12;
	total = 50;
	cout << "luna=" << luna << " " << "total=" << total << endl;
	if (luna == 12 && total == 50)
	{
		cout << true << endl;
	}
	else
	{
		cout << false << endl;
	}
	
	///Exercitii min si max
	//Ex 1
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;
	int h;
	int i;
	a = 5;
	b = 20;
	c = 25;
	d = 4;
	e = -2;
	f = -30;
	g = 15;
	h = 101;
	i = -31; 
	int min;
	int aux;
	aux = 0;
	if (a % 2 == 0)
	{
		min = a; // initializam minimului prima valoare para
		aux = 1; // modificam auxiliarul cu 1 atunci cand initializam minimul
	}
	if (aux == 1) // verificare daca minimul este initializat
	{
		if ((b % 2 == 0) < min)
		{
			min = b;
		}
	}
	else {
		if (b % 2 == 0) 
		{
			min = b;
			aux = 1;
		}
	}
	if (aux == 1)
	{
		if ((c % 2 == 0) < min)
		{
			min = c;
		}
	}
	else
	{
		if (c % 2 == 0)
		{
			min = c;
			aux = 1;
		}
	}
	if (aux == 1)
	{
		if ((d % 2 == 0) < min)
		{
			min = d;
		}
	}
	else
	{
		if (d % 2 == 0)
		{
			min = d;
			aux = 1;
		}
	}
	if (aux == 1)
	{
		if ((e % 2 == 0) < min)
		{
			min = e;
		}
	}
	{
		if (e % 2 == 0)
		{
			min = e;
			aux = 1;
		}
	}
	if (aux == 1)
	{
		if ((f % 2 == 0) &&  (f < min))
		{
			min = f;
		}
	}
	else
	{
		if (f % 2 == 0)
		{
			min = f;
			aux = 1;
		}
	}
	if (aux == 1)
	{
		if ((g % 2 == 0) && (g < min))
		{
			min = g;
		}
	}
	else
	{
		if (g % 2 == 0)
		{
			min = g;
			aux = 1;
		}
	}
	if (aux == 1)
	{
		if ((h % 2 == 0) && (h < min))
		{
			min = h;
		}
	}
	else
	{
		if (h % 2 == 0)
		{
			min = h;
			aux = 1;
		}
	}
	if (aux == 1)
	{
		if ((i % 2 == 0) && (i < min))
		{
			min = i;
		}
	}
	else
	{
		if (h % 2 == 0)
		{
			min = h;
			aux = 1;
		}
	}
	cout << min << endl;
	int max;
	aux = 0;
	if (a % 2 == 0)
	{
		max = a;
		aux = 1;
	}
	if (b % 2 == 0)
	{
		max = b;
		aux = 1;
	}
	if (aux == 1)
	{
		if ((c % 2 == 0) > max)
		{
			max = c;
		}
	}
	else
	{
		if (c % 2 == 0)
		{
			max = c;
			aux = 1;
		}
	}
	if (aux == 1)
	{
		if ((d % 2 == 0) > max)
		{
			max = d;
		}
	}
	else
	{
		if (d % 2 == 0)
		{
			max = d;
			aux = 1;
		}
	}
	if (aux == 1)
	{
		if ((e % 2 == 0) > max)
		{
			max = e;
		}
	}
	else
	{
		if (e % 2 == 0)
		{
			max = e;
			aux = 1;
		}
	}
	if (aux == 1)
	{
		if ((f % 2 == 0) > max)
		{
			max = f;
		}
	}
	else
	{
		if (f % 2 == 0)
		{
			max = f;
			aux = 1;
		}
	}
	if (aux == 1)
	{
		if ((g % 2 == 0) > max)
		{
			max = g;
		}
	}
	else
	{
		if (g % 2 == 0)
		{
			max = g;
			aux = 1;
		}
	}
	if (aux == 1)
	{
		if ((h % 2 == 0) > max)
		{
			max = h;
		}
	}
	else
	{
		if (h % 2 == 0)
		{
			max = h;
			aux = 1;
		}
	}
	if (aux == 1)
	{
		if ((i % 2 == 0) > max)
		{
			max = i;
		}
	}
	else
	{
		if (i % 2 == 0)
		{
			max = i;
			aux = 1;
		}
	}
	cout << max << endl;

	///Ex 2 si de refacut in considerentul in care a nu este mai mare decat 20 => ne vom folosi de tehnica cu aux pt a verifica cand initializam minimul datorita faptului ca nu putem initializa minimul cu prima valoare nestiind daca se inedeplineste conditia
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;
	a = 40;
	b = 10;
	c = 5;
	d = 35;
	e = 33;
	f = 20;
	g = 19;
	int min;
	min = a;
	int aux;
	aux = 0;
	if (a > 20 == min)
	{
		min = a;
		aux = 1;
	}
	if (aux == 1)
	{
		if ((b > 20 == min) < min)
		{
			min = b;
		}
	}
	else
	{
		if (b > 20 == min)
		{
			min = b;
			aux = 1;
		}
	}
	if (aux == 1)
	{
		if ((c > 20 == min) < min)
		{
			min = c;
		}
	}
	else
	{
		if (c > 20 == min)
			min = c;
			aux = 1;
	}
	if (aux == 1)
	{
		if ((d > 20 == min) < min)
		{
			min = d;
		}
	}
	else
	{
		if (d > 20 == min)
			min = d;
			aux = 1;
	}
	if (aux == 1)
	{
		if ((e > 20 == min) < min)
		{
			min = e;
		}
	}
	else
	{
		if (e > 20 == min)
		{
			min = e;
			aux = 1;
		}
	}
	if (aux == 1)
	{
		if ((f > 20 == min) < min)
		{
			min = f;
		}
	}
	else
	{
		if (f > 20 == min)
		{
			min = f;
			aux = 1;
		}
	}
	if (aux == 1)
	{
		if ((g > 20 == min) < min)
		{
			min = g;
		}
	}
	else
	{
		if (g > 20 == min)
		{
			min = g;
			aux = 1;
		}
	}
	cout << min << endl;

	


















	





























}

