#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;

int main()
{
	///S3Ex1
	/*int n, s, c, d, t, k, aux;
	cin >> n;
	s = 0;
	t = 0;
	aux = n;
	while (aux)
	{
		c = aux % 10;
		k = 0;
		for (d = 1; d <= c; d++)
		{
			if (aux%d == 0)
				k++;
		}
		if (k == 2)
		{
			s = s + c;
			t++;
		}
		aux = aux / 10;
	}
	if (t == 0)
		cout << 0;
	else
		cout << s;*/

	///S3Ex2
	/*int n, i, v[101], t = 0, a, b;
	cin >> n;
	for (i = 0; i <= n - 1; i++)
		cin >> v[i];
	for (i = 0; i <= n - 1; i++)
	{
		if (v[i] % 2 != 0)
		{
			a = v[i];
			i = n;
			t++;
		}
	}
	for (i = n - 1; i >= 0; i--)
	{
		if (v[i] % 2 == 0)
		{
			b = v[i];
			i = 0;
			t++;
		}
	}
	if (t == 2)
		cout << a << " " << b;
	else
		cout << "Nu exista";*/

	///S3Ex3
	/*ifstream f("bac.txt");
	int n, v[100], i, a, k, t, k2, t2;
	i = 0;
	n = 0;
	t2 = 0;
	while (f >> a)
	{
		v[i] = a;
		n++;
		i++;
	}
	for (i = 0; i <= n - 1; i++)
	{
		if(v[i]>v[i+1] && i+1 <= n-1)
		{
			swap(v[i], v[i + 1]);
			i = -1;
		}
	}
	k = 0;
	k2 = 0;
	for (i = 0; i <= n - 1; i++)
	{
		if (v[i + 1] == v[i] + 1 || v[i+1]==v[i])
		{
			t = i;
			k++;
		}
		else if (k >= k2)
		{
			k2 = k;
			a = i-k;
			k = 0;
		}
		else
			k = 0;
	}
	for (i = a; i <= k2; i++)
	{
		if (v[i] != v[i + 1] && i + 1 <= k2 || i == k2 && v[i - 1] != v[i])
			t2++;
	}
	cout << t2;*/
}