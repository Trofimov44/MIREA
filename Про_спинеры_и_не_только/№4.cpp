#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
const int Max = 100;
int c[Max];
int check(int n)
{
	
	if (n <= 36)
	{
		return (n - 1) / 4;
	}
	else
	{
		return 8 - (n - 37) / 2;
	}
}
int main() {
	setlocale(0, "");
	cout << "Введите количество свободных мест в вагоне от 0 до 54" << endl;
	int n;
	int ans = 0;
	int num = 0;
	if ((cin >> n) and (-1<n<55) and (n != '.'  &&  n != ','))
	{
		for (int i = 1; i <= n; i++)
		{
			int a;
			if (cin >> a)
			{
				c[check(a)] += 1;
			}

		}
		for (int i = 0; i < 9; i++)
		{
			if (c[i] == 6)
			{
				num += 1;
				ans = max(ans, num);
			}
			else
			{
				num = 0;
			}
		}
		cout << ans;
	}
	else
	{
		cout << "Введите положительное целовее число от 0 до 54";
	}
	return 0;
}
