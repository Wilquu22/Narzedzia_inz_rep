#include <iostream>

using namespace std;
int main()
{
	int a, b, c;

	cout << "podaj pierwsza liczbe";
	cin >> a;

	cout << "podaj druga liczbę";
	cin >> b;

	cout << "podaj trzecia liczbe";
	cin >> c;

	if (a > b && b > c)

		cout << "srodkowa liczba to:";
	cout << b;

	if (c > b && b > a)
		cin >> b;

	if (b < c && a > c)
		cin >> b;

	

	return 0;

}
