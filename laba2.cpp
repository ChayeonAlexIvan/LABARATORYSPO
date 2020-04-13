#include <iostream>
#include <math.h>
using namespace std;

void F1(double* x, double n)
{
	int n1 = 0;
	for (int i = 0; i < n; i++)
		if (x[i] < 0)
			n1++;
	double* m1 = new double[n1];
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (x[i] < 0)
		{
			m1[j] = x[i];
			j++;
		}
	}
	cout << "New massiv: ";
	for (int j = 0; j < n1; j++)
	{
		cout << m1[j] << " ";
	}
}

int main()
{
	int n;
	cout << "Razmer mas = ";
	cin >> n;
	double* m = new double[n];
	cout << "Massiv: ";
	for (int i = 0; i < n; i++)
	{
		cin >> m[i];
	}
	F1(m, n);
	system("pause");
	cout << endl;
	return 0;
}
