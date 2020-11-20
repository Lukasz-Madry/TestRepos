#include <iostream>
#include <math.h>

using namespace std;

const double e = 2.718285;
const double t = 0.618;

double Function(int z[2], int d[2], double alfa, double a, double b)
{
	double x = (alfa * d[0]) + z[0] - a;
	double y = (alfa * d[1]) + z[1] - b;
	return (pow(e, cos(x)) + pow(e, cos(y)));
}
void Powell(double x, double y)
{
	int alfa = 20;// initialize it to some value, cannot use 0 for the while loop to work
	double a = -1, b = 1;
	double beta1 = b - (t * (b - a));
	double beta2 = a + (t * (b - a));

	const int z0[2] = { 0,0 };
	int z1[2];
	int z2[2];
	int z3[2];
	int z[2];
	z[0] = z0[0];
	z[1] = z0[1];

	const int d1[2] = { 1,0 };
	const int d2[2] = { 0,1 };
	int d[2];
	d[0] = d1[0];
	d[1] = d1[1];
	int count = 0;

	while (alfa != 0)
	{
		if ((b - a) <= 0.01)
		{
			double r = round(beta1);
			alfa = (int)r;
			count++;
			std::cout << "alpha " << count << " = " << alfa << endl;
			if (count == 1)
			{
				a = -1;
				b = 1;
				if
		(count == 1)
		{
			z1[0] = z0[0] + (alfa * d[0]);
			z1[1] = z0[1] + (alfa * d[1]);
			d[0] = d2[0];
			d[1] = d2[1];
			z[0] = z1[0];
			z[1] = z1[1];
			//cout<< z[0] << "," << z[1] << "count1" << endl;
		}
		if (count == 2)
		{
			z2[0] = z1[0] + (alfa * d[0]);
			z2[1] = z1[1] + (alfa * d[1]);
			z[0] = z2[0];
			z[1] = z2[1];
			d[0] = z2[0] - z0[0];
			d[1] = z2[1] - z0[1];
			//cout<< z[0] << "," << z[1] << "count2" << endl;
		}
		if (count == 3)
		{
			z3[0] = z2[0] + (alfa * d[0]);
			z3[1] = z2[1] + (alfa * d[1]);
			z[0] = z3[0];
			z[1] = z3[1];
			//cout<< z[0] << "," << z[1] << "count3" << endl;
		}

			} 
			if (count == 2)
			{
				a = -2;
				b = 0;
				if(count == 1)
				{
					z1[0] = z0[0] + (alfa * d[0]);
					z1[1] = z0[1] + (alfa * d[1]);
					d[0] = d2[0];
					d[1] = d2[1];
					z[0] = z1[0];
					z[1] = z1[1];
					//cout << z[0] << "," << z[1] << "count1" << endl;
				}
				if (count == 2)
				{
					z2[0] = z1[0] + (alfa * d[0]);
					z2[1] = z1[1] + (alfa * d[1]);
					z[0] = z2[0];
					z[1] = z2[1];
					d[0] = z2[0] - z0[0];
					d[1] = z2[1] - z0[1];
					//cout << z[0] << "," << z[1] << "count2" << endl;
				}
				if (count == 3)
				{
					z3[0] = z2[0] + (alfa * d[0]);
					z3[1] = z2[1] + (alfa * d[1]);
					z[0] = z3[0];
					z[1] = z3[1];
					//cout << z[0] << "," << z[1] << "count3" << endl;
				}
			}
			beta1 = b - (t * (b - a));
			beta2 = a + (t * (b - a));
		}
		else if (Function(z, d, beta1, x, y) > Function(z, d, beta2, x, y))
		{
			a = beta1;
			beta1 = beta2;
			beta2 = a + (t * (b - a));
		}
		else if (Function(z, d, beta1, x, y) < Function(z, d, beta2, x, y))
		{
			b = beta2;
			beta2 = beta1;
			beta1 = b - (t * (b - a));
		}
		
	}
	std::cout << "Minimum is at point (x,y) = (" << z[0] << "," << z[1] << ")" << endl;

}

int main()
{
	Powell(-0.2, 0.3);

	return 0;

}