#include <iostream>

using namespace std;

void Draw(float arr[3][5])
{
	cout << "Simplex table: \n\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << "\n\n";
	}
}

void Transform(float arr[3][5])
{

}
void Pivot(float arr[3][5])
{
	int pivot = 0;
	int lowest1 = 0;
	int col = 1, row = 1;
	for (int j = 0; j < 5; j++)
	{
		if (arr[2][j] < lowest1)
		{
			lowest1 = arr[2][j];
			col = j + 1;
		}
	}
	int lowest2 = 10000;
	for (int i = 0; i < 2; i++)
	{
		float ratio = arr[i][4] / arr[i][col - 1];
		if (ratio < lowest2)
		{
			pivot = arr[i][col - 1];
			lowest2 = ratio;
			row = i + 1;
		}
	}
	cout << "Pivot column: " << col << ", row: " << row << endl;
	cout << "Pivot element: " << pivot << endl;

	for (int j = 0; j < 5; j++)
	{
		arr[row - 1][j] /= pivot;
	}
}

bool EndSimplex(float arr[3][5])
{
	int count = 0;
	for (int j = 0; j < 5; j++)
	{
		if (arr[2][j] <= 0)
			count++;
	}
	if (count == 5)
		return true;
	else
		return false;
}

void Simplex(float z1, float z2, float con1x1, float con1x2, float result1, float con2x1, float con2x2, float result2)
{
	float arr[3][5] = { {con1x1,con1x2,1,0,result1}, {con2x1,con2x2,0,1,result2}, {-z1,-z2,0,0,0} };
	do
	{
		Draw(arr);
		cout << endl;
		Pivot(arr);
		cout << endl;
		Transform(arr);
		cout << endl;
	} while (!EndSimplex(arr));

}
int main()
{
	Simplex(5, 3, 1, 1, 2, 5, 2, 10);

	// Maximize: 5x1 + 3x2
	// x1 + x2 <= 2
	// 5x1 + 2x2 <= 10

	return 0;
}