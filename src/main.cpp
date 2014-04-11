#include <iostream>
#include <math.h>

#define PI 3.14159265

double GetPerimeter(double aSide, double bSide, double cSide)
{
	return aSide + bSide + cSide;
}

double GetArea(double aSide, double bSide, double cSide)
{
	double p = GetPerimeter(aSide, bSide, cSide)/2;
	return sqrt(p*(p-aSide)*(p-bSide)*(p-cSide));
}

double GetAltitude(double aSide, double bSide, double cSide)
{
	return 2*GetArea(aSide, bSide, cSide)/aSide;
}

double GetAngle(double aSide, double bSide, double cSide)
{
  double angle = acos((bSide*bSide + cSide*cSide - aSide*aSide)/(2*bSide*cSide));
  return (angle*180)/PI;
}

int main()
{
	// The sides of triangle.
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
	std::cout << "Perimeter is " << GetPerimeter(aSide, bSide, cSide) << std::endl;
	std::cout << "Area is " << GetArea(aSide, bSide, cSide) << std::endl;
	std::cout << "Altitude A is " << GetAltitude(aSide, bSide, cSide) << std::endl;
	std::cout << "Altitude B is " << GetAltitude(bSide, aSide, cSide) << std::endl;
	std::cout << "Altitude C is " << GetAltitude(cSide, aSide, bSide) << std::endl;
	return 0;
}
