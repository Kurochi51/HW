#include<iostream>
using namespace std;

int main()
{
	int a[10][10], n, i, j, c, b, t, m;
	cin >> n;
	m = n * n;
	i = 0;
	c = 0;
	b = n - 1;
	t = 1;
	while (m > 0)
	{
		for (j = c; j <= b; j++)
		{
			if (m > 0)
			{
				a[i][j] = t;
				m--;
			}
		}
		j--;
		c++;
		t++;
		for (i = c; i <= b; i++)
		{
			if (m > 0)
			{
				a[i][j] = t;
				m--;
			}
		}
		i--;
		b--;
		c--;
		t++;
		for (j = b; j >= c; j--)
		{
			if (m > 0)
			{
				a[i][j] = t;
				m--;
			}
		}
		t++;
		c++;
		j++;
		for (i = b; i >= c; i--)
		{
			if (m > 0)
			{
				a[i][j] = t;
				m--;
			}
		}
		i++;
		t++;
	}
	for (i = 0; i <= n - 1; i++)
	{
		for (j = 0; j <= n - 1; j++)
		{
			if(a[i][j]<=9)
				cout << a[i][j] << " " << " ";
			else
				cout << a[i][j] << " ";
		}
		cout << endl;
	}
}