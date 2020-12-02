#include <iostream>

using namespace std;

int S(int capacity, int initialStock, int num_of_periods, int alfa[], int beta[])
{
	int x[20], v[20], u[20];
	for (int j = 0; j < 20; j++)
	{
		x[j] = v[j] = u[j] = 0;
	}
	int i = num_of_periods;
	if (beta[i] - 1 <= 0)
	{
		v[i] = 0;
	}
	else
	{
		v[i] = x[i];
	}
	if ((-alfa[i]) + 1 <= 0)
	{
		u[i] = 0;
	}
	else
	{
		u[i] = capacity - x[i];
	}
	if (i == num_of_periods)
	{
		x[i] = v[i] - u[i];
		return (beta[i] * v[i] - alfa[i] * u[i] + x[i] + u[i] - v[i]);
		i -= 1;
	}
	else if (i == 0)
	{
		x[i] = 30;
		v[i] = 0;
		u[i] = 0;
	}
	else
	{
		x[i] = x[i + 1] + v[i] - u[i];
		return (beta[i] * v[i] - alfa[i] * u[i] + S(capacity, initialStock, i - 1, alfa, beta));
	}
}

int main()
{
	int alfa[] = { 20,2,40,10,15,30 };
	int beta[] = { 10,50,2,10,3,1 };
	cout << S(50, 30, 6, alfa, beta);

	return 0;
}