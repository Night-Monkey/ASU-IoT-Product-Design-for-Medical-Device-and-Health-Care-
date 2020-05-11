/*
	Quadratic equation is :

	x = (-b +- sqrt((b^2)-4ac))/2a

*/


#include<iostream>
#include <math.h>       /* pow */


using namespace std;

int main()
{

	double a,b,c,x1,x2,q;

	cout << "Please enter a, b, and c to get Results of x:\n" << endl;

	cout << "a: ";
	cin >> a;

	cout << "b: ";
	cin >> b;

	cout << "c: ";
	cin >> c;
		
			q = (b*b - 4*a*c);

			if (q == 0)
			{
				printf("--------------------\n\n");
				cout << ("one root\n");
				x1 = -b + sqrt(q) / (2 * a) ;
				x2 = x1;
				cout << "X1 = X2 = " << x1 << endl;
			}
			else if (q > 0)
			{
				printf("--------------------\n\n");
				cout << ("two roots\n");
				x1 = (-b + (sqrt(q))) / (2 * a);
				x2 = (-b - (sqrt(q))) / (2 * a);

				cout << "X1 = " << x1 << endl;
				cout << "X2 = " << x2 << endl;
			}
			else
			{
				printf("--------------------\n\n");
				cout << ("No roots \n\n");
			}

	system("pause");
	return 0;
}