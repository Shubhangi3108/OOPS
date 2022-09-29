#include <iostream>
using namespace std;
 
//Class declaration.
class Demonstrate
{
    private:
        int X;
        int Y;
    public:
            Demonstrate (int a, int b)
        void    Input();
        void    Display();
     
};
 Demonstrate(int a, int b)
{
    X = a;
    Y = b;
}
void Demonstrate:: Input()
{
    cout << "Enter Value of X: "; cin >> X;
    cout << "Enter Value of Y: "; cin >> Y;
}
void Demonstrate:: Display()
{
    cout << endl << "X: " << X;
    cout << endl << "Y: " << Y << endl;
}
 
int main()
{
    Demonstrate d(10,20) ;
    cout << endl <<"Method 1: " << endl;  
    cout << "Value after initialization: " ;
    d.Display();    
    d.Input();
    cout << "Value after User Input : ";
    d.Display();
    Demonstrate d1 = Demonstrate(10,20);
    cout << endl << "Method 2: " << endl;
    cout << "Value after initialization: ";
    d1.Display();   
    return 0;
}
