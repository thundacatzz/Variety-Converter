#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

double Power(double n, int p);
long hms_to_secs(int h, int m, int s);
void Swap(int& a, int& b);

int main()
{
	double n;
	int p;
	cout << "Enter number 'n' and integer exponent 'p'" << endl;
	cout << "Number n: ";
	cin >> n;
	cout << endl << "Integer exponent p: ";
	cin >> p;
	cout << endl;
	cout << n << " to the power " << p << " is " << Power(n, p) << endl;

	int h = 1, m, s;
	while (h > 0)
	{
		cout << "Enter a time to convert into seconds in the following format: hh:mm:ss" << endl << "Enter a negative value for hours to quit." << endl;
		cin >> h;
		cin.ignore(1, ':');
		if (h < 0)
		{
			break;
		}
		cin >> m;
		cin.ignore(1, ':'); 
		cin >> s;
		cout << h << ':' << m << ':' << s << " is " << hms_to_secs(h, m, s) << " seconds." << endl;
	}

	int a, b;
	cout << "Enter value 'a' and value 'b' to swap\nValue 'a': ";
	cin >> a;
	cout << "\nValue 'b': ";
	cin >> b;
	Swap(a, b);
}

double Power(double n, int p)
{
	double total = n;
	if (p == 0)
	{
		total = 1;
	}
	if (p > 0)
	{
		for (int i = 1; i < p; i++)
		{
			total *= n;
		}
	}
	if (p < 0)
	{
		for (int i = 0; i > p; i--)
		{
			total /= n;
		}
	}
	return total;
}

long hms_to_secs(int h, int m, int s)
{
	long secs = (h * 3600) + (m * 60) + s;
	return secs;
}

void Swap(int& a, int& b)
{
	cout << "a was: " << a << '\n' << "b was: " << b << endl;
	int c = a;
	a = b;
	b = c;
	cout << "a is : " << a << '\n' << "b is: " << b << endl;
	return;
}