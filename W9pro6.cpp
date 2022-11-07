#include <iostream>
using namespace std;
 
template<class t>
 class sum
 {
t Sum(t a,t b) 
{
    cout<<"\nSum="<<a+b<<endl;
}
 };
int main()
{
   sum<int> intSum(a,b);
    sum<float> floatSum(x,y);
    cout<<"\nEnter two integer data: ";
    cin>>a>>b;
    cout<<"\nEnter two float data: ";
    cin>>x>>y;
    sum(a,b); 
    sum(x,y);      
}
