#include <iostream>
#include <math.h>

#define PI 3.14159265

double GetAngle(double aSide, double bSide, double cSide)
{
  double angle = acos((bSide*bSide + cSide*cSide - aSide*aSide)/(2*bSide*cSide));
  return (angle*180)/PI;
}

int main()
{
	double aSide, bSide, cSide;
	std::cout << "Enter a side ";
	std::cin >> aSide;
	std::cout << "Enter b side ";
	std::cin >> bSide;
	std::cout << "Enter c side ";
	std::cin >> cSide;
	double angleA = GetAngle(aSide, bSide, cSide);
	double angleB = GetAngle(bSide, aSide, cSide);
	double angleC = GetAngle(cSide, aSide, bSide);
	std::cout << angleA << " " << angleB << " " << angleC << std::endl;
	return 0;
}
