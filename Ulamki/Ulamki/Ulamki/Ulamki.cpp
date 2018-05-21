// Ulamki.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include "Ulamek.h"

#include <iostream>

#include <cstdlib>
#include <ctime>
#include <iostream>

//biblioteki do zapsywania do pliku



using namespace std;


int main()
{
	Ulamek a(8, 16);
	a.redukcja();

	/*

	Ulamek a(2, 4), b(1, 3);
	cout << a << endl; // rezultat na consoli: 1/2
	cout << a + b << endl; // rezultat na consoli: 5/6
	Ulamek c(1, 2);
	int i = 1;
	cout << c + i << endl;
	Ulamek d(1, 3);
	int i1 = 2;
	cout << i1 + d << endl; // rezultat na consoli: 7/3
	Ulamek e(1, 2), g(2, 7);
	e += g;
	cout << e << endl; // rezultat na consoli: 13/14
	Ulamek f(1, 2);
	int i2 = 2;
	f += i2;
	cout << f << endl; // rezultat na consoli: 5/2
	Ulamek h(1, 2);
	cout << -h << endl; // rezultat na consoli: -1/2
	Ulamek j(1, 2), k(1, 3);
	cout << j - k << endl; // rezultat na consoli: 1/6
	Ulamek a1(1, 2), b1(2, 7);
	a1 -= b1;
	cout << a1 << endl; // rezultat na consoli: 3/14
	Ulamek a2(1, 2);
	int i3 = 2;
	a2 -= i3;
	cout << a2 << endl; // rezultat na consoli: -3/2
	Ulamek a3(1, 2), b3(2, 7);
	a3 -= b3;
	cout << a3 << endl; // rezultat na consoli: 3/14
	Ulamek a4(1, 2), b4(1, 3);
	cout << a4 * b4 << endl; // rezultat na consoli: 1/6
	Ulamek a6(1, 2);
	int i4 = 1;
	cout << a6 * i4 << endl; // rezultat na consoli: 1/2
	Ulamek a7(1, 3);
	int i6 = 2;
	cout << i6 * a7 << endl; // rezultat na consoli: 2/3
							 //ssssssssssss
	Ulamek a8(1, 2), b8(2, 7);
	a8 *= b8;
	cout << a8 << endl; // rezultat na consoli: 1/7
	Ulamek c5(1, 2);
	int i8 = 2;
	c5 *= i8;
	cout << b3 << endl; // rezultat na consoli: 2/7*
	Ulamek d1(1, 2), f1(1, 3);
	cout << d1 / f1 << endl; // rezultat na consoli: 3/2
	Ulamek d2(1, 2);
	int i10 = 1;
	cout << d2 / i10 << endl; // rezultat na consoli: 1/2
	Ulamek d3(1, 3);
	int i11 = 2;
	cout << i11 / d3 << endl; // rezultat na consoli: 6/1
	Ulamek d7(1, 2), f7(2, 7);
	d7 /= f7;
	cout << d7 << endl; // rezultat na consoli: 7/4
	Ulamek z(1, 2);
	int i12 = 2;
	z /= i12;
	cout << z << endl; // rezultat na consoli: ?
	Ulamek q1(1, 2), w1(2, 4);
	if (q1 == w1) cout << true << "  true" << endl;
	else cout << false << "  false" << endl;  // rezultat na consoli: true
	if (q1 != w1) cout << true << "  true" << endl;
	else cout << false << "  false" << endl; // rezultat na consoli: false
	Ulamek q2(1, 2), w2(1, 3);
	if (q2 <= w2) cout << true << "  true" << endl;
	else cout << false << "  false" << endl;  // rezultat na consoli: false
	Ulamek q3(1, 4), w3(1, 2);
	if (q3 < w3) cout << true << "  true" << endl;
	else cout << false << "  false" << endl; // rezultat na consoli: true
	Ulamek q4(1, 2), w4(2, 4);
	if (q4 >= w4) cout << true << "  true" << endl;
	else cout << false << "  false" << endl;  // rezultat na consoli: true
	Ulamek q5(1, 2), w5(1, 3);
	if (q5 > w5) cout << true << "  true" << endl;
	else cout << false << "  false" << endl;  // rezultat na consoli: true
	Ulamek q6(1, 2);
	++q6;
	cout << q6 << endl; // rezultat na consoli: 3\2
	Ulamek q8(1, 2);
	--q8;
	cout << q8 << endl; // rezultat na consoli: -1\2
	Ulamek q10(1, 2);
	cout << q10++ << endl; // rezultat na consoli: 1\2
	cout << q10 << endl; // rezultat na consoli: 3\2
	Ulamek s1(1, 2);
	cout << s1-- << endl;; // rezultat na consoli: 1\2
	cout << s1 << endl;; // rezultat na consoli: -1\2
	system("pause");
	*/
    return 0;
}

