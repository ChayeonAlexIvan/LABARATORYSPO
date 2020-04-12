#include <math.h>
#include<iostream>
using namespace std;

float F1(float x)
{
	float result = 0;

	if (x >= 0)
	{
		result = pow(x, x);
	}
	else
	{
		result = 2 * (x * x);
	}
	return result;
}

float F2(float& x)
{
	x = F1(x);
	return x;
}

int main()
{
	int N, s;
	cout << "Vvedite start = ";
	cin >> s;
	cout << "Vvedite stop = ";
	cin >> N;
	cout << "funkciy 1:" << endl;
	for (float i = s; i < N; i++)
	{
		cout << " i = " << i << "; F1(i) = " << F1(i) << endl;
	}
	cout << "funkciy 2:" << endl;
	for (float i = s; i < N; i++)
	{
		cout << " i = " << i << "; F2(i) = " << F2(i) << endl;
	}

	system("pause");
	return 0;
}
