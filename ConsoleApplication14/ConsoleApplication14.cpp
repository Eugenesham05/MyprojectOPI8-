#include <iostream> 
#include <iomanip> 
#include "windows.h"
using namespace std;

void ini(int a[])
{
	for (int i = 0; i < 10; i++)
		a[i] = rand() % (101) - 70;
} 
void mass_t(int a[], int t[])
{
	for (int i = 0; i < 10; i++)
		if (a[i] > 0) t[i] = a[i];
		else t[i] = i;
}

int main()
{
	const int m = 10;
	int n[m], b[m];
	ini(n);
	mass_t(n, b);
	for (int i = 0; i < m; i++)
		cout << n[i] << '\t' << b[i] << endl;
	system("pause");
	return 0;
}

