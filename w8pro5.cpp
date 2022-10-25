#include <iostream>
using namespace std;
 
class Shape
{
  protected:
    double width, height;
  public:
    void set_data (double a, double b)
    {
        width = a;
        height = b;
    }
};
 
class Rectangle: public Shape
{
  public:
    double area ()
    {
        return (width * height);
    }
};
 
 
int main ()
{
    Shape *sPtr;    //declare pointer variables of type Shape
    Rectangle Rect; //create the object rect of type Rectangle
    sPtr = &Rect;   //make sPtr point to the object rect.

    sPtr->set_data (5,3); //set length and width of object rect 
    cout << sPtr -> area() << endl;  //Compile Error !!

    return 0;
}
