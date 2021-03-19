#include <iostream>
//#include <cmath>
using namespace std;

struct Circle{
  float radius;
};

struct Rectangle{
  float length;
  float width;
};

struct Square{
  float length;
};

float findCircle (float radius);
float findRectangle (float length, float width);
float findSquare (float length);

int main() {
  Circle circ1;
  circ1.radius = 5;

  Rectangle rec1;
  rec1.length = 7;
  rec1.width = 3;

  Square sqr1;
  sqr1.length = 4;

  float cArea, recArea,  sqArea, lLength=28, lWidth=15 ,greenArea;

  cArea = findCircle(circ1.radius);
  //cout << "Circle Area: " << cArea << endl;

  recArea = findRectangle(rec1.length,rec1.width);
  //cout << "Rectangle Area: " << recArea << endl;

  sqArea = findSquare(sqr1.length);
  //cout << "Square Area: " << sqArea << endl;

  greenArea = lLength*lWidth-(cArea + recArea + sqArea);
  cout << "Green Color Area: " << greenArea << endl;

}
float findCircle (float radius)
{
  return (22/7.0)*radius*radius;
}
float findRectangle (float length, float width)
{
  return length * width;
}
float findSquare (float length)
{
  return length*length;
}#include <iostream>
//#include <cmath>
using namespace std;

struct Circle{
  float radius;
};

struct Rectangle{
  float length;
  float width;
};

struct Square{
  float length;
};

float findCircle (float radius);
float findRectangle (float length, float width);
float findSquare (float length);

int main() {
  Circle circ1;
  circ1.radius = 5;

  Rectangle rec1;
  rec1.length = 7;
  rec1.width = 3;

  Square sqr1;
  sqr1.length = 4;

  float cArea, recArea,  sqArea, lLength=28, lWidth=15 ,greenArea;

  cArea = findCircle(circ1.radius);
  //cout << "Circle Area: " << cArea << endl;

  recArea = findRectangle(rec1.length,rec1.width);
  //cout << "Rectangle Area: " << recArea << endl;

  sqArea = findSquare(sqr1.length);
  //cout << "Square Area: " << sqArea << endl;

  greenArea = lLength*lWidth-(cArea + recArea + sqArea);
  cout << "Green Color Area: " << greenArea << endl;

}
float findCircle (float radius)
{
  return (22/7.0)*radius*radius;
}
float findRectangle (float length, float width)
{
  return length * width;
}
float findSquare (float length)
{
  return length*length;
}
