#include<iostream>
#include<iomanip>

void calcAreaOfCir(float radius, float &AreaOfCir);
void calcAreaOfRec(float length, float width, float &areaOfRec);
void calcAreaOfSqr(float length, float &areaOfSqr);

void calcPeriOfRec(float length, float width, float& perimeter);

using namespace std;
int main()
{
  struct circle {
    float radius, area;
  }c1;

  struct rectangle {
    float length, width, area, perimeter;
  }r1, r2;

  struct square {
    float length, area;
  }s1;

  float GreenArea;

  c1.radius = 5;

  r1.length = 28;
  r1.width = 15;

  r2.length = 7;
  r2.width = 3;

  s1.length = 4;

  calcAreaOfCir(c1.radius, c1.area);
  calcAreaOfRec(r1.length, r1.width, r1.area);
  calcAreaOfRec(r2.length, r2.width, r2.area);
  calcAreaOfSqr(s1.length, s1.area);

  calcPeriOfRec(r1.length, r1.width, r1.perimeter);

  GreenArea = r1.area - (r2.area + s1.area + c1.area);

  cout << fixed << setprecision(3);
  cout << "The Area Of Green Colour Area : " << GreenArea;

  return 0;

}
void calcAreaOfCir(float radius, float &AreaOfCir)
{
  AreaOfCir = radius * radius * 3.14;
}
void calcAreaOfRec(float length, float width, float& areaOfRec)
{
  areaOfRec = length * width;
}
void calcAreaOfSqr(float length, float &areaOfSqr)
{
  areaOfSqr = length * length;
}
void calcPeriOfRec(float length, float width, float& perimeter)
{
  perimeter = 2 * (length + width);
}