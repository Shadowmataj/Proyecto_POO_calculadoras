/*Proyecto final (Calculadoras)
Alumno: Christian Mata Ju�rez
Profesor: Osornio Soto Roberto
Mater�a: Programaci�n orientada a objetos
Grupo: 2CV35*/

/*************************************Librer�as a utilizar*/
#include <iostream>
#include <stdio.h>
#include <locale>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <iomanip>
#define pi 3.141592

using namespace std;

/*************************************Funciones de usuario*/
// Programa
class Calculadoras
{
protected:
	int b, p2, q2, z, i;
	double a, c, c1, d, e, f, p, q, q1, q3, p1, h, z1;

public:
	void error();
	void repeticion(int, int);
	double fracciones(double, int);
	void color();
	void gotoxy(int, int);
	void Despedida();
	void Notas_parche();
};

void Calculadoras::error()
{
	gotoxy(26, 7);
	cout << "***************************************************************";
	gotoxy(26, 8);
	cout << "**           Error: La entrada no es v�lida.                 **";
	gotoxy(26, 9);
	cout << "**        Presione cualquier tecla para volver al men�.      **";
	gotoxy(26, 10);
	cout << "***************************************************************";
	getch();
	system("cls");
	fflush(stdin);
}

void Calculadoras::repeticion(int x, int y)
{
	do
	{
		gotoxy(x, y);
		cout << "*************************************";
		gotoxy(x, y + 1);
		cout << "**          Te gustar�a...         **";
		gotoxy(x, y + 2);
		cout << "*************************************";
		gotoxy(x, y + 3);
		cout << "**                                 **";
		gotoxy(x, y + 4);
		cout << "**  1.- Usar la misma operaci�n.   **";
		gotoxy(x, y + 5);
		cout << "**  2.- Volver al men� principal.  **";
		gotoxy(x, y + 6);
		cout << "**                                 **";
		gotoxy(x, y + 7);
		cout << "*************************************";
		gotoxy(x, y + 8);
		cout << "**              *****              **";
		gotoxy(x, y + 9);
		cout << "**              *   *              **";
		gotoxy(x, y + 10);
		cout << "**              *****              **";
		gotoxy(x, y + 11);
		cout << "*************************************";
		d = 0;
		gotoxy(x + 18, y + 9);
		cin >> d;
		system("cls");
		if (d < 1 || d > 2)
			error();
	} while (d < 1 || d > 2);
}

void Calculadoras::Despedida()
{
	gotoxy(30, 3);
	cout << "**************************************";
	gotoxy(30, 4);
	cout << "** Gracias por utilizar el programa **";
	gotoxy(30, 5);
	cout << "**************************************";
	gotoxy(30, 6);
	cout << "**                                  **";
	gotoxy(30, 7);
	cout << "**     �CONTIN�A ESTUDIANDO!        **";
	gotoxy(30, 8);
	cout << "**                                  **";
	gotoxy(30, 9);
	cout << "**                                  **";
	gotoxy(30, 10);
	cout << "**************************************";
	gotoxy(30, 11);
	cout << "**   * * *     * * *      * * *     **";
	gotoxy(30, 12);
	cout << "**   * * *     * * *      * * *     **";
	gotoxy(30, 13);
	cout << "**   * * *     * * *      * * *     **";
	gotoxy(30, 14);
	cout << "**************************************";
}

double Calculadoras::fracciones(double x, int n)
{
	if (x < 0)
		c = fabs(d);
	if (x > 0)
		c = x;
	c1 = (fmod(c, 1));
	;
	a = (c - c1);
	i = 1;
	/************N�mero con punto decimal se puede entender como la suma entre un entero y un n�mero entre 0 y 1*******/
	/************Esta secci�n se trata de formular un n�mero de la forma p/q de u real*********************************/

	do
	{
		q = (i / c1);
		q1 = fmod(q, 1);
		if (q1 < 0.000000001 || q1 > 0.999999999)
			q1 = floor(q1);
		p = ((a * (q)) + i);
		i++;
	} while (q1 != 0);
	if (x < 0)
		p = -1;
	if (n == 1)
		return (p);
	if (n == 2)
		return (q);
}

void Calculadoras::gotoxy(int x, int y)
{
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}

void Calculadoras::color()
{
	int mod;
	do
	{
		cout << "\n\n     ******************************************************************************************" << endl;
		cout << "     **   0.- Blanco con negro.                         8.- Gris.                            **" << endl;
		cout << "     **   1.- Azul.                                     9.- Azul claro.                      **" << endl;
		cout << "     **   2.- Verde.                                    10.- Verde claro.                    **" << endl;
		cout << "     **   3.- Aguamarina.                               11.- Aguamarina claro.               **" << endl;
		cout << "     **   4.- Rojo.                                     12.- Rojo claro.                     **" << endl;
		cout << "     **   5.- P�rpura.                                  13.- P�pura claro.                   **" << endl;
		cout << "     **   6.- Amarillo.                                 14.- Amarillo claro.                 **" << endl;
		cout << "     **   7.- Blanco.                                   15.- Blanco brillante.               **" << endl;
		cout << "     ******************************************************************************************" << endl;
		cout << "     **  Selecciona el color de la terminal:                                                 **" << endl;
		cout << "     ******************************************************************************************" << endl;
		gotoxy(45, 12);
		cin >> mod;
		switch (mod)
		{
		case 0:
			system("color 70");
			break;
		case 1:
			system("color 1");
			break;
		case 2:
			system("color 2");
			break;
		case 3:
			system("color 3");
			break;
		case 4:
			system("color 4");
			break;
		case 5:
			system("color 5");
			break;
		case 6:
			system("color 6");
			break;
		case 7:
			system("color 7");
			break;
		case 8:
			system("color 8");
			break;
		case 9:
			system("color 9");
			break;
		case 10:
			system("color A");
			break;
		case 11:
			system("color B");
			break;
		case 12:
			system("color C");
			break;
		case 13:
			system("color D");
			break;
		case 14:
			system("color E");
			break;
		case 15:
			system("color F");
			break;
		default:
			cout << "La opci�n seleccionada no es v�lida.";
		}
		system("cls");
	} while (mod < 0 || mod > 15);
}

void Calculadoras::Notas_parche()
{
	cout << "\n\n     ******************************************************************************************" << endl;
	cout << "     **   Actualizaci�n 2,0                                                                  **" << endl;
	cout << "     **                                                                                      **" << endl;
	cout << "     **   Para la presente actualizaci�n del programa 'Calculadora' se ha realizado el tra   **" << endl;
	cout << "     **   nscripci�n completa del c�digo fuente del lenguaje C a C++, pero no se limita �n   **" << endl;
	cout << "     **   icamente a esto, sino que, del c�digo fuente original se lograron eliminar cerca   **" << endl;
	cout << "     **   de 900 l�neas que en su momento parecieron ser adecuadas, pero que en un an�lisis  **" << endl;
	cout << "     **   posterior se identificaron como prescindibles. De igual forma se implementaron     **" << endl;
	cout << "     **   tres nuevo m�dulos que son, c�lculo de carga puntual, capacitancia y an�lisis com  **" << endl;
	cout << "     **   binatorio.                                                                         **" << endl;
	cout << "     **                                                                                      **" << endl;
	cout << "     ******************************************************************************************" << endl;
	cout << "     **                                                                                      **" << endl;
	cout << "     ******************************************************************************************" << endl;
	getch();
	system("cls");
}

class Calculadora : public Calculadoras
{
protected:
	int c1, c2, c3, c4; // Variables a utilizar.
	char c;
	double a, b, r, r1, r2, r3, r4;

public:
	Calculadora(int x1 = 0, int x2 = 0, int x3 = 0, int x4 = 0, char c1 = 'o', double d1 = 0, double d2 = 0, double d3 = 0, double d4 = 0, double d5 = 0, double d6 = 0, double d7 = 0)
	{
		c1 = x1;
		c2 = x2;
		c3 = x3;
		c4 = x4;
		c = c1;
		a = d1;
		b = d2;
		r = d3;
		r1 = d4;
		r2 = d5;
		r3 = d6;
		r4 = d7;
	}
	~Calculadora() {}
	void Modulo();
};

void Calculadora::Modulo()
{
	do
	{
		cout << "\n\n\n     ***************************************************************************************************" << endl;
		cout << "     **  Operaci�n:                            ** El resultado previo:                                **" << endl;
		cout << "     **                                        **                                                     **" << endl;
		cout << "     **                                        **                                                     **" << endl;
		cout << "     **                                        **                                                     **" << endl;
		cout << "     ***************************************************************************************************" << endl;
		cout << "     **  Suma(+).     **  Multiplicaci�n(*).  **  Fracci�n:                                           **" << endl;
		cout << "     *******************************************                                                      **" << endl;
		cout << "     **  Resta(-).    **  Divisi�n(/).        **                                                      **" << endl;
		cout << "     ***************************************************************************************************" << endl;
		cout << "     **  Residuo(%).  **  Potencia(^).        ** Logaritmo(l).                                        **" << endl;
		cout << "     ******************************************* 1.-Logaritmo e.                                      **" << endl;
		cout << "     **  Ra�z(|).     **//////////////////////** 2.-Logaritmo 10.                                     **" << endl;
		cout << "     ***************************************************************************************************" << endl;
		cout << "     **  Seno(s/S):   **  Coseno(c/C):   **  Tangente(t/T): **  Cotangente(t/T): **  Cosecante(c/C):  **" << endl;
		cout << "     **  1.-Seno/G.   **  1.-Coseno/G.   **  1.-Tangente/G. ** -1.-Cotangente/G. ** -1.- Cosecante/G. **" << endl;
		cout << "     **  2.-Seno/R.   **  2.-Coseno/R.   **  2.-Tangente/R. ** -2.-Cotangente/R. ** -2.- Cosecante/R. **" << endl;
		cout << "     **  3.-Aseno/G.  **  3.-Acoseno/G.  **  3.-Atangente/G.********************************************" << endl;
		cout << "     **  4.-Aseno/R.  **  4.-Acoseno/R.  **  4.-Atangente/R.**  Secante(s/S):    **      Salir:       **" << endl;
		cout << "     **               **                 **                 ** -1.- Secante/G.   **      (1f1)        **" << endl;
		cout << "     **   Ejem: 1s0.  **  Ejem: 1c90.    **  Ejem: 1t45.    ** -2.- Secante/R.   **                   **" << endl;
		cout << "     ***************************************************************************************************" << endl;
		cout << "     Calculadora.";
		gotoxy(64, 5);
		cout << "                           ";
		gotoxy(65, 5);
		cout << fixed << setprecision(4) << r;
		gotoxy(15, 5);
		cin >> a;
		cin >> c;
		cin >> b;
		c4 = tolower(c);
		switch (c4)
		{
		/*****************************************Caso suma*/
		case '+':
			r = a + b;
			break;
		/*****************************************Caso multiplicaci�n*/
		case '*':
		case 'x':
			r = a * b;
			break;
		/*****************************************Caso resta*/
		case '-':
			r = a - b;
			break;
		/*****************************************Caso divisi�n*/
		case '/':
			if (b < 0 || b > 0)
				r = a / b;
			else
			{
				gotoxy(15, 5);
				cout < "MATH ERROR";
				getch();
				c1 = 0;
			}
			break;
		/*****************************************Caso residuo*/
		case '%':
			if (b < 0 || b > 0)
				r = fmod(a, b);
			else
			{
				gotoxy(15, 5);
				cout << "MATH ERROR";
				getch();
				c1 = 0;
			}
			break;
		/*****************************************Caso Seno*/
		case 's':
			c2 = (a);
			if (c2 == (-2))
			{
				r1 = (cos(b));
				if (r1 < 0 || r1 > 0)
					r = (1 / r1);
				else
				{
					gotoxy(15, 5);
					cout << "MATH ERROR.";
					getch();
					c1 = 0;
				}
			}
			if (c2 == (-1))
			{
				r1 = (cos(b * (pi / 180)));
				if (r1 < 0 || r1 > 0)
					r = (1 / r1);
				else
				{
					gotoxy(15, 5);
					cout << "MATH ERROR.";
					getch();
					c1 = 0;
				}
			}
			if (c2 == 1)
				r = sin(b * (pi / 180));
			if (c2 == 2)
				r = sin(b);
			if (c2 == 3)
				r = ((asin(b) * (180)) / pi);
			if (c2 == 4)
				r = asin(b);
			if (c2 < -2 || c2 > 4)
			{
				gotoxy(15, 5);
				cout << "Opci�n no disponible.";
				getch();
				c1 = 0;
			}
			break;
		/*****************************************Caso Coseno*/
		case 'c':
			c2 = (a);
			if (c2 == (-2))
			{
				r1 = (sin(b));
				if (r1 < 0 || r1 > 0)
					r = (1 / r1);
				else
				{
					gotoxy(15, 5);
					cout << "MATH ERROR.";
					getch();
					c1 = 0;
				}
			}
			if (c2 == (-1))
			{
				r1 = (sin(b * (pi / 180)));
				if (r1 < 0 || r1 > 0)
					r = (1 / r1);
				else
				{
					gotoxy(15, 5);
					cout << "MATH ERROR.";
					getch();
					c1 = 0;
				}
			}
			if (c2 == 1)
				r = cos(b * (pi / 180));
			if (c2 == 2)
				r = cos(b);
			if (c2 == 3)
				r = ((acos(b) * (180)) / pi);
			if (c2 == 4)
				r = acos(b);
			if (c2 < -2 || c2 > 4)
			{
				gotoxy(15, 5);
				cout << "Opci�n no disponible.";
				getch();
				c1 = 0;
			}
			break;
		/*****************************************Caso Tangente*/
		case 't':
			c2 = (a);
			if (c2 == (-2))
			{
				r1 = (tan(b));
				if (r1 < 0 || r1 > 0)
					r = 1 / (r1);
				else
				{
					gotoxy(15, 5);
					cout << "MATH ERROR.";
					getch();
					c1 = 0;
				}
			}
			if (c2 == (-1))
			{
				r1 = (tan((b * pi) / 180));
				if (r1 < 0 || r1 > 0)
					r = (1 / r1);
				else
				{
					cout << "MATH ERROR.";
					getch();
					c1 = 0;
				}
			}
			if (c2 == 1)
				r = tan(b * (pi / 180));
			if (c2 == 2)
				r = tan(b);
			if (c2 == 3)
				r = ((atan(b) * (180)) / pi);
			if (c2 == 4)
				r = atan(b);
			if (c2 < -2 || c2 > 4)
			{
				gotoxy(15, 5);
				cout < "Opci�n no disponible.";
				getch();
				c1 = 0;
			}
			break;
		/*****************************************Caso Potencia*/
		case '^':
			r = pow(a, b);
			break;
		/*****************************************Caso Ra�ces*/
		case '|':
			r = pow(b, (1 / a));
			break;
		/*****************************************Caso Logaritmo*/
		case 'l':
			c2 = (a);
			if (c2 == 1)
				r = log(b);
			if (c2 == 2)
				r = log10(b);
			if (c2 < 1 || c2 > 2)
			{
				gotoxy(15, 5);
				cout << "Opci�n no disponible.";
				getch();
				c1 = 0;
			}
			break;
		/*****************************************Caso Salir al men� principal*/
		case 'f':
			break;
		}
		if (c4 != 'f' && c1 != 0)
		{
			gotoxy(65, 5);
			cout << fixed << setprecision(4) << r << endl;
			r2 = fmod(r, 1);
			if (r2 != 0 && r != 0)
			{
				r3 = fracciones(r, 1);
				r4 = fracciones(r, 2);
				if (r3 < 100000 && r4 < 100000)
					if ((r3 / r4) > 0)
					{
						gotoxy(65, 9);
						cout << fixed << setprecision(0) << r3 << "/" << fixed << setprecision(0) << r4 << endl;
					}
					else
					{
						gotoxy(65, 9);
						cout << "-" << fixed << setprecision(0) << r3 << "/" << fixed << setprecision(0) << r4;
					}
			}
			getch();
		}
		fflush(stdin);
		c1 = 1;
		system("cls");
	} while (c4 != 'f');
}

class Factorizacion : public Calculadoras
{
protected:
	double a, b, c, dis, x1, x2, x3, x4, grd1, a2, c2, p1, q1, p2, q2, sqrt1, sqrt2, sqrt3, sqrt4;

public:
	Factorizacion(double x1 = 0, double x2 = 0, double x3 = 0, double x4 = 0, double x5 = 0, double x6 = 0, double x7 = 0, double x8 = 0, double x9 = 0, double x10 = 0, double x11 = 0, double x12 = 0, double x13 = 0, double x14 = 0, double x15 = 0, double x16 = 0, double x17 = 0, double x18 = 0, double x19 = 0)
	{
		a = x1;
		b = x2;
		c = x3;
		x1 = x4;
		x2 = x5;
		x3 = x6;
		x4 = x7;
		grd1 = x8;
		a2 = x9;
		c2 = x10;
		p1 = x11;
		p2 = x12;
		q2 = x13;
		sqrt1 = x14;
		sqrt2 = x15;
		sqrt3 = x16;
		sqrt4 = x17;
	}
	~Factorizacion() {}
	void raices2dogrado();
	void factorizacion_show(double, double, double);
	void factorizacion_show21(double, double);
	void factorizacion_show41(double, double, double, double);
	void factorizacion_show42(double, double, double, double);
	void factorizacion_show51(double, double, double, double, double);
	void factorizacion_show43(double, double, double, double);
	void factorizacion_show44(double, double, double, double);
	void factorizacion_show52(double, double, double, double, double);
	void factorizacion_show22(double, double);
};

void Factorizacion::raices2dogrado()
{
	do
	{
		cout << "\n\n     ******************************************************************************************" << endl;
		cout << "     **   Factorizaci�n:                                                                     **" << endl;
		cout << "     **                                                                                      **" << endl;
		cout << "     ******************************************************************************************" << endl;
		cout << "     ** Coeficiente A:            ** Coeficiente B:              ** Coeficiente C:           **" << endl;
		cout << "     **                           **                             **                          **" << endl;
		cout << "     **                           **                             **                          **" << endl;
		cout << "     ******************************************************************************************" << endl;
		cout << "     ** Discriminante:            ** Ra�ces:                                                 **" << endl;
		cout << "     **                           **                                                         **" << endl;
		cout << "     **                           **                                                         **" << endl;
		cout << "     ******************************************************************************************" << endl;
		cout << "     **                                                                                      **" << endl;
		cout << "     ******************************************************************************************" << endl;
		cout << "     Factorizaci�n." << endl;
		gotoxy(22, 6);
		cin >> a;
		gotoxy(51, 6);
		cin >> b;
		gotoxy(82, 6);
		cin >> c;
		gotoxy(24, 3);
		cout << "                                                                    ";
		/******************************************Discriminante*/
		dis = (pow(b, 2) - (4 * (a * c)));
		gotoxy(20, 11);
		cout << dis;

		/**************En esta seci�n se ponen en juego todas las posibles permutaciones de una factorizaci�n***********/
		/*****y se van tratando el an�lisis de manera l�gica para mostrar los objetivos deseados al usuario.************/

		/*******************************************Constantes**/
		if (a == 0 && b == 0 && c == 0)
		{
			gotoxy(24, 3);
			cout << "El valor es 0, no se puede procesar.";
		}
		if (a == 0 && b == 0 && c != 0)
		{
			gotoxy(24, 3);
			cout << "Los datos ingresados son de una constante, no pueden ser procesados.";
		}
		/******************************************Ecuaciones de primer grado*/
		if (a == 0 && b != 0 && c == 0)
		{
			gotoxy(25, 3);
			cout << "Tu ecuaci�n es de primer grado";
			gotoxy(45, 11);
			cout << b << "x=0";
			gotoxy(55, 11);
			cout << "x=0";
			gotoxy(24, 3);
			cout << "La ecuaci�n proporcionada no se puede factorizar";
		}
		if (a == 0 && b != 0 && c != 0)
		{
			gotoxy(34, 14);
			cout << "Tu ecuaci�n es de primer grado";
			if (c > 0)
			{
				gotoxy(45, 11);
				cout << b << "x+" << c << "=0";
			}
			if (c < 0)
			{
				gotoxy(45, 11);
				cout << b << "x-" << fabs(c) << "=0";
			}
			grd1 = ((-c) / b);
			gotoxy(75, 11);
			cout << "x=" << grd1;
		}

		/*******************************************ecuaciones de segundo grado*/
		if (dis < 0)
		{
			gotoxy(20, 14);
			cout << "Las ra�ces son imaginarias y no se puede procesar tu ecuaci�n.";
		}
		else
		{
			/******************************************Formula general(Chicharronera)*/
			if (a != 0)
			{
				x1 = (-b + sqrt(dis)) / (2 * a);
				gotoxy(45, 11);
				cout << "x1=" << x1;
				x2 = (-b - sqrt(dis)) / (2 * a);
				gotoxy(65, 11);
				cout << "x2=" << x2;
			}
			/*******************************************ecuaciones de segundo grado con a diferente de 0*/
			if (a != 0)
			{
				gotoxy(34, 14);
				cout << "Tu ecuaci�n es de segundo grado.";
			}
			if (a != 0 && b == 0 && c == 0)
			{
				gotoxy(45, 11);
				cout << "x=0";
				gotoxy(24, 3);
				cout << "La ecuaci�n proporcionada no se puede factorizar.";
			}
			/******************************************Ecuaciones de segundo grado con c=0*/
			if (a != 0 && b != 0 && c == 0)
			{
				factorizacion_show21(a, b); // Imprimir la fatorizaci�n (se envian como argumentos a y b).
			}

			/******************************************Ecuaciones de segundo grado con b=0*/
			if (a != 0 && b == 0 && c != 0)
			{
				/************Las siguientes operaciones tienen como objetivo determinar si las ra�ces cuadradas de a y c son********/
				/************son de caracter real o entero, esto para poder factorizar por diferencia de cuadrados.*****************/
				/*********************Agotando todas las permutaciones l�gicas disponibles para estos casos.************************/

				sqrt1 = sqrt(fabs(a));
				sqrt2 = sqrt(fabs(c));
				sqrt3 = fmod(sqrt1, 1);
				sqrt4 = fmod(sqrt2, 1);
				if (sqrt3 != 0 && sqrt4 != 0)
				{
					if (a > 0)
					{
						gotoxy(24, 3);
						cout << "(sqrt(" << abs(a) << ")x+sqrt(" << fabs(c) << ")(sqrt(" << fabs(a) << ")x-sqrt(" << fabs(c) << "))";
					}
					if (a < 0)
					{
						gotoxy(24, 3);
						cout << "-(sqrt(" << fabs(a) << ")x+sqrt(" << fabs(c) << ")(sqrt(" << fabs(a) << ")x-sqrt(" << fabs(c) << "))";
					}
				}
				if (sqrt3 != 0 && sqrt4 == 0)
				{
					if (a > 0)
					{
						gotoxy(24, 3);
						cout << "(sqrt(" << fabs(a) << ")x+" << sqrt2 << ")(sqrt(" << fabs(a) << ")x-" << sqrt2 << ")";
					}
					if (a < 0)
					{
						gotoxy(24, 3);
						cout << "-(sqrt(" << fabs(a) << ")x+" << sqrt2 << ")(sqrt(" << fabs(a) << ")x-" << sqrt2 << ")";
					}
				}
				if (sqrt3 == 0 && sqrt4 != 0)
				{
					if (a > 0)
					{
						gotoxy(24, 3);
						cout << "(" << sqrt1 << "x+sqrt(" << fabs(c) << "))(" << sqrt1 << "x-sqrt(" << fabs(c) << "))";
					}
					if (a < 0)
					{
						gotoxy(24, 3);
						cout << "-(" << sqrt1 << "x+sqrt(" << fabs(c) << "))(" << sqrt1 << "x-sqrt(" << fabs(c) << "))";
					}
				}
				if (sqrt3 == 0 && sqrt4 == 0)
				{
					if (a == 1 || a == -1)
					{
						factorizacion_show(x1, x2, a);
					}
					else
					{
						/*********Si a es diferente de uno o menos uno la factorizaci�n es m�s compleja y hay que determinar de la mejor manera*****/
						/***************************************************las ra�ces para realizarla.********************************************/
						x3 = fmod(x1, 1);
						x4 = fmod(x2, 1);
						if (x3 == 0 && x4 == 0)
						{
							factorizacion_show22(a, c);
						}
						if (x3 != 0 && x4 == 0)
						{
							p1 = fracciones(x1, 1);
							q1 = fracciones(x1, 2);
							factorizacion_show43(p1, q1, x2, a);
						}
						if (x3 == 0 && x4 != 0)
						{
							p2 = fracciones(x2, 1);
							q2 = fracciones(x2, 2);
							factorizacion_show44(x1, p2, q2, a);
						}
						if (x3 != 0 && x4 != 0)
						{
							p1 = fracciones(x1, 1);
							q1 = fracciones(x1, 2);
							p2 = fracciones(x2, 1);
							q2 = fracciones(x2, 2);
							factorizacion_show52(p1, q1, p2, q2, a);
						}
					}
				}
			}

			/******************************************Ecuaciones de segundo grado con Ax^2+Bx+C**************/
			/*********************El an�lisis l�gico de esta secci�n es el m�s complicado e interesante,******/
			/******************** realmente falta pulirlo para lograr cualquier tipo de factorizaci�n.********/
			/***********************pero los resultados son bastante satisfactorios ya que logra factorizar***/
			/******************************* cualquier ejercicio de la gu�a para entrar al poli.**************/

			if (a != 0 && b != 0 && c != 0)
			{
				x3 = fmod(x1, 1);
				x4 = fmod(x2, 1);
				if (a == 1)
				{
					factorizacion_show(x1, x2, a);
				}
				if (a != 1 && x3 == 0 && x4 == 0)
				{
					factorizacion_show51(x1, 1, (x2 * a), a, a);
				}
				if (a != 1 && x3 != 0 && x4 == 0)
				{
					p1 = fracciones(x1, 1);
					q1 = fracciones(x1, 2);
					factorizacion_show41(p1, q1, x2, a);
				}
				if (a != 1 && x3 == 0 && x4 != 0)
				{
					p2 = fracciones(x2, 1);
					q2 = fracciones(x2, 2);
					factorizacion_show42(x1, p2, q2, a);
				}
				if (a != 1 && x3 != 0 && x4 != 0)
				{
					p1 = fracciones(x1, 1);
					q1 = fracciones(x1, 2);
					p2 = fracciones(x2, 1);
					q2 = fracciones(x2, 2);
					if (fabs(p1) < 100000 && fabs(q1) < 100000 && fabs(p2) < 100000 && fabs(q2) < 100000)
					{
						factorizacion_show51(p1, q1, p2, q2, a);
					}
				}
			}
		}
		getch();
		repeticion(30, 3);
		system("cls");
		fflush(stdin);
	} while (d != 2);
}

void Factorizacion::factorizacion_show(double x, double y, double z)
{
	/********Variables a utilizar********/
	double p1, q1, p2, q2, res1, res2;
	res1 = fmod(x, 1);
	res2 = fmod(y, 1);
	if (res1 != 0)
	{
		p1 = fracciones(x, 1);
		q1 = fracciones(x, 2);
	}
	if (res2 != 0)
	{
		p2 = fracciones(y, 1);
		q2 = fracciones(y, 2);
	}
	if (x > 0 && y > 0 && x != y)
	{
		gotoxy(24, 3);
		if (z < 0)
			cout << "-";
		cout << "(x-" << abs(x) << ")(x-" << abs(y) << ")";
		gotoxy(24, 4);
		if (z < 0)
			cout << "-";
		if (res1 != 0 && res2 == 0)
			cout << "(x-" << fabs(p1) << "/" << fabs(q1) << ")(x-" << fabs(y) << ")";
		if (res1 == 0 && res2 != 0)
			cout << "(x-" << fabs(x) << ")(x-" << fabs(p2) << "/" << fabs(q2) << ")";
		if (res1 != 0 && res2 != 0)
			cout << "(x-" << fabs(p1) << "/" << fabs(q1) << ")(x-" << fabs(p2) << "/" << fabs(q2) << ")";
	}
	if (x > 0 && y < 0 && x != (-y))
	{
		gotoxy(24, 3);
		if (z < 0)
			cout << "-";
		cout << "(x-" << abs(x) << ")(x+" << abs(y) << ")";
		gotoxy(24, 4);
		if (z < 0)
			cout << "-";
		if (res1 != 0 && res2 == 0)
			cout << "(x-" << fabs(p1) << "/" << fabs(q1) << ")(x+" << fabs(y) << ")";
		if (res1 == 0 && res2 != 0)
			cout << "(x-" << fabs(x) << ")(x+" << fabs(p2) << "/" << fabs(q2) << ")";
		if (res1 != 0 && res2 != 0)
			cout << "(x-" << fabs(p1) << "/" << fabs(q1) << ")(x+" << fabs(p2) << "/" << fabs(q2) << ")";
	}
	if (x < 0 && y < 0 && x != y)
	{
		gotoxy(24, 3);
		if (z < 0)
			cout << "-";
		cout << "(x+" << abs(x) << ")(x+" << abs(y) << ")";
		gotoxy(24, 4);
		if (z < 0)
			cout << "-";
		if (res1 != 0 && res2 == 0)
			cout << "(x+" << fabs(p1) << "/" << fabs(q1) << ")(x+" << fabs(y) << ")";
		if (res1 == 0 && res2 != 0)
			cout << "(x+" << fabs(x) << ")(x+" << fabs(p2) << "/" << fabs(q2) << ")";
		if (res1 != 0 && res2 != 0)
			cout << "(x+" << fabs(p1) << "/" << fabs(q1) << ")(x+" << fabs(p2) << "/" << fabs(q2) << ")";
	}
	if (x < 0 && y > 0)
	{
		gotoxy(24, 3);
		if (z < 0)
			cout << "-";
		cout << "(x+" << fabs(x) << ")(x-" << fabs(y) << ")";
		gotoxy(24, 4);
		if (z < 0)
			cout << "-";
		if (res1 != 0 && res2 == 0)
			cout << "(x+" << fabs(p1) << "/" << fabs(q1) << ")(x-" << fabs(y) << ")";
		if (res1 == 0 && res2 != 0)
			cout << "(x+" << fabs(x) << ")(x-" << fabs(p2) << "/" << fabs(q2) << ")";
		if (res1 != 0 && res2 != 0)
			cout << "(x+" << fabs(p1) << "/" << fabs(q1) << ")(x-" << fabs(p2) << "/" << fabs(q2) << ")";
	}
	if (x < 0 && y == 0)
	{
		gotoxy(24, 3);
		if (z < 0)
			cout << "-";
		cout << "x(x+" << fabs(x) << ")";
		gotoxy(24, 4);
		if (z < 0)
			cout << "-";
		if (res1 != 0)
			cout << "x(x+" << fabs(p1) << "/" << fabs(q1) << ")";
	}
	if (x > 0 && y == 0)
	{
		gotoxy(24, 3);
		if (z < 0)
			cout << "-";
		cout << "x(x-" << fabs(x) << ")";
		gotoxy(24, 4);
		if (z < 0)
			cout << "-";
		if (res1 != 0)
			cout << "x(x-" << fabs(p1) << "/" << fabs(q1) << ")";
	}
	if (x == 0 && y > 0)
	{
		gotoxy(24, 3);
		if (z < 0)
			cout << "-";
		cout << "x(x-" << fabs(y) << ")";
		gotoxy(24, 4);
		if (z < 0)
			cout << "-";
		if (res2 != 0)
			cout << "x(x-" << fabs(p2) << "/" << fabs(q2) << ")";
	}
	if (x == 0 && y < 0)
	{
		gotoxy(24, 3);
		if (z < 0)
			cout << "-";
		cout << "x(x+" << fabs(y) << ")";
		gotoxy(24, 4);
		if (z < 0)
			cout << "-";
		if (res2 != 0)
			cout << "x(x+" << fabs(p2) << "/" << fabs(q2) << ")";
	}
	if (x == 0 && y == 0)
	{
		gotoxy(24, 3);
		cout << z << "x^2 no se puede factorizar m�s.";
	}
	if (x < 0 && y < 0 && x == y)
	{
		gotoxy(24, 3);
		if (z < 0)
			cout << "-";
		cout << "(x+" << fabs(x) << ")^2";
		gotoxy(24, 4);
		if (z < 0)
			cout << "-";
		if (res1 != 0)
			cout << "(x+" << fabs(p1) << "/" << fabs(q1) << ")^2";
	}
	if (x > 0 && y > 0 && x == y)
	{
		gotoxy(24, 3);
		if (z < 0)
			cout << "-";
		cout << "(x-" << fabs(x) << ")^2";
		gotoxy(24, 4);
		if (z < 0)
			cout << "-";
		if (res1 != 0)
			cout << "(x-" << fabs(p1) << "/" << fabs(q1) << ")^2";
	}
	if (x > 0 && y < 0 && x == (-y))
	{
		gotoxy(24, 3);
		if (z < 0)
			cout << "-";
		cout << "(x-" << fabs(x) << ")(x+" << fabs(y) << ")";
		gotoxy(24, 4);
		if (z < 0)
			cout << "-";
		if (res1 != 0)
			cout << "(x-" << fabs(p1) << "/" << fabs(q1) << ")(x+" << fabs(p2) << "/" << fabs(q2) << ")";
	}
}

void Factorizacion::factorizacion_show21(double x, double y)
{
	/*******Variables a utilizar********/
	double res;
	gotoxy(24, 3);
	if (fabs(x) > fabs(y))
	{
		res = (fmod(x, y));
		if (res != 0 && y > 0)
			cout << "x(" << x << "x+" << y << ")";
		if (res != 0 && y < 0)
			cout << "x(" << x << "x-" << fabs(y) << ")";
		if (res == 0 && y > 0)
			cout << "" << y << "x(" << (x / y) << "x+1)";
		if (res == 0 && y < 0)
			cout << "" << fabs(y) << "x(" << (x / fabs(y)) << "x-1)";
	}
	if (fabs(x) < fabs(y))
	{
		res = (fmod(y, x));
		if (res != 0 && x > 0 && y > 0)
			cout << "x(" << x << "x+" << y << ")";
		if (res != 0 && x > 0 && y < 0)
			cout << "x(" << x << "x-" << fabs(y) << ")";
		if (res != 0 && x < 0 && y > 0)
			cout << "x(" << x << "x+" << fabs(y) << ")";
		if (res != 0 && x < 0 && y < 0)
			cout << "x(" << x << "x-" << fabs(y) << ")";
		if (res == 0 && x > 0 && y > 0)
			cout << x << "x(x+" << fabs(y / x) << ")";
		if (res == 0 && x > 0 && y < 0 && x != (-y))
			cout << x << "x(x-" << fabs(y / x) << ")";
		if (res == 0 && x < 0 && y > 0 && x != (-y))
			cout << x << "x(x-" << fabs(y / x) << ")";
		if (res == 0 && x < 0 && y < 0 && x != (-y))
			cout << "" << x << "x(x+" << fabs(y / x) << ")";
	}
	if (x == y && x > 0 && y > 0)
		cout << x << "x(x+1)";
	if (x == y && x < 0 && y < 0)
		cout << x << "x(x+1)";
	if (x == (-y) && x > 0)
		cout << x << "x(x-1)";
	if (x == (-y) && x < 0)
		cout << x << "x(x-1)";
}

void Factorizacion::factorizacion_show41(double x, double y, double z, double w)
{
	gotoxy(24, 3);
	if (w < 0)
		cout << "-";
	if ((x / y) > 0 && z > 0)
		cout << "(" << fabs(y) << "x-" << fabs(x) << ")(x-" << fabs(z) << ")";
	if ((x / y) > 0 && z == 0)
		cout << "(" << fabs(y) << "x-" << fabs(x) << ")x"; //////////////////////////////////////
	if ((x / y) > 0 && z < 0)
		cout << "(" << fabs(y) << "x-" << fabs(x) << ")(x+" << fabs(z) << ")";
	if ((x / y) < 0 && z > 0)
		cout << "(" << fabs(y) << "x+" << fabs(x) << ")(x-" << fabs(z) << ")";
	if ((x / y) < 0 && z == 0)
		cout << "(" << fabs(y) << "x+" << fabs(x) << ")x"; /////////////////////////////////
	if ((x / y) < 0 && z < 0)
		cout << "(" << fabs(y) << "x+" << fabs(x) << ")(x+" << fabs(z) << ")";
}

void Factorizacion::factorizacion_show42(double x, double y, double z, double w)
{
	gotoxy(24, 3);
	if (x > 0 && (y / z) > 0)
	{
		if (w < 0)
			cout << "-";
		cout << "(x-" << fabs(x) << ")(" << fabs(z) << "x-" << fabs(y) << ")";
	}
	if (x == 0 && (y / z) > 0)
	{
		if (w < 0)
			cout << "-";
		cout << "x(" << fabs(z) << "x-" << fabs(y) << ")";
	}
	if (x < 0 && (y / z) > 0)
	{
		if (w < 0)
			cout << "-";
		cout << "(x+" << fabs(x) << ")(" << fabs(z) << "x-" << fabs(y) << ")";
	}
	if (x > 0 && (y / z) < 0)
	{
		if (w < 0)
			cout << "-";
		cout << "(x-" << fabs(x) << ")(" << fabs(z) << "x+" << fabs(y) << ")";
	}
	if (x == 0 && (y / z) < 0)
	{
		if (w < 0)
			cout << "-";
		cout << "x(" << fabs(z) << "x+" << fabs(y) << ")";
	}
	if (x < 0 && (y / z) < 0)
	{
		if (w < 0)
			cout << "-";
		cout << "(x+" << fabs(x) << ")(" << fabs(z) << "x+" << fabs(y) << ")";
	}
}

void Factorizacion::factorizacion_show51(double x, double y, double z, double w, double o)
{
	gotoxy(24, 3);
	if ((x / y) > 0 && (z / w) > 0)
	{
		if (o < 0)
			cout << "-";
		cout << "(" << fabs(y) << "x-" << fabs(x) << ")(" << fabs(w) << "x-" << fabs(z) << ")";
	}
	if ((x / y) > 0 && (z / w) < 0)
	{
		if (o < 0)
			cout << "-";
		cout << "(" << fabs(y) << "x-" << fabs(x) << ")(" << fabs(w) << "x+" << fabs(z) << ")";
	}
	if ((x / y) < 0 && (z / w) > 0)
	{
		if (o < 0)
			cout << "-";
		cout << "(" << fabs(y) << "x+" << fabs(x) << ")(" << fabs(w) << "x-" << fabs(z) << ")";
	}
	if ((x / y) < 0 && (z / w) < 0)
	{
		if (o < 0)
			cout << "-";
		cout << "(" << fabs(y) << "x+" << fabs(x) << ")(" << fabs(w) << "x+" << fabs(z) << ")";
	}
}

void Factorizacion::factorizacion_show43(double x, double y, double z, double w)
{
	gotoxy(24, 3);
	if (w < 0)
		cout << "-";
	if ((x / y) > 0 && z > 0)
		cout << "(" << fabs(y) << "x-" << fabs(x) << ")(x-" << fabs(z) << ")";
	if ((x / y) > 0 && z < 0)
		cout << "(" << fabs(y) << "x-" << fabs(x) << ")(x+" << fabs(z) << ")";
	if ((x / y) < 0 && z < 0)
		cout << "(" << fabs(y) << "x+" << fabs(x) << ")(x+" << fabs(z) << ")";
	if ((x / y) < 0 && z > 0)
		cout << "(" << fabs(y) << "x+" << fabs(x) << ")(x-" << fabs(z) << ")";
	if ((x / y) < 0 && z == 0)
		cout << "x(" << fabs(y) << "x+" << fabs(x) << ")";
	if ((x / y) > 0 && z == 0)
		cout << "x(" << fabs(y) << "x-" << fabs(x) << ")";
}

void Factorizacion::factorizacion_show44(double x, double y, double z, double w)
{
	gotoxy(24, 3);
	if (w < 0)
		cout << "-";
	if (x > 0 && (y / z) > 0)
		cout << "(x-" << fabs(x) << ")(" << fabs(z) << "x-" << fabs(y) << ")";
	if (x < 0 && (y / z) > 0)
		cout << "(x+" << fabs(x) << ")(" << fabs(z) << "x-" << fabs(y) << ")";
	if (x < 0 && (y / z) < 0)
		cout << "(x+" << fabs(x) << ")(" << fabs(z) << "x+" << fabs(y) << ")";
	if (x > 0 && (y / z) < 0)
		cout << "(x-" << fabs(x) << ")(" << fabs(z) << "x+" << fabs(y) << ")";
	if (x == 0 && (y / z) < 0)
		cout << "x(" << fabs(z) << "x+" << fabs(y) << ")";
	if (x == 0 && (y / z) > 0)
		cout << "x(" << fabs(z) << "x-" << fabs(y) << ")";
}

void Factorizacion::factorizacion_show52(double x, double y, double z, double w, double o)
{
	gotoxy(24, 3);
	if (o < 0)
		cout << "-";
	if ((x / y) > 0 && (z / w) > 0 && (x / y) != (z / w))
		cout << "(" << fabs(y) << "x-" << fabs(x) << ")(" << fabs(w) << "x-" << fabs(z) << ")";
	if ((x / y) > 0 && (z / w) < 0 && (x / y) != (-(z / w)))
		cout << "(" << fabs(y) << "x-" << fabs(x) << ")(" << fabs(w) << "x+" << fabs(z) << ")";
	if ((x / y) < 0 && (z / w) < 0 && (x / y) != (z / w))
		cout << "(" << fabs(y) << "x+" << fabs(x) << ")(" << fabs(w) << "x+" << fabs(z) << ")";
	if ((x / y) < 0 && (z / w) > 0)
		cout << "(" << fabs(y) << "x+" << fabs(x) << ")(" << fabs(w) << "x-" << fabs(z) << ")";
	if ((x / y) < 0 && (z / w) < 0 && (x / y) == (z / w))
		cout << "(" << fabs(y) << "x+" << fabs(x) << ")^2";
	if ((x / y) > 0 && (z / w) > 0 && (x / y) == (z / w))
		cout << "(" << fabs(y) << "x-" << fabs(x) << ")^2";
	if ((x / y) > 0 && (z / w) < 0 && (x / y) == (-(z / w)))
		cout << "(" << fabs(y) << "x-" << fabs(x) << ")(" << fabs(w) << "x+" << fabs(z) << ")";
}

void Factorizacion::factorizacion_show22(double x, double y)
{
	/*******Variable a usar*******/
	double res;
	gotoxy(24, 3);
	if (fabs(x) > fabs(y))
	{
		res = (fmod(x, y));
		if (res != 0)
			cout << "No se puede factorizar m�s";
		if (res == 0 && y > 0)
			cout << (x / y) << "(" << fabs(x / y) << "x^2+1)";
		if (res == 0 && y < 0)
			cout << "" << (x / y) << "(" << fabs(x / y) << "x^2-1)";
	}
	if (fabs(x) < fabs(y))
	{
		res = (fmod(y, x));
		if (res != 0 && x > 0 && y > 0)
			cout << "No se puede factorizar m�s";
		if (res == 0 && x > 0 && y > 0)
			cout << x << "(x^2+" << fabs(y / x) << ")";
		if (res == 0 && x > 0 && y < 0 && x != (-y))
			cout << x << "(x^2-" << fabs(y / x) << ")";
		if (res == 0 && x < 0 && y > 0 && x != (-y))
			cout << x << "(x^2-" << fabs(y / x) << ")";
		if (res == 0 && x < 0 && y < 0 && x != (-y))
			cout << x << "(x^2+" << fabs(y / x) << ")";
	}
	if (x == y && x > 0 && y > 0)
		cout << x << "(x^2+1)";
	if (x == y && x < 0 && y < 0)
	{
		gotoxy(35, 4);
		cout << x << "(x^2+1)";
	}
	if (x == (-y) && x > 0)
		cout << x << "(x^2-1)";
	if (x == (-y) && x < 0)
	{
		gotoxy(35, 4);
		cout << x << "(x^2-1)";
	}
}

class Calculadora_complejos : public Calculadoras
{
protected:
	int i1;
	double complex[6], com1, com2, com3, com4, p6, q6, p7, q7, exp1, exp2, real1, real2, real3, real4, real5, real6, real7, real8, com, real, imaginario, p4, q4, p5, q5, q, p8, q8, p9, q9, p2, q2, p3, q3;
	char comp, parent[5], signo[2], i[2];

public:
	Calculadora_complejos(double x1 = 0, double x2 = 0, double x3 = 0, double x4 = 0, double x5 = 0, double x6 = 0, double x7 = 0, double x8 = 0, double x9 = 0, double x10 = 0, double x11 = 0, double x12 = 0, double x13 = 0, double x14 = 0, double x15 = 0, double x16 = 0, double x17 = 0, double x18 = 0, double x19 = 0,
						  double x20 = 0, double x21 = 0, double x22 = 0, double x23 = 0, double x24 = 0, double x25 = 0, double x26 = 0, double x27 = 0, double x28 = 0, double x29 = 0, double x30 = 0, double x31 = 0, double x32 = 0, double x33 = 0, double x34 = 0)
	{
		com1 = x1;
		com2 = x2;
		com3 = x3;
		com4 = x4;
		p6 = x5;
		q6 = x6;
		p7 = x7;
		q7 = x8;
		exp1 = x9;
		exp2 = x10;
		real1 = x11;
		real2 = x12;
		real3 = x13;
		real4 = x14;
		real5 = x15;
		real6 = x16;
		real7 = x17;
		real8 = x18;
		com = x19;
		real = x20;
		imaginario = x21;
		p4 = x22;
		q4 = x23;
		p5 = x24;
		q5 = x25;
		q = x26;
		p8 = x27;
		q8 = x28;
		p9 = x29;
		q9 = x30;
		p2 = x31;
		q2 = x32;
		p3 = x33;
		q3 = x34;
	}
	~Calculadora_complejos() {}
	void calculadora();
	void sumacomplex(double, double, double, double);
	void restacomplex(double, double, double, double);
	void multicomplex(double, double, double, double);
	void divicomplex(double, double, double, double);
	double multicomplejos1(double, double, double, double);
	double multicomplejos2(double, double, double, double);
	void complexshow0(double, double);
	void complexshow1(double, double, double);
	void complexshow2(double, double, double);
	void complexshow3(double, double, double, double);
};

void Calculadora_complejos::calculadora()
{
	/***********Variables a utilizar.******/
	do
	{
		cout << "\n\n     ******************************************************************************************" << endl;
		cout << "     ** Operaci�n:                                                                           **" << endl;
		cout << "     ******************************************************************************************" << endl;
		cout << "     ** Resultado:                                                                           **" << endl;
		cout << "     **                                                                                      **" << endl;
		cout << "     ******************************************************************************************" << endl;
		cout << "     ** Exponencial:                          ** Polar:                                      **" << endl;
		cout << "     **                                       **                                             **" << endl;
		cout << "     **                                       **                                             **" << endl;
		cout << "     ******************************************************************************************" << endl;
		cout << "     **                   **                 **                         **                   **" << endl;
		cout << "     **  1.-Suma(+).      **  2.-Resta(-).   **  3.-Multiplicaci�n(*).  ** 4.-Divisi�n(/).   **" << endl;
		cout << "     **                   **                 **                         **                   **" << endl;
		cout << "     ******************************************************************************************" << endl;
		cout << "     Calculadora de complejos" << endl;
		fflush(stdin); // Limpiar buffer.
		/**********Se solicitan varias datos, las realmente importantes son aquellas que provienen del arreglo unidimensional complex[i] y signo[i].****/
		/**********El motivo de esto es que se busca tener una interfaz m�s visual y sensilla de entender, en la terminal las operaciones se ver�n de***/
		/**********De la siguiente forma: (x+iy)+(x1+iy1), (x+iy)-(x1+iy1), (x+iy)*(x1+iy1) y (x+iy)/(x1+iy1)**********************************/

		gotoxy(19, 3);
		cin >> parent[0];
		cin >> complex[0];
		cin >> signo[0];
		cin >> i[0];
		cin >> complex[1];
		cin >> parent[1];
		cin >> comp;
		cin >> parent[2];
		cin >> complex[2];
		cin >> signo[1];
		cin >> i[1];
		cin >> complex[3];
		cin >> parent[3];
		/******************************************Acoplar los signos*/
		if (signo[0] == '-')
			complex[4] = (-1 * complex[1]);
		if (signo[0] == '+')
			complex[4] = (complex[1]);
		if (signo[1] == '-')
			complex[5] = (-1 * complex[3]);
		if (signo[1] == '+')
			complex[5] = (complex[3]);
		/******************************************Operaciones*/
		switch (comp)
		{
		case '+':
			sumacomplex(complex[0], complex[4], complex[2], complex[5]);
			break;
		case '-':
			restacomplex(complex[0], complex[4], complex[2], complex[5]);
			break;
		case '*':
			multicomplex(complex[0], complex[4], complex[2], complex[5]);
			break;
		case '/':
			divicomplex(complex[0], complex[4], complex[2], complex[5]);
			break;
		}
		getch();
		fflush(stdin);
		repeticion(30, 3);
		system("cls");
	} while (d != 2);
}

void Calculadora_complejos::sumacomplex(double x, double y, double z, double w)
{
	/******Variables a utilizar****/
	com1 = x + z;
	com2 = y + w;
	com3 = fmod(com1, 1);
	com4 = fmod(com2, 1);
	complexshow0(com1, com2);
	if (com3 != 0)
	{
		p6 = fracciones(com1, 1);
		q6 = fracciones(com1, 2);
	}
	if (com4 != 0)
	{
		p7 = fracciones(com2, 1);
		q7 = fracciones(com2, 2);
	}
	if (com3 == 0 && com4 != 0)
		complexshow1(com1, p7, q7);
	if (com3 != 0 && com4 == 0)
		complexshow2(p6, q6, com2);
	if (com3 != 0 && com4 != 0)
		complexshow3(p6, q6, p7, q7);

	exp1 = (atan((com2 / com1)) * (180) / pi);
	exp2 = sqrt(pow(com1, 2) + pow(com2, 2));

	if (com1 < 0 && com2 > 0)
		exp1 += 180;
	if (com1 < 0 && com2 < 0)
		exp1 -= 180;
	gotoxy(23, 9);
	cout << "" << exp2 << "e^(i(" << exp1 << "))";
	gotoxy(56, 9);
	cout << "" << exp2 << "(cos(" << exp1 << ")+isen(" << exp1 << "))";
}

void Calculadora_complejos::restacomplex(double x, double y, double z, double w)
{
	/******Variables a utilizar****/
	com1 = x - z;
	com2 = y - w;
	com3 = fmod(com1, 1);
	com4 = fmod(com2, 1);
	complexshow0(com1, com2);
	if (com3 != 0)
	{
		p8 = fracciones(com1, 1);
		q8 = fracciones(com1, 2);
	}
	if (com4 != 0)
	{
		p9 = fracciones(com2, 1);
		q9 = fracciones(com2, 2);
	}
	if (com3 == 0 && com4 != 0)
		complexshow1(com1, p9, q9);
	if (com3 != 0 && com4 == 0)
		complexshow2(p8, q8, com2);
	if (com3 != 0 && com4 != 0)
		complexshow3(p8, q8, p9, q9);

	exp1 = (atan((com2 / com1)) * (180) / pi);
	exp2 = sqrt(pow(com1, 2) + pow(com2, 2));
	if (com1 < 0 && com2 > 0)
		exp1 += 180;
	if (com1 < 0 && com2 < 0)
		exp1 -= 180;
	gotoxy(23, 9);
	cout << "" << exp2 << "e^(i(" << exp1 << "))";
	gotoxy(56, 9);
	cout << "" << exp2 << "(cos(" << exp1 << ")+isen(" << exp1 << "))";
}

void Calculadora_complejos::multicomplex(double x, double y, double z, double w)
{
	/******Variables a utilizar****/

	com1 = multicomplejos1(x, y, z, w);
	com2 = multicomplejos2(x, y, z, w);
	com3 = (fmod(com1, 1));
	com4 = (fmod(com2, 1));
	complexshow0(com1, com2);
	if (com3 != 0)
	{
		p2 = fracciones(com1, 1);
		q2 = fracciones(com1, 2);
	}
	if (com4 != 0)
	{
		p3 = fracciones(com2, 1);
		q3 = fracciones(com2, 2);
	}
	if (com3 == 0 && com4 != 0)
		complexshow1(com1, p3, q3);
	if (com3 != 0 && com4 == 0)
		complexshow2(p2, q2, com2);
	if (com3 != 0 && com4 != 0)
		complexshow3(p2, q2, p3, q3);

	exp1 = (atan((com2 / com1)) * (180) / pi);
	exp2 = sqrt(pow(com1, 2) + pow(com2, 2));

	if (com1 < 0 && com2 > 0)
		exp1 += 180;
	if (com1 < 0 && com2 < 0)
		exp1 -= 180;
	gotoxy(23, 9);
	cout << "" << exp2 << "e^(i(" << exp1 << "))";
	gotoxy(56, 9);
	cout << "" << exp2 << "(cos(" << exp1 << ")+isen(" << exp1 << "))";
}

double Calculadora_complejos::multicomplejos1(double x, double y, double z, double w)
{
	/******Variables a utilizar****/
	double complejo1;
	complejo1 = ((x * z) + (-1 * (y * w)));
	return (complejo1);
}

double Calculadora_complejos::multicomplejos2(double x, double y, double z, double w)
{
	/******Variables a utilizar****/
	double complejo2;
	complejo2 = ((x * w) + (y * z));
	return (complejo2);
}

void Calculadora_complejos::divicomplex(double x, double y, double z, double w)
{
	/******Variables a utilizar****/
	if (z == 0 && w == 0)
	{
		gotoxy(26, 7);
		cout << "***************************************************************";
		gotoxy(26, 8);
		cout << "**                         Error:                            **";
		gotoxy(26, 9);
		cout << "** Lo siento pero el denominador debe ser diferente de cero. **";
		gotoxy(26, 10);
		cout << "**                                                           **";
		gotoxy(26, 11);
		cout << "***************************************************************";
		getch();
	}
	else
	{
		real1 = multicomplejos1(x, y, z, -w);
		com = multicomplejos2(x, y, z, -w);
		/****Nota: recordemos que al multiplicar un n�mero complejo por su conjugado siempre se obtiene un n�mero real*/

		real2 = multicomplejos1(z, w, z, -w);
		real3 = multicomplejos2(z, w, z, -w);
		real4 = (real2 + real3);
		real = (real1 / real4);
		imaginario = (com / real4);
		real5 = fmod(real, 1);
		real6 = fmod(imaginario, 1);
		complexshow0(real, imaginario);
		if (real5 != 0)
		{
			p4 = fracciones(real, 1);
			q4 = fracciones(real, 2);
		}
		if (real6 != 0)
		{
			p5 = fracciones(imaginario, 1);
			q5 = fracciones(imaginario, 2);
		}
		if (real5 == 0 && real6 != 0)
			complexshow1(real, p5, q5);
		if (real5 != 0 && real6 == 0)
			complexshow2(p4, q4, imaginario);
		if (real5 != 0 && real6 != 0)
			complexshow3(p4, q4, p5, q5);
		exp1 = (atan(imaginario / real) * (180) / pi);
		exp2 = sqrt(pow(real, 2) + pow(imaginario, 2));
		if (real < 0 && imaginario > 0)
			exp1 += 180;
		if (real < 0 && imaginario < 0)
			exp1 -= 180;
		gotoxy(23, 9);
		cout << "" << exp2 << "e^(i(" << exp1 << "))";
		gotoxy(56, 9);
		cout << "" << exp2 << "(cos(" << exp1 << ")+isen(" << exp1 << "))";
	}
}

void Calculadora_complejos::complexshow0(double x, double y)
{
	gotoxy(19, 5);
	if (x > 0 && y > 0)
		cout << x << "+i" << y;
	if (x > 0 && y < 0)
		cout << x << "-i" << fabs(y);
	if (x < 0 && y < 0)
		cout << x << "-i" << fabs(x);
	if (x < 0 && y > 0)
		cout << x << "+i" << y;
	if (x == 0 && y == 0)
		cout << "0";
	if (x < 0 && y == 0)
		cout << x;
	if (x > 0 && y == 0)
		cout << x;
	if (x == 0 && y > 0)
		cout << "i" << y;
	if (x == 0 && y < 0)
		cout << "-i" << fabs(y);
}

void Calculadora_complejos::complexshow1(double x, double y, double z)
{
	gotoxy(56, 5);
	if (x > 0 && (y / z) > 0)
		cout << fabs(x) << "+i(" << fabs(y) << "/" << fabs(z) << ")";
	if (x > 0 && (y / z) < 0)
		cout << x << "-i(" << fabs(y) << "/" << fabs(z) << ")";
	if (x < 0 && (y / z) < 0)
		cout << x << "-i(" << fabs(y) << "/" << fabs(z) << ")";
	if (x < 0 && (y / z) > 0)
		cout << x << "+i(" << fabs(y) << "/" << fabs(z) << ")";
	if (x == 0 && (y / z) == 0)
		cout << "0";
	if (x < 0 && (y / z) == 0)
		cout << x;
	if (x > 0 && (y / z) == 0)
		cout << x;
	if (x == 0 && (y / z) > 0)
		cout << "i(" << fabs(y) << "/" << fabs(z) << ")";
	if (x == 0 && (y / z) < 0)
		cout << "-i(" << fabs(y) << "/" << fabs(z) << ")";
}

void Calculadora_complejos::complexshow2(double x, double y, double z)
{
	gotoxy(56, 5);
	if ((x / y) > 0 && z > 0)
		cout << "(" << fabs(x) << "/" << fabs(y) << ")+i" << fabs(z);
	if ((x / y) > 0 && z < 0)
		cout << "(" << fabs(x) << "/" << fabs(y) << ")-i" << fabs(z);
	if ((x / y) < 0 && z < 0)
		cout << "-(" << fabs(x) << "/" << fabs(y) << ")-i" << fabs(z);
	if ((x / y) < 0 && z > 0)
		cout << "-(" << fabs(x) << "/" << fabs(y) << ")+i" << fabs(z);
	if ((x / y) == 0 && z == 0)
		cout << "0";
	if ((x / y) < 0 && z == 0)
		cout << "-(" << fabs(x) << "/" << fabs(y) << ")";
	if ((x / y) > 0 && z == 0)
		cout << fabs(x) << "/" << fabs(y);
	if ((x / y) == 0 && z > 0)
		cout << "i" << fabs(z);
	if ((x / y) == 0 && z < 0)
		cout << "-i" << fabs(z);
}

void Calculadora_complejos::complexshow3(double x, double y, double z, double w)
{
	gotoxy(56, 5);
	if ((x / y) > 0 && (z / w) > 0)
		cout << "(" << fabs(x) << "/" << fabs(y) << ")+i(" << fabs(z) << "/" << fabs(w) << ")";
	if ((x / y) > 0 && (z / w) < 0)
		cout << "(" << fabs(x) << "/" << fabs(y) << ")-i(" << fabs(z) << "/" << fabs(w) << ")";
	if ((x / y) < 0 && (z / w) < 0)
		cout << "-(" << fabs(x) << "/" << fabs(y) << ")-i(" << fabs(z) << "/" << fabs(w) << ")";
	if ((x / y) < 0 && (z / w) > 0)
		cout << "-(" << fabs(x) << "/" << fabs(y) << ")+i(" << fabs(z) << "/" << fabs(w) << ")";
	if ((x / y) == 0 && (z / w) == 0)
		cout << "0";
	if ((x / y) < 0 && (z / w) == 0)
		cout << "-(" << fabs(x) << "/" << fabs(y) << ")";
	if ((x / y) > 0 && (z / w) == 0)
		cout << fabs(x) << "/" << fabs(y);
	if ((x / y) == 0 && (z / w) > 0)
		cout << "i(" << fabs(z) << "/" << fabs(w) << ")";
	if ((x / y) == 0 && (z / w) < 0)
		cout << "-i" << fabs(z) << "/" << fabs(w) << ")";
}

class Traductores : public Calculadoras
{
protected:
	char trad[8], dec[504], a, *dec1;
	int bin[8], pal[9], j, i, m, l, lar, k, letra, h, n, text, y, r, bit, acum;

public:
	void traductorbintext();
	void textobin();
	void bintotext();
};

void Traductores::traductorbintext()
{
	do
	{
		gotoxy(26, 7);
		cout << "**************************************************************";
		gotoxy(26, 8);
		cout << "**                                                          **";
		gotoxy(26, 9);
		cout << "**                    Tipo de traducci�n                    **";
		gotoxy(26, 10);
		cout << "**                    Texto/Binario/Salir                   **";
		gotoxy(26, 11);
		cout << "**************************************************************";
		gotoxy(26, 12);
		cout << "**                    **              **                    **";
		gotoxy(26, 13);
		cout << "**************************************************************";
		gotoxy(54, 12);
		cin >> trad;
		trad[7] = tolower(trad[0]);
		system("cls");
		switch (trad[7])
		{
		case 't':
			textobin();
			break;
		case 'b':
			bintotext();
			break;
		case 's':
			break;
		default:
			gotoxy(26, 14);
			cout << "**       La opci�n seleccionada no est� disponible.         **";
			gotoxy(26, 15);
			cout << "**************************************************************";
		}
	} while (trad[7] != 's');
}

void Traductores::textobin()
{
	n = 0;
	fflush(stdin);
	cout << "\n\n     ******************************************************************************************" << endl;
	cout << "     **   Ingresa el texto que desees convertir en binario (m�ximo 504 caracteres):          **" << endl;
	cout << "     ******************************************************************************************" << endl;
	cout << "         >>";
	gotoxy(0, 10);
	cout << "     ***********************";
	gotoxy(0, 11);
	cout << "     ** Traducci�n:       **";
	gotoxy(0, 12);
	cout << "     ***********************";
	gotoxy(0, 13);
	cout << "         >>";
	gotoxy(11, 5);
	gets(dec);
	lar = strlen(dec);
	if (lar > 504)
	{
		gotoxy(11, 6);
		cout << "Has introducido demasiados caracteres.";
	}
	else
	{
		FILE *fichero;
		fichero = fopen("Binarios.txt", "wt");
		for (i = 0; i <= (lar - 1); i++)
		{
			k = i % 8;
			if (k == 0)
			{
				gotoxy(11, (13 + n));
				n++;
			}
			/*******Nota: Durante el desarrollo del m�dulo descubr� que Dev-c++*************************/
			/*******almacena los caracteres del c�digo ASCII extendido como enteros negativos***********/
			/*******Por lo que es necesario sumarles a estos caracteres 256 para que se*****************/
			/*******obtenga el n�mero correcto del c�digo que le pertenece.*****************************/
			if (dec[i] < 0)
				dec[i] += 256;
			pal[0] = dec[i] / 2;
			bin[0] = dec[i] % 2;
			for (j = 0; j < 8; j++)
			{
				pal[j + 1] = pal[j] / 2;
				bin[j + 1] = pal[j] % 2;
			}
			for (l = 7; l >= 0; l--)
			{
				cout << abs(bin[l]);
				if (bin[l] == 1)
					fputc('1', fichero);
				if (bin[l] == 0)
					fputc('0', fichero);
			}
			cout << " ";
			fputc(' ', fichero);
		}
		fclose(fichero);
	}
	getch();
	system("cls");
	fflush(stdin);
}

void Traductores::bintotext()
{
	dec1 = new char[4536];
	y = 8;
	r = 0;
	acum = 0;
	n = 0;
	cout << "\n\n     ******************************************************************************************" << endl;
	cout << "     **   Ingresa c�digo binario que desees convertir a texto (m�ximo 504 caracteres):       **" << endl;
	cout << "     ******************************************************************************************" << endl;
	cout << "         >>";
	gotoxy(0, 25);
	cout << "     ***********************";
	gotoxy(0, 26);
	cout << "     ** Traducci�n:       **";
	gotoxy(0, 27);
	cout << "     ***********************";
	gotoxy(0, 28);
	cout << "         >>";
	fflush(stdin);
	gotoxy(11, 5);
	gets(dec1);
	lar = strlen(dec1);
	k = lar % 9;
	if (k == 0 || k == 8)
	{
		h = lar / 9;
		for (i = 0; i <= h; i++)
		{
			m = i % 80;
			if (m == 0)
			{
				gotoxy(11, (28 + n));
				n++;
			}
			acum = 0;
			l = 0;
			bit = 128;
			for (j = r; j < y; j++)
			{
				if (dec1[j] == '1')
					text = (1 * bit);
				if (dec1[j] == '0')
					text = (0 * bit);
				acum += text;
				bit /= 2;
			}
			a = acum;
			cout << a;
			fflush(stdin);
			r += 9;
			y += 9;
		}
	}
	else
	{
		gotoxy(11, 28);
		printf("El c�digo binario se encuentra incompleto.", 162);
	}
	getch();
	system("cls");
	fflush(stdin);
	delete[] dec1;
}

char letra[14][95] = {{"******************************************************************************************"}, {"**  Calculadora.                                                                        **"}, {"******************************************************************************************"}, {"**  �Qu� operaci�n deseas realizar?                                                     **"}, {"******************************************************************************************"}, {"**  00.- Cambiar modo (calculadora/pedag�gico).                                         **"}, {"**  01.- Calculadora.                                                                   **"}, {"**  02.- Ecuaciones de primer y segundo grado.                                          **"}, {"**  03.- Calculadora de complejos.                                                      **"}, {"**  04.- Traductor de binarios/texto.                                                   **"}, {"**  05.- Salir.                                                                         **"}, {"******************************************************************************************"}, {"**  Presiona el n�mero de la operacion deseada:                                         **"}, {"******************************************************************************************"}};
char craneo[9][24] = {{" ********************* "}, {" **     *******     ** "}, {" **     *******     ** "}, {" ********************* "}, {" ********** ********** "}, {" *********   ********* "}, {" ********************* "}, {" **** *** *** *** **** "}, {" **** *** *** *** **** "}};
class Juego : public Calculadoras
{
protected:
	int l, curso, c, exit, impacto, puntos, target[20], map, i, j, k, g, n, x, y, d;
	char carga[8], studio[11], wel[8], level[1][20];

public:
	Juego(int x1 = 0, int x2 = 0, int x3 = 0, int x4 = 0, int x5 = 7, int x6 = 3, char *c1 = "       ", char *c2 = "Arte ASCII", char *c3 = "WELCOME", char *c4 = "Take all the money!")
	{
		exit = x1;
		puntos = x2;
		target[20] = x3;
		map = x4;
		x = x5;
		y = x6;
		strcpy(carga, c1);
		strcpy(studio, c2);
		strcpy(wel, c3);
		strcpy(level[1], c4);
	}
	~Juego() {}
	void order66();
	void impresionlineal(int, int, int, int);
	void impresionlinealdeformada(int, int, int, int, int);
	void impresionlinealformada(int, int, int, int, int);
	void impresionbidimencionall(int, int, int, int);
	int money(int, int, int, int);
	void paredesfranqueables(int, int, int, int);
	void paredesinfranqueables(int, int, int, int);
	int colicioneslaterales(int, int, int, int, int, char);
	int colicionesverticales(int, int, int, int, int, char);
	int bordes(int, int, int, int, char, int);
	int capturado(int, int, int, int, int);
};

void Juego::order66()
{
	impresionbidimencionall(5, 2, 14, 95);
	system("cls");
	system("color 4");
	for (i = 0; i < 14; i++)
	{
		for (j = 0; j < 95; j++)
		{
			gotoxy(5 + j, 2 + i);
			cout << letra[i][j];
		}
	}
	for (k = 1; k <= 16; k++)
	{
		l = k % 2;
		if (l == 1)
			impresionbidimencionall(6, 2, 14, 95);
		if (l == 0)
			impresionbidimencionall(4, 2, 14, 95);
		if (k < 16)
			system("cls");
		Sleep(10);
	}
	for (k = 0; k <= 16; k++)
	{
		impresionlinealdeformada(k, 4, 15, 2, 1);
		impresionlinealdeformada(k, 4, 34, 2, 3);
		impresionlinealdeformada(k, 4, 46, 2, 5);
		impresionlinealdeformada(k, 4, 20, 2, 6);
		impresionlinealdeformada(k, 4, 45, 2, 7);
		impresionlinealdeformada(k, 4, 33, 2, 8);
		impresionlinealdeformada(k, 4, 36, 2, 9);
		impresionlinealdeformada(k, 4, 14, 2, 10);
		impresionlinealdeformada(k, 4, 46, 2, 12);
		if (k == 12)
		{
			Sleep(500);
			gotoxy(71, 14);
			for (i = 0; i < 8; i++)
			{
				cout << wel[i];
				Sleep(10);
			}
			Sleep(500);
		}
	}
	for (i = 0; i < 9; i++)
		for (k = 0; k < 24; k++)
		{
			gotoxy(63 + k, 5 + i);
			cout << craneo[i][k];
			Sleep(10);
		}
	Sleep(1000);
	system("cls");
	cout << "\n\n";
	cout << "     ******************************************************************************************" << endl;
	cout << "     **                                                                                      **" << endl;
	cout << "     **              ********  ********  ********  ********  ********  ********              **" << endl;
	cout << "     **              **        **        **        **     *  **     *  **                    **" << endl;
	cout << "     **              **        **        **        **     *  **     *  **                    **" << endl;
	cout << "     **              **        **        **        **     *  **     *  **                    **" << endl;
	cout << "     **              *******   ********  **        ********  ********  ********              **" << endl;
	cout << "     **              **              **  **        **     *  **        **                    **" << endl;
	cout << "     **              **              **  **        **     *  **        **                    **" << endl;
	cout << "     **              **              **  **        **     *  **        **                    **" << endl;
	cout << "     **              *******   ********  ********  **     *  **        ********              **" << endl;
	cout << "     **                                                                                      **" << endl;
	cout << "     **                                                                                      **" << endl;
	cout << "     ******************************************************************************************" << endl;

	for (k = 0; k < 10; k++)
	{
		l = k % 2;
		if (l == 1)
		{
			gotoxy(47, 14);
			cout << "LOADING";
		}
		if (l == 0)
		{
			gotoxy(47, 14);
			cout << "       ";
		}
		Sleep(500);
	}
	for (k = 0; k < 10; k++)
	{
		gotoxy(80 + k, 16);
		cout << studio[k];
		Sleep(10);
	}
	gotoxy(45, 14);
	cout << "PRESS ENTER";
	Sleep(700);
	getch();
	system("cls");
	cout << "\n\n";
	cout << "     *************************************************   *******************************" << endl;
	cout << "     ** |      |                       |$|$|$|$|$|$|**   *                             *" << endl;
	cout << "     ** |_     | ____    ____    ____  |_|_|_|_|_|_|**   *                             *" << endl;
	cout << "     **     |  |   | | |     | |     | |            **   *******************************" << endl;
	cout << "     **__  _|  |_  | | |  __ | |____ | |____________**   *                             *" << endl;
	cout << "     **   |   $  | |   | | $ | |  $  |              **   * Controles:                  *" << endl;
	cout << "     **  _|______| | __| |___| | ____|  ___________ **   *                             *" << endl;
	cout << "     ** |          | $ |       |     | |            **   *   w: Up.       $: Money.    *" << endl;
	cout << "     ** |    ___   |___|_______|____ | |  ______    **   *   a: Left.     O: Exit.     *" << endl;
	cout << "     **   | |          |             | | |$     | | **   *   s: Down.                  *" << endl;
	cout << "     **___| | _____    | ____________| | |____  | | **   *   d: Right.                 *" << endl;
	cout << "     **     |      |   |               |     $| | | **   *                             *" << endl;
	cout << "     **  ___|____  |   |___  __________|______| | | **   *******************************" << endl;
	cout << "     ** |$         |   |$|$|                    |$|$**   *   Tip:                      *" << endl;
	cout << "     ** |__  ______|   | | |_______________  ___|_|_**   *   You can go through some   *" << endl;
	cout << "     **     |            |   |   |     |    | | | | **   *   walls                     *" << endl;
	cout << "     **____ | _________  |__ |   |__   | ___|_|_|_|_**   *******************************" << endl;
	cout << "     **     |          |       |     | |    | | | | **" << endl;
	cout << "     **  ___|  ______  |  _____|_____| |___ |_|_|_|_**" << endl;
	cout << "     ** |   | |$     | | |   |   |   | |    | | | | **" << endl;
	cout << "     ** |   | |_____ | | |   |   |   | | ___|_|_|_|_**" << endl;
	cout << "     ** | | |        | | |$|   |   | | |    | | | | **" << endl;
	cout << "     ** | | |________| | |_|___|___| | |____|_|_|_|_**" << endl;
	cout << "     **   |            |             |     $| | | |O**" << endl;
	cout << "     *************************************************" << endl;

	gotoxy(x, y);
	cout << "0";
	gotoxy(63, 3);
	for (i = 0; i < 20; i++)
	{
		cout << level[0][i];
		Sleep(10);
	}
	Sleep(1000);
	for (i = 0; i <= 20; i++)
		if (i < 20)
		{
			level[0][i] *= 2;
			gotoxy(63 + i, 3);
			cout << level[0][i];
			Sleep(10);
		}
	Sleep(500);
	gotoxy(63, 3);
	cout << "                   ";
	Sleep(500);

	do
	{
		curso = getch();
		c = tolower(curso);
		switch (c)
		{
		case 'w': // Caso w, esta letra permite avanzar hacia la parte superior del mapa.
			gotoxy(x, y);
			cout << " ";								   // Se imprime un espacio en blanco en las mismas coordenas en que se encuentra el personaje (con la finalidad de borrar el caracter para la animaci�n de caminar).
			y -= 1;										   // Se modifica la coordenada y al restarle uno.
			y = colicionesverticales(x, y, 4, 8, 9, c);	   // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 4 (desde x=9 hasta x=9)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 4, 17, 21, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 4 (desde x=17 hasta x=21)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 4, 25, 29, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 4 (desde x=25 hasta x=29)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 4, 33, 37, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 4 (desde x=a 33 hasta x=37)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 4, 42, 42, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 4 (cuando x=42)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 4, 8, 9, c);	   // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 4 (desde x=8 hasta x=9)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 6, 10, 12, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 6 (desde x=10 hasta x=12)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 6, 7, 8, c);	   // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 6 (desde x=7 hasta x=8)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 6, 15, 17, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 6 (desde x=15 hasta x=17)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 6, 25, 27, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 6 (desde x=25 hasta x=27)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 6, 32, 35, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 6 (desde x=35 hasta x=32)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 6, 10, 11, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 6 (desde x=10 hasta x=11)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 6, 39, 49, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 6 (desde x=39 hasta x=49)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 6, 51, 51, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 6 (cuando x=51)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 8, 8, 17, c);   // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 8 (desde x=8 hasta x=17)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 8, 9, 9, c);	   // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 8 (cuando x=9)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 8, 21, 22, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 8 (desde x=21 hasta x=22)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 8, 9, 9, c);	   // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 8 (cuando x=9)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 8, 25, 29, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 8 (desde x=25 hasta x=29)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 8, 33, 36, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 8 (desde x=33 hasta x=36)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 8, 39, 50, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 8 (desde x=39 hasta x=50)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 10, 12, 15, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 10 (desde x=12 hasta x=15)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 10, 19, 35, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 10 (desde x=19 hasta x=35)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 10, 41, 48, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 10 (desde x=41 hasta x=48)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 12, 7, 10, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 12 (desde x=7 hasta x=9)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 12, 14, 19, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 12 (desde x=14 hasta x=19)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 12, 25, 37, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 12 (desde x=25 hasta x=37)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 12, 41, 46, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 12 (desde x=41 hasta x=46)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 14, 8, 11, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 14 (desde x=8 hasta x=11)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 14, 13, 16, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 14 (desde x=13 hasta x=16)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 14, 8, 11, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 14 (desde x=8 hasta x=11)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 14, 24, 27, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 14 (desde x=24 hasta x=27)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 14, 8, 11, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 14 (desde x=8 hasta x=11)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 14, 29, 46, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 14 (desde x=29 hasta x=46)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 16, 8, 10, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 16 (desde x=8 hasta x=10)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 16, 12, 19, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 16 (desde x=12 hasta x=19)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 16, 27, 42, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 16 (desde x=27 hasta x=42)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 16, 8, 10, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 16 (desde x=8 hasta x=10)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 16, 44, 48, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 16 (desde x=44 hasta x=48)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 18, 14, 23, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 18 (desde x=14 hasta x=23)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 18, 25, 27, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 18 (desde x=25 hasta x=27)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 18, 33, 35, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 18 (desde x=33 hasta x=35)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 18, 41, 51, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 18 (desde x=41 hasta x=51)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 18, 7, 10, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 18 (desde x=7 hasta x=10)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 20, 8, 11, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 20 (desde x=8 hasta x=11)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 20, 14, 21, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 20 (desde x=14 hasta x=21)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 20, 25, 36, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 20 (desde x=25 hasta x=36)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 20, 40, 42, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 20 (desde x=40 hasta x=42)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 20, 44, 46, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 20 (desde x=44 hasta x=46)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 22, 14, 19, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 22 (desde x=14 hasta x=19)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 22, 41, 44, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 22 (desde x=41 hasta x=44)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 24, 25, 35, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 24 (desde x=25 hasta x=35)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 24, 39, 44, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 24 (desde x=39 hasta x=44)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 24, 12, 21, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 24 (desde x=12 hasta x=21)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = bordes(x, y, 8, 10, c, 2);				   // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'w', x=8 y y=10.
			y = bordes(x, y, 8, 24, c, 2);				   // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'w', x=8 y y=24.
			y = bordes(x, y, 12, 6, c, 2);				   // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'w', x=12 y y=6.
			y = bordes(x, y, 23, 16, c, 2);				   // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'w', x=23 y y=16.
			y = bordes(x, y, 29, 22, c, 2);				   // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'w', x=29 y y=22.
			y = bordes(x, y, 29, 18, c, 2);				   // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'w', x=29 y y=18.
			y = bordes(x, y, 33, 22, c, 2);				   // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'w', x=33 y y=22.
			y = bordes(x, y, 41, 4, c, 2);				   // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'w', x=41 y y=4.
			y = bordes(x, y, 43, 4, c, 2);				   // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'w', x=43 y y=4.
			y = bordes(x, y, 45, 4, c, 2);				   // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'w', x=45 y y=4.
			y = bordes(x, y, 46, 22, c, 2);				   // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'w', x=46 y y=22.
			y = bordes(x, y, 47, 4, c, 2);				   // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'w', x=47 y y=4.
			y = bordes(x, y, 48, 20, c, 2);				   // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'w', x=48 y y=20.
			y = bordes(x, y, 49, 4, c, 2);				   // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'w', x=49 y y=4.
			y = bordes(x, y, 51, 4, c, 2);				   // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'w', x=51 y y=4.
			y = bordes(x, y, 12, 14, c, 2);				   // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'w', x=12 y y=14.
			if (y == 2)
				y += 1;
			gotoxy(x, y);
			cout << "0";
			break;
		case 'a':
			gotoxy(x, y);
			cout << " ";								  // Se imprime un espacio en blanco en las mismas coordenas en que se encuentra el personaje (con la finalidad de borrar el caracter para la animaci�n de caminar).
			x -= 1;										  // Se modifica la coordenada x al restarle uno.
			x = colicioneslaterales(x, y, 8, 3, 4, c);	  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 8 (desde y=3 hasta y=4)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 8, 8, 10, c);	  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 8 (desde y=8 hasta y=10)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 8, 20, 24, c);  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 8 (desde y=21 hasta y=24)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 8, 15, 16, c);  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 8 (desde y=15 hasta y=16)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 10, 23, 25, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 10 (desde y=23 hasta y=25)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 10, 6, 8, c);	  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 10 (desde y=6 hasta y=8)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 10, 11, 12, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 10 (desde y=11 hasta y=12)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 12, 10, 14, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 12 (desde y=10 hasta y=14)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 12, 5, 6, c);	  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 12 (desde y=5 hasta y=6)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 12, 16, 24, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 12 (desde y=16 hasta y=24)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 14, 20, 22, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 14 (desde y=20 hasta y=22)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 15, 3, 6, c);	  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 15 (desde y=3 hasta y=6)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 17, 6, 8, c);	  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 17 (desde y=6 hasta y=8)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 19, 5, 10, c);  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 19 (desde y=5 hasta y=10)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 19, 12, 16, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 19 (desde y=12 hasta y=16)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 21, 20, 24, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 21 (desde y=20 hasta y=24)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 21, 4, 6, c);	  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 21 (desde y=4 hasta y=6)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 23, 18, 25, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 23 (desde y=18 hasta y=25)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 23, 5, 16, c);  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 23 (desde y=5 hasta y=16)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 25, 20, 24, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 25 (desde y=20 hasta y=24)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 25, 15, 18, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 25 (desde y=15 hasta y=18)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 25, 6, 8, c);	  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 25 (desde y=6 hasta y=8)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 27, 14, 16, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 27 (desde y=14 hasta y=16)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 27, 23, 24, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 27 (desde y=23 hasta y=24)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 29, 21, 22, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 29 (desde y=21 hasta y=22)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 29, 4, 8, c);	  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 29 (desde y=4 hasta y=8)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 29, 17, 18, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 29 (desde y=17 hasta y=18)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 31, 23, 24, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 31 (desde y=23 hasta y=24)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 31, 19, 20, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 31 (desde y=19 hasta y=20)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 31, 5, 10, c);  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 31 (desde y=5 hasta y=10)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 33, 17, 18, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 33 (desde y=17 hasta y=18)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 33, 21, 22, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 33 (desde y=21 hasta y=22)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 35, 23, 24, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 35 (desde y=23 hasta y=24)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 37, 19, 25, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 37 (desde y=19 hasta y=25)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 37, 4, 12, c);  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 37 (desde y=4 hasta y=12)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 39, 8, 14, c);  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 39 (desde y=8 hasta y=14)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 39, 17, 24, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 39 (desde y=17 hasta y=24)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 39, 3, 6, c);	  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 39 (desde y=3 hasta y=6)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 41, 10, 12, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 41 (desde y=10 hasta y=12)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 41, 3, 4, c);	  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 41 (desde y=3 hasta y=4)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 43, 3, 4, c);	  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 43 (desde y=3 hasta y=4)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 44, 16, 24, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 44 (desde y=16 hasta y=24)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 45, 3, 4, c);	  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 45 (desde y=3 hasta y=4)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 46, 12, 14, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 46 (desde y=12 hasta y=14)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 46, 18, 18, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 46 (cuando y=18)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 46, 20, 22, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 46 (desde y=20 hasta y=22)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 46, 24, 25, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 46 (desde y=24 hasta y=25)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 47, 3, 4, c);	  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 47 (desde y=3 hasta y=4)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 48, 10, 16, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 48 (desde y=11 hasta y=16)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 48, 18, 18, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 48 (cuando y=18)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 48, 20, 20, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 48 (cuando y=20)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 48, 23, 25, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 48 (desde y=23 hasta y=25)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 49, 3, 4, c);	  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 49 (desde y=3 hasta y=4)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 50, 11, 18, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 50 (desde y=11 hasta y=18)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 50, 21, 25, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 50 (desde y=21 hasta y=25)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 51, 3, 4, c);	  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 51 (desde y=3 hasta y=4)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = bordes(x, y, 9, 4, c, 1);				  // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'a', x=9 y y=4.
			x = bordes(x, y, 8, 6, c, 1);				  // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'w', x=8 y y=6.
			x = bordes(x, y, 15, 10, c, 1);				  // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'w', x=15 y y=10.
			x = bordes(x, y, 27, 6, c, 1);				  // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'w', x=27 y y=6.
			x = bordes(x, y, 35, 6, c, 1);				  // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'w', x=35 y y=6.
			x = bordes(x, y, 35, 10, c, 1);				  // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'w', x=35 y y=10.
			x = bordes(x, y, 50, 8, c, 1);				  // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'w', x=50 y y=8.
			x = bordes(x, y, 49, 6, c, 1);				  // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'w', x=49 y y=6.
			x = bordes(x, y, 42, 16, c, 1);				  // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'w', x=42 y y=16.
			x = bordes(x, y, 42, 20, c, 1);				  // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'w', x=42 y y=20.
			x = bordes(x, y, 16, 14, c, 1);				  // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'w', x=16 y y=14.
			x = bordes(x, y, 10, 16, c, 1);				  // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'w', x=10 y y=16.
			x = bordes(x, y, 10, 18, c, 1);				  // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'w', x=10 y y=18.
			x = bordes(x, y, 19, 22, c, 1);				  // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'w', x=19 y y=22.
			x = bordes(x, y, 27, 18, c, 1);				  // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'w', x=27 y y=18.
			x = bordes(x, y, 35, 18, c, 1);				  // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'w', x=35 y y=18.
			if (x == 6)
				x += 1;
			gotoxy(x, y);
			cout << "�";
			break;
		case 's':
			gotoxy(x, y);
			cout << " ";
			y += 1;
			y = colicionesverticales(x, y, 4, 8, 9, c);	   // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 4 (desde x=9 hasta x=9)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 4, 17, 21, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 4 (desde x=17 hasta x=21)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 4, 25, 29, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 4 (desde x=25 hasta x=29)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 4, 33, 37, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 4 (desde x=a 33 hasta x=37)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 4, 42, 42, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 4 (cuando x=42)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 4, 8, 9, c);	   // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 4 (desde x=8 hasta x=9)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 6, 10, 12, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 6 (desde x=10 hasta x=12)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 6, 7, 8, c);	   // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 6 (desde x=7 hasta x=8)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 6, 15, 17, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 6 (desde x=15 hasta x=17)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 6, 25, 27, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 6 (desde x=25 hasta x=27)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 6, 32, 35, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 6 (desde x=35 hasta x=32)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 6, 10, 11, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 6 (desde x=10 hasta x=11)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 6, 39, 49, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 6 (desde x=39 hasta x=49)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 6, 51, 51, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 6 (cuando x=51)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 8, 8, 17, c);   // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 8 (desde x=8 hasta x=17)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 8, 9, 9, c);	   // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 8 (cuando x=9)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 8, 21, 22, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 8 (desde x=21 hasta x=22)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 8, 9, 9, c);	   // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 8 (cuando x=9)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 8, 25, 29, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 8 (desde x=25 hasta x=29)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 8, 33, 36, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 8 (desde x=33 hasta x=36)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 8, 39, 50, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 8 (desde x=39 hasta x=50)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 10, 12, 15, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 10 (desde x=12 hasta x=15)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 10, 19, 35, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 10 (desde x=19 hasta x=35)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 10, 41, 48, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 10 (desde x=41 hasta x=48)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 12, 7, 9, c);   // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 12 (desde x=7 hasta x=9)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 12, 14, 19, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 12 (desde x=14 hasta x=19)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 12, 25, 37, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 12 (desde x=25 hasta x=37)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 12, 41, 46, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 12 (desde x=41 hasta x=46)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 14, 8, 11, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 14 (desde x=8 hasta x=11)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 14, 13, 16, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 14 (desde x=13 hasta x=16)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 14, 8, 11, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 14 (desde x=8 hasta x=11)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 14, 24, 27, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 14 (desde x=24 hasta x=27)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 14, 8, 11, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 14 (desde x=8 hasta x=11)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 14, 29, 46, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 14 (desde x=29 hasta x=46)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 16, 8, 10, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 16 (desde x=8 hasta x=10)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 16, 12, 19, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 16 (desde x=12 hasta x=19)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 16, 27, 42, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 16 (desde x=27 hasta x=42)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 16, 8, 10, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 16 (desde x=8 hasta x=10)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 16, 44, 48, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 16 (desde x=44 hasta x=48)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 18, 14, 23, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 18 (desde x=14 hasta x=23)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 18, 25, 27, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 18 (desde x=25 hasta x=27)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 18, 33, 35, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 18 (desde x=33 hasta x=35)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 18, 41, 51, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 18 (desde x=41 hasta x=51)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 18, 7, 10, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 18 (desde x=7 hasta x=10)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 20, 8, 11, c);  // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 20 (desde x=8 hasta x=11)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 20, 14, 21, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 20 (desde x=14 hasta x=21)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 20, 25, 36, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 20 (desde x=25 hasta x=36)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 20, 40, 42, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 20 (desde x=40 hasta x=42)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 20, 44, 46, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 20 (desde x=44 hasta x=46)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 22, 14, 19, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 22 (desde x=14 hasta x=19)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 22, 41, 44, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 22 (desde x=41 hasta x=44)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 24, 25, 35, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 24 (desde x=25 hasta x=35)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 24, 39, 44, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 24 (desde x=39 hasta x=44)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = colicionesverticales(x, y, 24, 12, 21, c); // Se delimitan las coordenadas en x en las que no se puede ubicar el personaje cuando y vale 24 (desde x=12 hasta x=21)(esta funci�n se delimita cuando el personaje se dirige hacia arriba).
			y = bordes(x, y, 10, 11, c, 2);				   // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 's', x=10 y y=11.
			y = bordes(x, y, 12, 5, c, 2);				   // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 's', x=12 y y=15.
			y = bordes(x, y, 10, 23, c, 2);				   // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 's', x=10 y y=23.
			y = bordes(x, y, 35, 23, c, 2);				   // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 's', x=35 y y=23.
			y = bordes(x, y, 31, 23, c, 2);				   // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 's', x=31 y y=23.
			y = bordes(x, y, 27, 23, c, 2);				   // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 's', x=27 y y=23.
			y = bordes(x, y, 37, 19, c, 2);				   // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 's', x=37 y y=19.
			y = bordes(x, y, 50, 11, c, 2);				   // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 's', x=50 y y=11.
			y = bordes(x, y, 48, 22, c, 2);				   // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 's', x=48 y y=22.
			y = bordes(x, y, 50, 20, c, 2);				   // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 's', x=50 y y=20.
			y = bordes(x, y, 46, 24, c, 2);				   // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 's', x=46 y y=24.
			y = bordes(x, y, 31, 19, c, 2);				   // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 's', x=31 y y=19.
			y = bordes(x, y, 23, 5, c, 2);				   // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 's', x=23 y y=5.
			y = bordes(x, y, 31, 5, c, 2);				   // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 's', x=31 y y=5.
			if (y == 26)
				y -= 1;
			gotoxy(x, y);
			cout << "0";
			break;
		case 'd':
			gotoxy(x, y);
			cout << " ";
			x += 1;
			x = colicioneslaterales(x, y, 8, 3, 4, c);	  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 8 (desde y=3 hasta y=4)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 8, 8, 10, c);	  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 8 (desde y=8 hasta y=10)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 8, 20, 24, c);  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 8 (desde y=21 hasta y=24)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 8, 14, 16, c);  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 8 (desde y=15 hasta y=16)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 10, 23, 25, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 10 (desde y=23 hasta y=25)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 10, 6, 8, c);	  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 10 (desde y=6 hasta y=8)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 10, 11, 12, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 10 (desde y=11 hasta y=12)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 12, 10, 14, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 12 (desde y=10 hasta y=14)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 12, 5, 6, c);	  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 12 (desde y=5 hasta y=6)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 12, 16, 24, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 12 (desde y=16 hasta y=24)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 14, 20, 22, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 14 (desde y=20 hasta y=22)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 15, 3, 6, c);	  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 15 (desde y=3 hasta y=6)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 17, 6, 8, c);	  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 17 (desde y=6 hasta y=8)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 19, 5, 10, c);  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 19 (desde y=5 hasta y=10)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 19, 12, 16, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 19 (desde y=12 hasta y=16)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 21, 20, 24, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 21 (desde y=20 hasta y=24)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 21, 4, 6, c);	  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 21 (desde y=4 hasta y=6)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 23, 18, 25, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 23 (desde y=18 hasta y=25)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 23, 5, 16, c);  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 23 (desde y=5 hasta y=16)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 25, 20, 24, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 25 (desde y=20 hasta y=24)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 25, 15, 18, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 25 (desde y=15 hasta y=18)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 25, 6, 8, c);	  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 25 (desde y=6 hasta y=8)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 27, 14, 16, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 27 (desde y=14 hasta y=16)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 27, 23, 24, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 27 (desde y=23 hasta y=24)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 29, 21, 22, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 29 (desde y=21 hasta y=22)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 29, 4, 8, c);	  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 29 (desde y=4 hasta y=8)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 29, 17, 18, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 29 (desde y=17 hasta y=18)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 31, 23, 24, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 31 (desde y=23 hasta y=24)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 31, 19, 20, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 31 (desde y=19 hasta y=20)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 31, 5, 10, c);  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 31 (desde y=5 hasta y=10)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 33, 17, 18, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 33 (desde y=17 hasta y=18)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 33, 21, 22, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 33 (desde y=21 hasta y=22)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 35, 23, 24, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 35 (desde y=23 hasta y=24)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 37, 19, 25, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 37 (desde y=19 hasta y=25)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 37, 4, 12, c);  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 37 (desde y=4 hasta y=12)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 39, 8, 14, c);  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 39 (desde y=8 hasta y=14)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 39, 17, 24, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 39 (desde y=17 hasta y=24)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 39, 3, 6, c);	  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 39 (desde y=3 hasta y=6)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 41, 10, 12, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 41 (desde y=10 hasta y=12)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 41, 3, 4, c);	  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 41 (desde y=3 hasta y=4)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 43, 3, 4, c);	  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 43 (desde y=3 hasta y=4)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 44, 16, 24, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 44 (desde y=16 hasta y=24)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 45, 3, 4, c);	  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 45 (desde y=3 hasta y=4)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 46, 12, 14, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 46 (desde y=12 hasta y=14)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 46, 18, 18, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 46 (cuando y=18)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 46, 20, 22, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 46 (desde y=20 hasta y=22)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 46, 24, 25, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 46 (desde y=24 hasta y=25)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 47, 3, 4, c);	  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 47 (desde y=3 hasta y=4)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 48, 11, 16, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 48 (desde y=11 hasta y=16)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 48, 18, 18, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 48 (cuando y=18)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 48, 20, 20, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 48 (cuando y=20)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 48, 23, 25, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 48 (desde y=23 hasta y=25)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 49, 3, 4, c);	  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 49 (desde y=3 hasta y=4)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 50, 11, 18, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 50 (desde y=11 hasta y=18)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 50, 21, 25, c); // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 50 (desde y=21 hasta y=25)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = colicioneslaterales(x, y, 51, 3, 4, c);	  // Se delimitan las coordenadas en y en las que no se puede ubicar el personaje cuando x vale 51 (desde y=3 hasta y=4)(esta funci�n se delimita cuando el personaje se dirige hacia la izquierda).
			x = bordes(x, y, 14, 18, c, 1);				  // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'd', x=14 y y=18.
			x = bordes(x, y, 14, 12, c, 1);				  // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'd', x=14 y y=12.
			x = bordes(x, y, 17, 4, c, 1);				  // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'd', x=17 y y=4.
			x = bordes(x, y, 25, 4, c, 1);				  // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'd', x=25 y y=4.
			x = bordes(x, y, 33, 4, c, 1);				  // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'd', x=33 y y=4.
			x = bordes(x, y, 33, 8, c, 1);				  // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'd', x=33 y y=8.
			x = bordes(x, y, 51, 6, c, 1);				  // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'd', x=51 y y=6.
			x = bordes(x, y, 41, 18, c, 1);				  // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'd', x=41 y y=18.
			x = bordes(x, y, 41, 22, c, 1);				  // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'd', x=41 y y=22.
			x = bordes(x, y, 21, 8, c, 1);				  // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'd', x=21 y y=8.
			x = bordes(x, y, 29, 14, c, 1);				  // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'd', x=29 y y=14.
			x = bordes(x, y, 25, 15, c, 1);				  // Se delimitan las coordenadas en que el presonaje no se puede ubicar cuando c es igual a 'd', x=25 y y=15.
			if (x == 52)
				x -= 1;
			gotoxy(x, y);
			cout << "�";
			break;
		}

		/*****Los objetivos en el mapa constan de dos datos est�n mapeados para que*********/
		/*****al momento en que el personajecamina sobre ellos los puntos acumulados********/
		/*****se incrementen y las variables de control del arreglo target guarden el*******/
		/*****registro y el  pograma pueda reconocer si uno de los objetivos ya ha sido*****/
		/********************************tomado o no****************************************/

		puntos += money(14, 7, target[0], 1);	   // Se establecen las coordenadas para sumar 300 al puntaje (x=14, y=17).
		target[0] = money(14, 7, target[0], 2);	   // Se establecen las coordenadas para modificar el valor del objetivo y que no vuelva a sumar al puntaje (x=14, y=17).
		puntos += money(15, 21, target[1], 1);	   // Se establecen las coordenadas para sumar 300 al puntaje (x=15, y=21).
		target[1] = money(15, 21, target[1], 2);   // Se establecen las coordenadas para modificar el valor del objetivo y que no vuelva a sumar al puntaje (x=15, y=21).
		puntos += money(24, 15, target[2], 1);	   // Se establecen las coordenadas para sumar 300 al puntaje (x=24, y=15).
		target[2] = money(24, 15, target[2], 2);   // Se establecen las coordenadas para modificar el valor del objetivo y que no vuelva a sumar al puntaje (x=24, y=15).
		puntos += money(26, 15, target[3], 1);	   // Se establecen las coordenadas para sumar 300 al puntaje (x=26, y=15).
		target[3] = money(26, 15, target[3], 2);   // Se establecen las coordenadas para modificar el valor del objetivo y que no vuelva a sumar al puntaje (x=26, y=15).
		puntos += money(43, 25, target[4], 1);	   // Se establecen las coordenadas para sumar 300 al puntaje (x=43, y=25).
		target[4] = money(43, 25, target[4], 2);   // Se establecen las coordenadas para modificar el valor del objetivo y que no vuelva a sumar al puntaje (x=43, y=25).
		puntos += money(9, 15, target[5], 1);	   // Se establecen las coordenadas para sumar 300 al puntaje (x=9, y=15).
		target[5] = money(9, 15, target[5], 2);	   // Se establecen las coordenadas para modificar el valor del objetivo y que no vuelva a sumar al puntaje (x=9, y=15).
		puntos += money(21, 9, target[6], 1);	   // Se establecen las coordenadas para sumar 300 al puntaje (x=21, y=9).
		target[6] = money(21, 9, target[6], 2);	   // Se establecen las coordenadas para modificar el valor del objetivo y que no vuelva a sumar al puntaje (x=21, y=9)
		puntos += money(27, 7, target[7], 1);	   // Se establecen las coordenadas para sumar 300 al puntaje (x=27, y=7).
		target[7] = money(27, 7, target[7], 2);	   // Se establecen las coordenadas para modificar el valor del objetivo y que no vuelva a sumar al puntaje (x=27, y=7).
		puntos += money(34, 7, target[8], 1);	   // Se establecen las coordenadas para sumar 300 al puntaje (x=34, y=7).
		target[8] = money(34, 7, target[8], 2);	   // Se establecen las coordenadas para modificar el valor del objetivo y que no vuelva a sumar al puntaje (x=34, y=7).
		puntos += money(42, 11, target[9], 1);	   // Se establecen las coordenadas para sumar 300 al puntaje (x=42, y=11).
		target[9] = money(42, 11, target[9], 2);   // Se establecen las coordenadas para modificar el valor del objetivo y que no vuelva a sumar al puntaje (x=42, y=11).
		puntos += money(45, 13, target[10], 1);	   // Se establecen las coordenadas para sumar 300 al puntaje (x=45, y=13).
		target[10] = money(45, 13, target[10], 2); // Se establecen las coordenadas para modificar el valor del objetivo y que no vuelva a sumar al puntaje (x=45, y=13).
		puntos += money(51, 15, target[11], 1);	   // Se establecen las coordenadas para sumar 300 al puntaje (x=51, y=15).
		target[11] = money(51, 15, target[11], 2); // Se establecen las coordenadas para modificar el valor del objetivo y que no vuelva a sumar al puntaje (x=51, y=15).
		puntos += money(49, 15, target[12], 1);	   // Se establecen las coordenadas para sumar 300 al puntaje (x=49, y=15).
		target[12] = money(49, 15, target[12], 2); // Se establecen las coordenadas para modificar el valor del objetivo y que no vuelva a sumar al puntaje (x=49, y=15).
		puntos += money(26, 23, target[13], 1);	   // Se establecen las coordenadas para sumar 300 al puntaje (x=26, y=23).
		target[13] = money(26, 23, target[13], 2); // Se establecen las coordenadas para modificar el valor del objetivo y que no vuelva a sumar al puntaje (x=26, y=23).
		puntos += money(40, 3, target[14], 1);	   // Se establecen las coordenadas para sumar 300 al puntaje (x=40, y=3).
		target[14] = money(40, 3, target[14], 2);  // Se establecen las coordenadas para modificar el valor del objetivo y que no vuelva a sumar al puntaje (x=40, y=3).
		puntos += money(42, 3, target[15], 1);	   // Se establecen las coordenadas para sumar 300 al puntaje (x=42, y=3).
		target[15] = money(42, 3, target[15], 2);  // Se establecen las coordenadas para modificar el valor del objetivo y que no vuelva a sumar al puntaje (x=42, y=3).
		puntos += money(44, 3, target[16], 1);	   // Se establecen las coordenadas para sumar 300 al puntaje (x=44, y=3).
		target[16] = money(44, 3, target[16], 2);  // Se establecen las coordenadas para modificar el valor del objetivo y que no vuelva a sumar al puntaje (x=44, y=3).
		puntos += money(46, 3, target[17], 1);	   // Se establecen las coordenadas para sumar 300 al puntaje (x=46, y=3).
		target[17] = money(46, 3, target[17], 2);  // Se establecen las coordenadas para modificar el valor del objetivo y que no vuelva a sumar al puntaje (x=46, y=3).
		puntos += money(48, 3, target[18], 1);	   // Se establecen las coordenadas para sumar 300 al puntaje (x=48, y=3).
		target[18] = money(48, 3, target[18], 2);  // Se establecen las coordenadas para modificar el valor del objetivo y que no vuelva a sumar al puntaje (x=48, y=3).
		puntos += money(50, 3, target[19], 1);	   // Se establecen las coordenadas para sumar 300 al puntaje (x=50, y=3).
		target[19] = money(50, 3, target[19], 2);  // Se establecen las coordenadas para modificar el valor del objetivo y que no vuelva a sumar al puntaje (x=50, y=3).

		/******Se establecen las paredes falsas del juego, mismas que se reimprimen*******/
		/****************una vez que el personaje ya paso por ellas.**********************/

		paredesfranqueables(44, 17, 25, 1); // Se delimitan las coordenadas en x=44 en las que se reimprimir�n los muros (desde y=17 hasta y=25), Las mismas se reimprimen en cada ciclo de repetici�n.
		paredesfranqueables(46, 17, 25, 1); // Se delimitan las coordenadas en x=46 en las que se reimprimir�n los muros (desde y=17 hasta y=25), Las mismas se reimprimen en cada ciclo de repetici�n.
		paredesfranqueables(48, 17, 25, 1); // Se delimitan las coordenadas en x=48 en las que se reimprimir�n los muros (desde y=17 hasta y=25), Las mismas se reimprimen en cada ciclo de repetici�n.
		paredesfranqueables(50, 17, 25, 1); // Se delimitan las coordenadas en x=50 en las que se reimprimir�n los muros (desde y=17 hasta y=25), Las mismas se reimprimen en cada ciclo de repetici�n.
		paredesfranqueables(4, 40, 50, 2);	// Se delimitan las coordenadas en y=4 en las que se reimprimir�n los muros (desde x=40 hasta x=50, s�lo en n�meros pares), Las mismas se reimprimen en cada ciclo de repetici�n.
		paredesfranqueables(16, 49, 51, 3); // Se delimitan las coordenadas en y=16 en las que se reimprimir�n los muros (desde x=49 hasta x=51, s�lo en n�meros impares), Las mismas se reimprimen en cada ciclo de repetici�n.
		paredesfranqueables(18, 45, 51, 3); // Se delimitan las coordenadas en y=18 en las que se reimprimir�n los muros (desde x=45 hasta x=51, s�lo en n�meros impares), Las mismas se reimprimen en cada ciclo de repetici�n.
		paredesfranqueables(20, 45, 51, 3); // Se delimitan las coordenadas en y=20 en las que se reimprimir�n los muros (desde x=45 hasta x=51, s�lo en n�meros impares), Las mismas se reimprimen en cada ciclo de repetici�n.
		paredesfranqueables(22, 45, 51, 3); // Se delimitan las coordenadas en y=22 en las que se reimprimir�n los muros (desde x=45 hasta x=51, s�lo en n�meros impares), Las mismas se reimprimen en cada ciclo de repetici�n.
		paredesfranqueables(24, 45, 51, 3); // Se delimitan las coordenadas en y=24 en las que se reimprimir�n los muros (desde x=45 hasta x=51, s�lo en n�meros impares), Las mismas se reimprimen en cada ciclo de repetici�n.
		gotoxy(5, 27);
		cout << "          ";
		gotoxy(5, 27);
		cout << "(" << x << "," << y << ")";
		gotoxy(5, 28);
		cout << "Points: $" << puntos;
		gotoxy(62, 3);
		exit = capturado(x, y, 45, 17, exit); // Se establecen las coordenadas en que se encuentra una de las trampas para capturar al personaje y se finalice el juego (x=45, y=17).
		exit = capturado(x, y, 51, 17, exit); // Se establecen las coordenadas en que se encuentra una de las trampas para capturar al personaje y se finalice el juego (x=51, y=17).
		exit = capturado(x, y, 45, 19, exit); // Se establecen las coordenadas en que se encuentra una de las trampas para capturar al personaje y se finalice el juego (x=45, y=19).
		exit = capturado(x, y, 45, 21, exit); // Se establecen las coordenadas en que se encuentra una de las trampas para capturar al personaje y se finalice el juego (x=45, y=21).
		exit = capturado(x, y, 47, 25, exit); // Se establecen las coordenadas en que se encuentra una de las trampas para capturar al personaje y se finalice el juego (x=47, y=25).
		exit = capturado(x, y, 49, 25, exit); // Se establecen las coordenadas en que se encuentra una de las trampas para capturar al personaje y se finalice el juego (x=49, y=25).
		if (x == 51 && y == 25)
		{
			gotoxy(51, 25);
			cout << "O";
			exit = 1;
			gotoxy(66, 3);
			cout << "YOU ESCAPED!";
			puntos += 1000;
		}
	} while (exit != 1);
	gotoxy(59, 4);
	cout << "Thanks for playing de Beta!";
	gotoxy(5, 28);
	cout << "Points: $" << puntos;
	Sleep(1000);
	for (k = 0; k < 10; k++)
	{
		gotoxy(66 + k, 20);
		cout << studio[k];
		Sleep(10);
	}
	getch();
	system("cls");
	fflush(stdin);
}

void Juego::impresionlinealdeformada(int x, int y, int z, int w, int o)
{
	if (x == o)
		for (g = y; g <= z; g++)
		{
			letra[x][g] *= 2;
			gotoxy(y + g, w + x);
			cout << letra[x][g];
			Sleep(10);
		}
}

void Juego::impresionbidimencionall(int x, int y, int z, int w)
{
	for (i = 0; i < z; i++)
		for (j = 0; j < w; j++)
		{
			gotoxy(x + j, y + i);
			cout << letra[i][j];
		}
}

int Juego::money(int z, int w, int o, int n)
{
	int puntos2 = 0;
	if (x == z && y == w && o < 1)
	{
		puntos2 += 300;
		o++;
	}
	if (n == 1)
		return (puntos2);
	if (n == 2)
		return (o);
}

void Juego::paredesfranqueables(int z, int w, int o, int n)
{
	int imp;
	i = w;
	if (n == 1)
	{
		do
		{
			if (x != z || y != i)
			{
				gotoxy(z, i);
				cout << "|";
			}
			if (x == z && y == i)
			{
				gotoxy(x, y);
				cout << "0";
			}
			i++;
		} while (i <= o);
		if (x == (z - 1) || x == (z + 1))
			if (x == z && y < w && y > o)
			{
				gotoxy(z, y);
				cout << "|";
			}
		if (x == z && y > w && y < o && w != o)
		{
			gotoxy(z, y + 1);
			cout << "|";
			gotoxy(z, y - 1);
			cout << "|";
		}
		if (x == z && y == w && w != o)
		{
			gotoxy(z, y + 1);
			cout << "|";
		}
		if (x == z && y == o && w != o)
		{
			gotoxy(z, y - 1);
			cout << "|";
		}
	}
	if (n == 2)
	{
		do
		{
			imp = i % 2;
			if (imp == 0)
			{
				if (x != i || y != z)
				{
					gotoxy(i, z);
					cout << "_";
				}
				if (x == i && y == z)
				{
					gotoxy(x, y);
					cout << "0";
				}
			}
			i++;
		} while (i <= o);
		if (y == (z - 1) || y == (z + 1))
			if (y == z && x < w && x > o)
			{
				gotoxy(x, z);
				cout << "_";
			}
	}
	if (n == 3)
	{
		do
		{
			imp = i % 2;
			if (imp == 1)
			{
				if (x != i || y != z)
				{
					gotoxy(i, z);
					cout << "_";
				}
				if (x == i && y == z)
				{
					gotoxy(x, y);
					cout << "0";
				}
			}
			i++;
		} while (i <= o);
		if (y == (z - 1) || y == (z + 1))
			if (y == z && x < w && x > o)
			{
				gotoxy(x, z);
				cout << "_";
			}
	}
}

int Juego::colicioneslaterales(int x, int y, int z, int w, int p, char o)
{
	i = w;
	if (o == 'a')
		do
		{
			if (x == z && y == i)
				x += 1;
			i++;
		} while (i <= p);
	if (o == 'd')
		do
		{
			if (x == z && y == i)
				x -= 1;
			i++;
		} while (i <= p);
	return (x);
}

int Juego::colicionesverticales(int x, int y, int z, int w, int p, char o)
{
	i = w;
	if (o == 'w')
		do
		{
			if (x == i && y == z)
				y += 1;
			i++;
		} while (i <= p);
	if (o == 's')
		do
		{
			if (x == i && y == z)
				y -= 1;
			i++;
		} while (i <= p);
	return (y);
}

int Juego::bordes(int x, int y, int z, int w, char o, int n)
{
	if (x == z && y == w && o == 'a')
		x += 1;
	if (x == z && y == w && o == 's')
		y -= 1;
	if (x == z && y == w && o == 'd')
		x -= 1;
	if (x == z && y == w && o == 'w')
		y += 1;
	if (n == 1)
		return (x);
	if (n == 2)
		return (y);
}

int Juego::capturado(int x, int y, int z, int w, int o)
{
	if (x == z && y == w && o != 1)
	{
		cout << "You've been captured!";
		o += 1;
	}
	return (o);
}

class Analisis_combinatorio : public Calculadoras
{
protected:
	int seleccion, ciclo, cont, n, i, j, acum, k, Elementos_repetidos[10], m;
	long int fact;

public:
	void Caculadora_analisis_combinatorio();
	long int Factorial(int);
	long int Variacion_ordinaria_operacion(int, int);
	long int Permutacion_con_repeticiones_Operacion(int, int);
	void Permutacion_ordindaria();
	void Permutacion_con_repeticion();
	void Variacion_ordinaria();
	void variacion_con_repeticion();
	void Combinacion_ordinaria();
	void Combinacion_con_repeticion();
};

long int Analisis_combinatorio::Factorial(int x)
{
	fact = 1;
	for (cont = 2; cont <= x; cont++)
		fact *= cont;
	return (fact);
}

long int Analisis_combinatorio::Variacion_ordinaria_operacion(int x, int y)
{
	acum = 1;
	for (i = 0; i < x; i++)
	{
		acum *= (y - i);
	}
	return (acum);
}

long int Analisis_combinatorio::Permutacion_con_repeticiones_Operacion(int x, int y)
{
	acum = 1;
	for (k = 0; k < x; k++)
	{
		acum *= (Factorial(Elementos_repetidos[k]));
	}
	return (Factorial(y) / acum);
}

void Analisis_combinatorio::Caculadora_analisis_combinatorio()
{
	do
	{
		cout << "\n     *******************************************************************************************************" << endl;
		cout << "     **                      **  �Se toman todos **  �Importa ** �Se repiten **                           **" << endl;
		cout << "     **       Tipo de        **       los        **     el    **             **         F�rmula           **" << endl;
		cout << "     **     combinatoria     **    elementos?    **   Orden?  **  elementos? **                           **" << endl;
		cout << "     **                      **                  **           **             **                           **" << endl;
		cout << "     *******************************************************************************************************" << endl;
		cout << "     **                      **                  **           **             **                           **" << endl;
		cout << "     **  Permutaci�n         **                  **           **             **                           **" << endl;
		cout << "     **                  1   **        S�        **     S�    **      No     **           Pn=n!           **" << endl;
		cout << "     **  Ordinaria           **                  **           **             **                           **" << endl;
		cout << "     **                      **                  **           **             **                           **" << endl;
		cout << "     *******************************************************************************************************" << endl;
		cout << "     **                      **                  **           **             **                           **" << endl;
		cout << "     **  Permutaci�n         **                  **           **             **   a,b,c...    Pn          **" << endl;
		cout << "     **      con         2   **        S�        **     S�    **      S�     ** PR        =_________      **" << endl;
		cout << "     **  repetici�n          **                  **           **             **   n        a!*b!...       **" << endl;
		cout << "     **                      **                  **           **             **                           **" << endl;
		cout << "     *******************************************************************************************************" << endl;
		cout << "     **                      **                  **           **             **                           **" << endl;
		cout << "     **   Variaci�n          **                  **           **             **  n                        **" << endl;
		cout << "     **                  3   **        No        **     S�    **      No     ** V  =m(m-1)(m-2)...(m-n+1) **" << endl;
		cout << "     **   Ordinaria          **                  **           **             **  m                        **" << endl;
		cout << "     **                      **                  **           **             **                           **" << endl;
		cout << "     *******************************************************************************************************" << endl;
		cout << "     **                      **                  **           **             **                           **" << endl;
		cout << "     **   Variaci�n          **   S�             **           **             **            n              **" << endl;
		cout << "     **      con         4   **        y         **     S�    **      S�     **          VR = m^n         **" << endl;
		cout << "     **   Repetici�n         **            No    **           **             **            m              **" << endl;
		cout << "     **                      **                  **           **             **                           **" << endl;
		cout << "     *******************************************************************************************************" << endl;
		cout << "     **                      **                  **           **             **                 m         **" << endl;
		cout << "     **   Combinacion        **                  **           **             **           n    Vn         **" << endl;
		cout << "     **                  5   **        No        **     No    **      No     **          C = ______       **" << endl;
		cout << "     **    ordinaria         **                  **           **             **           m    Pn         **" << endl;
		cout << "     **                      **                  **           **             **                           **" << endl;
		cout << "     *******************************************************************************************************" << endl;
		cout << "     **                      **                  **           **             **                           **" << endl;
		cout << "     **   Combinaci�n        **   S�             **           **             **       n    (m+n-1)        **" << endl;
		cout << "     **      con         6   **        y         **     No    **      S�     **     CR =_____________     **" << endl;
		cout << "     **   Repetici�n         **            No    **           **             **       m   n!*(m-1)!       **" << endl;
		cout << "     **                      **                  **           **             **                           **" << endl;
		cout << "     *******************************************************************************************************" << endl;
		cout << "     **  Opcio�n 7: salir al men� principal.                                                              **" << endl;
		cout << "     *******************************************************************************************************" << endl;
		cout << "     **  Presiona el n�mero de la operaci�n deseada:                                                      **" << endl;
		cout << "     *******************************************************************************************************" << endl;
		cout << "     An�lisis combinatorio.";
		gotoxy(53, 45);
		cin >> seleccion;
		system("cls");
		switch (seleccion)
		{
		case 1:
			Permutacion_ordindaria();
			break;
		case 2:
			Permutacion_con_repeticion();
			break;
		case 3:
			Variacion_ordinaria();
			break;
		case 4:
			variacion_con_repeticion();
			break;
		case 5:
			Combinacion_ordinaria();
			break;
		case 6:
			Combinacion_con_repeticion();
			break;
		case 7:
			break;
		default:
			error();
		}
	} while (seleccion != 7);
	system("cls");
}

void Analisis_combinatorio::Permutacion_ordindaria()
{
	cout << "\n     *******************************************************************************************************" << endl;
	cout << "     **                      **  �Se toman todos **  �Importa ** �Se repiten **                           **" << endl;
	cout << "     **       Tipo de        **       los        **     el    **             **         F�rmula           **" << endl;
	cout << "     **     combinatoria     **    elementos?    **   Orden?  **  elementos? **                           **" << endl;
	cout << "     **                      **                  **           **             **                           **" << endl;
	cout << "     *******************************************************************************************************" << endl;
	cout << "     **                      **                  **           **             **                           **" << endl;
	cout << "     **  Permutaci�n         **                  **           **             **                           **" << endl;
	cout << "     **                  1   **        S�        **     S�    **      No     **           Pn=n!           **" << endl;
	cout << "     **  Ordinaria           **                  **           **             **                           **" << endl;
	cout << "     **                      **                  **           **             **                           **" << endl;
	cout << "     *******************************************************************************************************" << endl;
	cout << "     **    Introduce el valor de n:                                                                       **" << endl;
	cout << "     *******************************************************************************************************" << endl;
	gotoxy(36, 13);
	cin >> n;
	gotoxy(0, 15);
	cout << "     **    El resultado es:                                                                               **" << endl;
	cout << "     *******************************************************************************************************" << endl;
	if (n >= 0)
	{
		gotoxy(28, 15);
		cout << Factorial(n);
	}
	else
	{
		gotoxy(11, 15);
		cout << "Error: Lo siento, pero el valor es negativo";
	}
	getch();
	system("cls");
}

void Analisis_combinatorio::Permutacion_con_repeticion()
{
	acum = 1;
	cout << "\n     *******************************************************************************************************" << endl;
	cout << "     **                      **  �Se toman todos **  �Importa ** �Se repiten **                           **" << endl;
	cout << "     **       Tipo de        **       los        **     el    **             **         F�rmula           **" << endl;
	cout << "     **     combinatoria     **    elementos?    **   Orden?  **  elementos? **                           **" << endl;
	cout << "     **                      **                  **           **             **                           **" << endl;
	cout << "     *******************************************************************************************************" << endl;
	cout << "     **                      **                  **           **             **                           **" << endl;
	cout << "     **  Permutaci�n         **                  **           **             **   a,b,c...    Pn          **" << endl;
	cout << "     **      con         2   **        S�        **     S�    **      S�     ** PR        =_________      **" << endl;
	cout << "     **  repetici�n          **                  **           **             **   n        a!*b!...       **" << endl;
	cout << "     **                      **                  **           **             **                           **" << endl;
	cout << "     *******************************************************************************************************" << endl;
	cout << "     **    Cu�l es el valor de n:                                                                         **" << endl;
	cout << "     *******************************************************************************************************" << endl;
	cout << "     **    Introduce la cantidad de elementos que se repiten (hasta 9 elementos):                         **" << endl;
	cout << "     *******************************************************************************************************" << endl;
	gotoxy(34, 13);
	cin >> n;
	gotoxy(82, 15);
	cin >> i;
	if (i < n)
	{
		for (j = 0; j < i; j++)
		{
			gotoxy(0, 17 + (j * 2));
			cout << "     **    Cu�ntas veces se repite el elemento " << j + 1 << ":";
			gotoxy(106, 17 + (j * 2));
			cout << "**\n     *******************************************************************************************************";
			gotoxy(50, 17 + (j * 2));
			cin >> Elementos_repetidos[j];
		}
		gotoxy(106, 15 + (j * 2));
		cout << "**" << endl;
		cout << "     *******************************************************************************************************" << endl;
		cout << "     **    El resultado es:                                                                               **" << endl;
		cout << "     *******************************************************************************************************" << endl;
		gotoxy(27, 17 + (j * 2));
		cout << Permutacion_con_repeticiones_Operacion(i, n);
	}
	else
	{
		gotoxy(0, 17);
		cout << "     **Error:La cantidad de elementos repetidos no puede ser mayor a la cantidad de elementos considerados**" << endl;
		cout << "     *******************************************************************************************************" << endl;
	}
	getch();
	system("cls");
}

void Analisis_combinatorio::Variacion_ordinaria()
{
	acum = 1;
	cout << "\n     *******************************************************************************************************" << endl;
	cout << "     **                      **  �Se toman todos **  �Importa ** �Se repiten **                           **" << endl;
	cout << "     **       Tipo de        **       los        **     el    **             **         F�rmula           **" << endl;
	cout << "     **     combinatoria     **    elementos?    **   Orden?  **  elementos? **                           **" << endl;
	cout << "     **                      **                  **           **             **                           **" << endl;
	cout << "     *******************************************************************************************************" << endl;
	cout << "     **                      **                  **           **             **                           **" << endl;
	cout << "     **   Variaci�n          **                  **           **             **  n                        **" << endl;
	cout << "     **                  3   **        No        **     S�    **      No     ** V  =m(m-1)(m-2)...(m-n+1) **" << endl;
	cout << "     **   Ordinaria          **                  **           **             **  m                        **" << endl;
	cout << "     **                      **                  **           **             **                           **" << endl;
	cout << "     *******************************************************************************************************" << endl;
	cout << "     **    Introduce el valor de n:                                                                       **" << endl;
	cout << "     *******************************************************************************************************" << endl;
	cout << "     **    Introduce el valor de m:                                                                       **" << endl;
	cout << "     *******************************************************************************************************" << endl;
	gotoxy(36, 13);
	cin >> n;
	gotoxy(36, 15);
	cin >> m;
	gotoxy(0, 17);
	if (n < m)
	{
		cout << "     **    El resultado es:                                                                               **" << endl;
		cout << "     *******************************************************************************************************" << endl;
		gotoxy(27, 17);
		cout << Variacion_ordinaria_operacion(n, m);
	}
	else
	{
		cout << "     **Error:La cantidad de elementos repetidos no puede ser mayor a la cantidad de elementos considerados**" << endl;
		cout << "     *******************************************************************************************************" << endl;
	}
	getch();
	system("cls");
}

void Analisis_combinatorio::variacion_con_repeticion()
{
	cout << "\n     *******************************************************************************************************" << endl;
	cout << "     **                      **  �Se toman todos **  �Importa ** �Se repiten **                           **" << endl;
	cout << "     **       Tipo de        **       los        **     el    **             **         F�rmula           **" << endl;
	cout << "     **     combinatoria     **    elementos?    **   Orden?  **  elementos? **                           **" << endl;
	cout << "     **                      **                  **           **             **                           **" << endl;
	cout << "     *******************************************************************************************************" << endl;
	cout << "     **                      **                  **           **             **                           **" << endl;
	cout << "     **   Variaci�n          **   S�             **           **             **            n              **" << endl;
	cout << "     **      con         4   **        y         **     S�    **      S�     **          VR = m^n         **" << endl;
	cout << "     **   Repetici�n         **            No    **           **             **            m              **" << endl;
	cout << "     **                      **                  **           **             **                           **" << endl;
	cout << "     *******************************************************************************************************" << endl;
	cout << "     **    Introduce el valor de n:                                                                       **" << endl;
	cout << "     *******************************************************************************************************" << endl;
	cout << "     **    Introduce el valor de m:                                                                       **" << endl;
	cout << "     *******************************************************************************************************" << endl;
	gotoxy(36, 13);
	cin >> n;
	gotoxy(36, 15);
	cin >> m;
	gotoxy(0, 17);
	if (n > 0 && m > 0)
	{
		cout << "     **    El resultado es:                                                                               **" << endl;
		cout << "     *******************************************************************************************************" << endl;
		gotoxy(28, 17);
		cout << pow(m, n);
	}
	else
	{
		cout << "     **    Error: alguno de los elementos es negativo.                                                    **" << endl;
		cout << "     *******************************************************************************************************" << endl;
	}
	getch();
	system("cls");
}

void Analisis_combinatorio::Combinacion_ordinaria()
{
	cout << "\n     *******************************************************************************************************" << endl;
	cout << "     **                      **  �Se toman todos **  �Importa ** �Se repiten **                           **" << endl;
	cout << "     **       Tipo de        **       los        **     el    **             **         F�rmula           **" << endl;
	cout << "     **     combinatoria     **    elementos?    **   Orden?  **  elementos? **                           **" << endl;
	cout << "     **                      **                  **           **             **                           **" << endl;
	cout << "     *******************************************************************************************************" << endl;
	cout << "     **                      **                  **           **             **                 m         **" << endl;
	cout << "     **   Combinacion        **                  **           **             **           n    Vn         **" << endl;
	cout << "     **                  5   **        No        **     No    **      No     **          C = ______       **" << endl;
	cout << "     **    ordinaria         **                  **           **             **           m    Pn         **" << endl;
	cout << "     **                      **                  **           **             **                           **" << endl;
	cout << "     *******************************************************************************************************" << endl;
	cout << "     **    Introduce el valor de n:                                                                       **" << endl;
	cout << "     *******************************************************************************************************" << endl;
	cout << "     **    Introduce el valor de m:                                                                       **" << endl;
	cout << "     *******************************************************************************************************" << endl;
	gotoxy(36, 13);
	cin >> n;
	gotoxy(36, 15);
	cin >> m;
	if (n < m)
	{
		gotoxy(0, 17);
		cout << "     **    El resultado es:                                                                               **" << endl;
		cout << "     *******************************************************************************************************" << endl;
		gotoxy(28, 17);
		cout << (Variacion_ordinaria_operacion(n, m) / Factorial(n));
	}
	else
	{
		gotoxy(0, 17);
		cout << "     **   Error: La cantidad de n elementos no puede ser mayor a la cantidad de elementos considerados    **" << endl;
		cout << "     *******************************************************************************************************" << endl;
	}
	getch();
	system("cls");
}

void Analisis_combinatorio::Combinacion_con_repeticion()
{
	cout << "\n     *******************************************************************************************************" << endl;
	cout << "     **                      **  �Se toman todos **  �Importa ** �Se repiten **                           **" << endl;
	cout << "     **       Tipo de        **       los        **     el    **             **         F�rmula           **" << endl;
	cout << "     **     combinatoria     **    elementos?    **   Orden?  **  elementos? **                           **" << endl;
	cout << "     **                      **                  **           **             **                           **" << endl;
	cout << "     *******************************************************************************************************" << endl;
	cout << "     **                      **                  **           **             **                           **" << endl;
	cout << "     **   Combinaci�n        **   S�             **           **             **       n    (m+n-1)        **" << endl;
	cout << "     **      con         6   **        y         **     No    **      S�     **     CR =_____________     **" << endl;
	cout << "     **   Repetici�n         **            No    **           **             **       m   n!*(m-1)!       **" << endl;
	cout << "     **                      **                  **           **             **                           **" << endl;
	cout << "     *******************************************************************************************************" << endl;
	cout << "     **    Introduce el valor de n:                                                                       **" << endl;
	cout << "     *******************************************************************************************************" << endl;
	cout << "     **    Introduce el valor de m:                                                                       **" << endl;
	cout << "     *******************************************************************************************************" << endl;
	gotoxy(36, 13);
	cin >> n;
	gotoxy(36, 15);
	cin >> m;
	gotoxy(0, 17);
	cout << "     **    El resultado es:                                                                               **" << endl;
	cout << "     *******************************************************************************************************" << endl;
	gotoxy(28, 17);
	cout << (Factorial(m + n - 1) / (Factorial(n) * Factorial(m - 1)));
	getch();
	system("cls");
}

class Electricidad_y_magnetismo : public Calculadoras
{
private:
	int i, j, n;
	double Carga_1, Carga_2, Angulo, Fuerzax, Fuerzay, k, Fuerza_total, Radio, Capacitor[20], Cantidad_capacitores, acum, prefijo_inverso, Carga_2_contador;
	char Prefijo, Circuito, Prefijo1[3];

public:
	Electricidad_y_magnetismo(double x1 = 0, double x2 = 0, double x3 = 0, double x4 = 0, double x5 = 0, double x6 = 0, double x7 = 0, double x8 = 0, char x9 = '0', double x10 = 0, double x11 = '0', char x12 = 0, char *x13 = "00", double x14 = 0, int x15 = 0, double x16 = 0)
	{
		Carga_1 = x1;
		Carga_2 = x2;
		Angulo = x3;
		x4 = Fuerzax;
		x5 = Fuerzay;
		k = x6;
		Fuerza_total = x7;
		Radio = x8;
		Prefijo = x9;
		for (i = 0; i < 20; i++)
		{
			Capacitor[i] = x10;
		}
		Circuito = x11;
		acum = x12;
		strcpy(Prefijo1, x13);
		prefijo_inverso = x14;
		n = x15;
		Carga_2_contador = x16;
	}
	~Electricidad_y_magnetismo() {}
	void Carga_puntual();
	void Carga_puntual_Fuerza();
	void Carga_puntual_Distancia();
	void Carga_puntual_Carga();
	void Capacitores();
};

void Electricidad_y_magnetismo::Carga_puntual()
{
	do
	{
		cout << "\n\n     ******************************************************************************************" << endl;
		cout << "     ** Selecciona la variable a determinar                                                  **" << endl;
		cout << "     ******************************************************************************************" << endl;
		cout << "     **                                                                                      **" << endl;
		cout << "     **  1.- Fuerza.                                                                         **" << endl;
		cout << "     **                                                                                      **" << endl;
		cout << "     **  2.- Distancia.                                                                      **" << endl;
		cout << "     **                                                                                      **" << endl;
		cout << "     **  3.- Una de las cargas.                                                              **" << endl;
		cout << "     **                                                                                      **" << endl;
		cout << "     **  4.- Salir.                                                                          **" << endl;
		cout << "     **                                                                                      **" << endl;
		cout << "     ******************************************************************************************" << endl;
		cout << "     ** Selecciona la opci�n deseada:                                                        **" << endl;
		cout << "     ******************************************************************************************" << endl;
		cout << "     Carga puntual." << endl;
		gotoxy(38, 15);
		cin >> i;
		system("cls");
		switch (i)
		{
		case 1:
			Carga_puntual_Fuerza();
			break;
		case 2:
			Carga_puntual_Distancia();
			break;
		case 3:
			Carga_puntual_Carga();
			break;
		case 4:
			break;
		default:
			error();
		}
	} while (i != 4);
}

void Electricidad_y_magnetismo::Carga_puntual_Fuerza()
{
	do
	{
		k = (8.99 * pow(10, 9));
		fflush(stdin);
		cout << "\n\n     ******************************************************************************************" << endl;
		cout << "     ** Carga 1:                  ** Carga 2:                    ** �ngulo (0):              **" << endl;
		cout << "     **                           **                             ** Radio(m):                **" << endl;
		cout << "     **                           **                             ** Prefijo:                 **" << endl;
		cout << "     ******************************************************************************************" << endl;
		cout << "     ** Fuerza:                   **      O  O                                  O  O         **" << endl;
		cout << "     **                           **     O C1 O                                O C2 O        **" << endl;
		cout << "     **                           **      O  O      Direcci�n de la fuerza      O  O         **" << endl;
		cout << "     ******************************************************************************************" << endl;
		cout << "     ** Fuerza en x:                         ** Fuerza en y:                                 **" << endl;
		cout << "     ******************************************************************************************" << endl;
		cout << "     ** Prefijos: Deci(10^-1):D Centi(10^-2):C Mili(10^-3):M Micro(10^-6):m Nano(10^-9):N    **" << endl;
		cout << "     ******************************************************************************************" << endl;
		cout << "     Carga puntual." << endl;
		gotoxy(22, 3);
		cin >> Carga_1;
		gotoxy(51, 3);
		cin >> Carga_2;
		gotoxy(82, 3);
		cin >> Angulo;
		gotoxy(82, 4);
		cin >> Radio;
		gotoxy(82, 5);
		cin >> Prefijo;
		switch (Prefijo)
		{
		case 'D':
			Carga_1 *= (pow(10, -1));
			Carga_2 *= (pow(10, -1));
			break;
		case 'C':
			Carga_1 *= (pow(10, -2));
			Carga_2 *= (pow(10, -2));
			break;
		case 'M':
			Carga_1 *= (pow(10, -3));
			Carga_2 *= (pow(10, -3));
			break;
		case 'm':
			Carga_1 *= (pow(10, -6));
			Carga_2 *= (pow(10, -6));
			break;
		case 'n':
			Carga_1 *= (pow(10, -9));
			Carga_2 *= (pow(10, -9));
			break;
		}
		if (Carga_1 < 0 && Carga_2 > 0 && Carga_1 != Carga_2)
		{
			gotoxy(48, 8);
			cout << "----------------------------->";
			gotoxy(19, 4);
			cout << "Negativa";
			gotoxy(48, 4);
			cout << "Positiva";
		}
		if (Carga_1 > 0 && Carga_2 < 0 && Carga_1 != Carga_2)
		{
			gotoxy(48, 8);
			cout << "<-----------------------------";
			gotoxy(19, 4);
			cout << "Positiva";
			gotoxy(48, 4);
			cout << "Negativa";
		}
		if (Carga_1 > 0 && Carga_2 > 0 && Carga_2 != 0)
		{
			gotoxy(37, 8);
			cout << "<--";
			gotoxy(86, 8);
			cout << "-->";
			gotoxy(19, 4);
			cout << "Positiva";
			gotoxy(48, 4);
			cout << "Positiva";
		}
		if (Carga_1 < 0 && Carga_2 < 0 && Carga_2 != 0)
		{
			gotoxy(37, 8);
			cout << "<--";
			gotoxy(86, 8);
			cout << "-->";
			gotoxy(19, 4);
			cout << "Negativa";
			gotoxy(48, 4);
			cout << "Negativa";
		}
		Fuerza_total = ((k * Carga_1 * Carga_2 * pow(Radio, -2)));
		Fuerzax = (Fuerza_total * cos(Angulo * (pi / 180)));
		Fuerzay = (Fuerza_total * sin(Angulo * (pi / 180)));
		gotoxy(10, 8);
		cout << fixed << setprecision(4) << Fuerza_total << " N";
		gotoxy(22, 11);
		cout << fixed << setprecision(4) << Fuerzax << " N";
		gotoxy(61, 11);
		cout << fixed << setprecision(4) << Fuerzay << " N";
		getch();
		repeticion(30, 3);
		system("cls");
		fflush(stdin);
	} while (d != 2);
}

void Electricidad_y_magnetismo::Carga_puntual_Distancia()
{
	do
	{
		k = (8.99 * pow(10, 9));
		fflush(stdin);
		cout << "\n\n     ******************************************************************************************" << endl;
		cout << "     ** Carga 1:                  ** Carga 2:                    ** �ngulo (0):              **" << endl;
		cout << "     **                           **                             ** Radio(m):                **" << endl;
		cout << "     **                           **                             ** Prefijo:                 **" << endl;
		cout << "     ******************************************************************************************" << endl;
		cout << "     ** Fuerza:                   **      O  O                                  O  O         **" << endl;
		cout << "     **                           **     O C1 O                                O C2 O        **" << endl;
		cout << "     **                           **      O  O      Direcci�n de la fuerza      O  O         **" << endl;
		cout << "     ******************************************************************************************" << endl;
		cout << "     ** Fuerza en x:                         ** Fuerza en y:                                 **" << endl;
		cout << "     ******************************************************************************************" << endl;
		cout << "     ** Prefijos: Deci(10^-1):D Centi(10^-2):C Mili(10^-3):M Micro(10^-6):m Nano(10^-9):N    **" << endl;
		cout << "     ******************************************************************************************" << endl;
		cout << "     Carga puntual." << endl;
		gotoxy(22, 3);
		cin >> Carga_1;
		gotoxy(51, 3);
		cin >> Carga_2;
		gotoxy(82, 3);
		cin >> Angulo;
		gotoxy(82, 5);
		cin >> Prefijo;
		gotoxy(10, 8);
		cin >> Fuerza_total;
		switch (Prefijo)
		{
		case 'D':
			Carga_1 *= (pow(10, -1));
			Carga_2 *= (pow(10, -1));
			break;
		case 'C':
			Carga_1 *= (pow(10, -2));
			Carga_2 *= (pow(10, -2));
			break;
		case 'M':
			Carga_1 *= (pow(10, -3));
			Carga_2 *= (pow(10, -3));
			break;
		case 'm':
			Carga_1 *= (pow(10, -6));
			Carga_2 *= (pow(10, -6));
			break;
		case 'n':
			Carga_1 *= (pow(10, -9));
			Carga_2 *= (pow(10, -9));
			break;
		}
		Radio = sqrt((k * Carga_1 * Carga_2 * pow(Fuerza_total, -1)));
		gotoxy(82, 4);
		cout << fixed << setprecision(4) << Radio << " m";
		Fuerzax = (Fuerza_total * cos(Angulo * (pi / 180)));
		Fuerzay = (Fuerza_total * sin(Angulo * (pi / 180)));
		gotoxy(22, 11);
		cout << fixed << setprecision(4) << Fuerzax << " N";
		gotoxy(61, 11);
		cout << fixed << setprecision(4) << Fuerzay << " N";

		if (Carga_1 < 0 && Carga_2 > 0 && Carga_1 != Carga_2)
		{
			gotoxy(48, 8);
			cout << "----------------------------->";
			gotoxy(19, 4);
			cout << "Negativa";
			gotoxy(48, 4);
			cout << "Positiva";
		}
		if (Carga_1 > 0 && Carga_2 < 0 && Carga_1 != Carga_2)
		{
			gotoxy(48, 8);
			cout << "<-----------------------------";
			gotoxy(19, 4);
			cout << "Positiva";
			gotoxy(48, 4);
			cout << "Negativa";
		}
		if (Carga_1 > 0 && Carga_2 > 0 && Carga_2 != 0)
		{
			gotoxy(37, 8);
			cout << "<--";
			gotoxy(86, 8);
			cout << "-->";
			gotoxy(19, 4);
			cout << "Positiva";
			gotoxy(48, 4);
			cout << "Positiva";
		}
		if (Carga_1 < 0 && Carga_2 < 0 && Carga_2 != 0)
		{
			gotoxy(37, 8);
			cout << "<--";
			gotoxy(86, 8);
			cout << "-->";
			gotoxy(19, 4);
			cout << "Negativa";
			gotoxy(48, 4);
			cout << "Negativa";
		}
		getch();
		repeticion(30, 3);
		system("cls");
		fflush(stdin);
	} while (d != 2);
}

void Electricidad_y_magnetismo::Carga_puntual_Carga()
{
	do
	{
		Carga_2_contador = 1;
		k = (8.99 * pow(10, 9));
		fflush(stdin);
		cout << "\n\n     ******************************************************************************************" << endl;
		cout << "     ** Carga 1:                  ** Carga 2:                    ** �ngulo (0):              **" << endl;
		cout << "     **                           **                             ** Radio(m):                **" << endl;
		cout << "     **                           **                             ** Prefijo:                 **" << endl;
		cout << "     ******************************************************************************************" << endl;
		cout << "     ** Fuerza:                   **      O  O                                  O  O         **" << endl;
		cout << "     **                           **     O C1 O                                O C2 O        **" << endl;
		cout << "     **                           **      O  O      Direcci�n de la fuerza      O  O         **" << endl;
		cout << "     ******************************************************************************************" << endl;
		cout << "     ** Fuerza en x:                         ** Fuerza en y:                                 **" << endl;
		cout << "     ******************************************************************************************" << endl;
		cout << "     ** Prefijos: Deci(10^-1):D Centi(10^-2):C Mili(10^-3):M Micro(10^-6):m Nano(10^-9):N    **" << endl;
		cout << "     ******************************************************************************************" << endl;
		cout << "     Carga puntual." << endl;
		gotoxy(22, 3);
		cin >> Carga_1;
		gotoxy(82, 3);
		cin >> Angulo;
		gotoxy(82, 4);
		cin >> Radio;
		gotoxy(82, 5);
		cin >> Prefijo;
		gotoxy(10, 8);
		cin >> Fuerza_total;
		switch (Prefijo)
		{
		case 'D':
			Carga_1 *= (pow(10, -1));
			Carga_2_contador *= (pow(10, 1));
			strcpy(Prefijo1, "DC");
			break;
		case 'C':
			Carga_1 *= (pow(10, -2));
			Carga_2_contador *= (pow(10, 2));
			strcpy(Prefijo1, "CC");
			break;
		case 'M':
			Carga_1 *= (pow(10, -3));
			Carga_2_contador *= (pow(10, 3));
			strcpy(Prefijo1, "MC");
			break;
		case 'm':
			Carga_1 *= (pow(10, -6));
			Carga_2_contador *= (pow(10, 6));
			strcpy(Prefijo1, "mC");
			break;
		case 'n':
			Carga_1 *= (pow(10, -9));
			Carga_2_contador *= (pow(10, 9));
			strcpy(Prefijo1, "nC");
			break;
		}
		Carga_2 = ((Fuerza_total * pow(Radio, 2)) / (Carga_1 * k));
		Carga_2 *= Carga_2_contador;
		gotoxy(51, 3);
		cout << fixed << setprecision(4) << Carga_2 << " " << Prefijo1;
		Fuerzax = (Fuerza_total * cos(Angulo * (pi / 180)));
		Fuerzay = (Fuerza_total * sin(Angulo * (pi / 180)));
		gotoxy(22, 11);
		cout << fixed << setprecision(4) << Fuerzax << " N";
		gotoxy(61, 11);
		cout << fixed << setprecision(4) << Fuerzay << " N";

		if (Carga_1 < 0 && Carga_2 > 0 && Carga_1 != Carga_2)
		{
			gotoxy(48, 8);
			cout << "----------------------------->";
			gotoxy(19, 4);
			cout << "Negativa";
			gotoxy(48, 4);
			cout << "Positiva";
		}
		if (Carga_1 > 0 && Carga_2 < 0 && Carga_1 != Carga_2)
		{
			gotoxy(48, 8);
			cout << "<-----------------------------";
			gotoxy(19, 4);
			cout << "Positiva";
			gotoxy(48, 4);
			cout << "Negativa";
		}
		if (Carga_1 > 0 && Carga_2 > 0 && Carga_2 != 0)
		{
			gotoxy(37, 8);
			cout << "<--";
			gotoxy(86, 8);
			cout << "-->";
			gotoxy(19, 4);
			cout << "Positiva";
			gotoxy(48, 4);
			cout << "Positiva";
		}
		if (Carga_1 < 0 && Carga_2 < 0 && Carga_2 != 0)
		{
			gotoxy(37, 8);
			cout << "<--";
			gotoxy(86, 8);
			cout << "-->";
			gotoxy(19, 4);
			cout << "Negativa";
			gotoxy(48, 4);
			cout << "Negativa";
		}
		getch();
		repeticion(30, 3);
		system("cls");
		fflush(stdin);
	} while (d != 2);
}

void Electricidad_y_magnetismo::Capacitores()
{
	do
	{
		acum = 0;
		prefijo_inverso = 1;
		fflush(stdin);
		cout << "\n     ***************************************************************************************************************************************" << endl;
		cout << "     **                                                                                      **  Tipos de circuitos: Serie/S  Paralelo/P  **" << endl;
		cout << "     **   Tipo de circuito:                                                                  **  Prefijos:                                **" << endl;
		cout << "     **                                                                                      **  Deci(10^-1):D                            **" << endl;
		cout << "     **   Prefijo:                                                                           **  Centi(10^-2):C                           **" << endl;
		cout << "     **                                                                                      **  Mili(10^-3):M                            **" << endl;
		cout << "     **   Cantidad de capacitores:                                                           **  Micro(10^-6):m                           **" << endl;
		cout << "     **                                                                                      **  Nano(10^-9):N                            **" << endl;
		cout << "     **   Resultado:                                                                         **                                           **" << endl;
		cout << "     **                                                                                      **                                           **" << endl;
		cout << "     ******************************************************************************************                                           **" << endl;
		cout << "     **                                                                                      **                                           **" << endl;
		cout << "     ******************************************************************************************                                           **" << endl;
		cout << "     **                                                                                      **                                           **" << endl;
		cout << "     ***************************************************************************************************************************************" << endl;
		cout << "   	                                                                                           Capacitancia. " << endl;
		gotoxy(28, 3);
		cin >> Circuito;
		gotoxy(19, 5);
		cin >> Prefijo;
		gotoxy(35, 7);
		cin >> Cantidad_capacitores;
		for (j = 0; j < Cantidad_capacitores; j++)
		{
			gotoxy(0, 12 + (j * 2));
			cout << "     **    Capacitor " << j + 1 << ":";
			gotoxy(93, 12 + (j * 2));
			cout << "**\n     ******************************************************************************************";
			gotoxy(25, 12 + (j * 2));
			cin >> Capacitor[j];
		}
		switch (Prefijo)
		{
		case 'D':
			for (i = 0; i < Cantidad_capacitores; i++)
			{
				Capacitor[i] *= (pow(10, -1));
				strcpy(Prefijo1, "DF");
				prefijo_inverso = pow(10, 1);
			}
			break;
		case 'C':
			for (i = 0; i < Cantidad_capacitores; i++)
			{
				Capacitor[i] *= (pow(10, -2));
				strcpy(Prefijo1, "CF");
				prefijo_inverso = pow(10, 2);
			}
			break;
		case 'M':
			for (i = 0; i < Cantidad_capacitores; i++)
			{
				Capacitor[i] *= (pow(10, -3));
				strcpy(Prefijo1, "MF");
				prefijo_inverso = pow(10, 3);
			}
			break;
		case 'm':
			for (i = 0; i < Cantidad_capacitores; i++)
			{
				Capacitor[i] *= (pow(10, -6));
				strcpy(Prefijo1, "mF");
				prefijo_inverso = pow(10, 6);
			}
			break;
		case 'n':
			for (i = 0; i < Cantidad_capacitores; i++)
			{
				Capacitor[i] *= (pow(10, -9));
				strcpy(Prefijo1, "nF");
				prefijo_inverso = pow(10, 9);
			}
			break;
		}
		if (Circuito == 'S' || Circuito == 's')
		{
			for (i = 0; i < Cantidad_capacitores; i++)
			{
				acum += (1 / (Capacitor[i]));
			}
			gotoxy(21, 9);
			cout << (1 / acum) * prefijo_inverso << " " << Prefijo1;
		}
		if (Circuito == 'P' || Circuito == 'p')
		{
			for (i = 0; i < Cantidad_capacitores; i++)
			{
				acum += (Capacitor[i]);
			}
			gotoxy(21, 9);
			cout << acum * prefijo_inverso << " " << Prefijo1;
		}
		getch();
		repeticion(30, 3);
		system("cls");
		fflush(stdin);
	} while (d != 2);
}

int main()
{
	setlocale(LC_CTYPE, "Spanish");
	int n, e, i, acceso = 0, t = 0;
	float z;
	Calculadoras Funciones;
	Calculadora Calcu_Sencilla;
	Factorizacion Calculadora_factorizacion;
	Calculadora_complejos Calcu_Complex;
	Traductores Binario;
	Juego Order66;
	Analisis_combinatorio Combinaciones;
	Electricidad_y_magnetismo Proyecto_final;
	system("color 2");
	cout << "\n\n     ************************************************************************************************" << endl;
	cout << "     **                                                                                            **" << endl;
	cout << "     **  ******* *** *** **      ******* **      * **      ******* ******* ****** ******* *******  **" << endl;
	cout << "     **  **      **    * **      **      **      * **      **    * **    * **  ** **   ** **    *  **" << endl;
	cout << "     **  **      **    * **      **      **      * **      **    * **    * *    * **   ** **    *  **" << endl;
	cout << "     **  **      **    * **      **      **      * **      **    * **    * *    * **   ** **    *  **" << endl;
	cout << "     **  **      ******* **      **      **      * **      ******* **    * *    * ******  *******  **" << endl;
	cout << "     **  **      **    * **      **      **      * **      **    * **    * *    * **   ** **    *  **" << endl;
	cout << "     **  **      **    * **      **      **      * **      **    * **    * *    * **   ** **    *  **" << endl;
	cout << "     **  **      **    * **      **      **      * **      **    * **    * **  ** **   ** **    *  **" << endl;
	cout << "     **  ******* **    * ******* ******* ********* ******* **    * ******* ****** **   ** **    *  **" << endl;
	cout << "     **                                                                                            **" << endl;
	cout << "     ************************************************************************************************" << endl;
	cout << "     ****Alumno: Christian Mata Ju�res*****Materia: Programaci�n Orientada a Objetos*****************" << endl;
	cout << "     ****Profesor: Osornio Soto Roberto****GRUPO: 2CV35**************************VERSI�N 2.0*********" << endl;
	cout << "     ************************************************************************************************" << endl;
	getch();
	system("cls");
	cout << "\n\n     ******************************************************************************************" << endl;
	cout << "     **   Introducci�n:                                                                      **" << endl;
	cout << "     **                                                                                      **" << endl;
	cout << "     **   Este programa es una a herramienta de ayuda para los alumnos de primer semestre    **" << endl;
	cout << "     **   pensada principalmente para realizar aquellas actividades matem�ticas de manera    **" << endl;
	cout << "     **   sencilla y r�pida. Si bien el alumno que lo utilice debe aprender los m�todos      **" << endl;
	cout << "     **   para resolver los problemas matem�ticos contemplados en este programa. El mismo    **" << endl;
	cout << "     **   se encuentra pensado para que a largo plazo, y contemplando aquellas lagunas ge    **" << endl;
	cout << "     **   neradas por el tiempo, el usuario pueda aprovechar el software de tal forma que    **" << endl;
	cout << "     **   pueda resolver los problemas que se le presenten de manera pr�ctica y eficiente.   **" << endl;
	cout << "     **                                                                                      **" << endl;
	cout << "     ******************************************************************************************" << endl;
	cout << "     **   En esta momento te encuentras estudiando con la versi�n 2.0                        **" << endl;
	cout << "     ******************************************************************************************" << endl;
	getch();
	system("cls");
	do
	{
		cout << "\n     ******************************************************************************************" << endl;
		cout << "     **  Calculadora.                                                                        **" << endl;
		cout << "     ******************************************************************************************" << endl;
		cout << "     **  �Qu� operaci�n deseas realizar?                                                     **" << endl;
		cout << "     ******************************************************************************************" << endl;
		cout << "     **  00.- Cambiar color.                                                                 **" << endl;
		cout << "     **  01.- Calculadora.                                                                   **" << endl;
		cout << "     **  02.- Ecuaciones de primer y segundo grado.                                          **" << endl;
		cout << "     **  03.- Calculadora de complejos.                                                      **" << endl;
		cout << "     **  04.- Traductor de binarios/texto.                                                   **" << endl;
		cout << "     **  05.- Scape (juego en construcci�n).                                                 **" << endl;
		cout << "     **  06.- Carga puntual.                                                                 **" << endl;
		cout << "     **  07.- Capacitancia.                                                                  **" << endl;
		cout << "     **  08.- An�lisis combinatorio.                                                         **" << endl;
		cout << "     **  09.- Salir                                                                          **" << endl;
		cout << "     **  10.- Notas de la actualizaci�n.                                                     **" << endl;
		cout << "     ******************************************************************************************" << endl;
		cout << "     **  Presiona el n�mero de la operaci�n deseada:                                         **" << endl;
		cout << "     ******************************************************************************************" << endl;

		Funciones.gotoxy(53, 18);
		cin >> n;
		if (t == 1 && n == 66)
		{
			Funciones.gotoxy(53, 14);
			cout << "You have played the Beta already!";
			t++;
			getch();
		}
		system("cls");
		switch (n)
		{
		case 0:
			Funciones.color();
			break;
		case 1:
			Calcu_Sencilla.Modulo();
			break;
		case 2:
			Calculadora_factorizacion.raices2dogrado();
			break;
		case 3:
			Calcu_Complex.calculadora();
			break;
		case 4:
			Binario.traductorbintext();
			break;
		case 5:
			if (t == 0)
			{
				Order66.order66();
				t++;
			}
			break;
		case 6:
			Proyecto_final.Carga_puntual();
			break;
		case 7:
			Proyecto_final.Capacitores();
			break;
		case 8:
			Combinaciones.Caculadora_analisis_combinatorio();
			break;
		case 9:
			break;
		case 10:
			Funciones.Notas_parche();
			break;
		default:
			Funciones.error();
			break;
		}
	} while (n != 9);
	Funciones.Despedida();
	return (0);
}
