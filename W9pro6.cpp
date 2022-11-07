#include <iostream>
using namespace std;
 
template<class t>
 class sum
 {
void Sum(t a,t b) 
{
    cout<<"\nSum="<<a+b<<endl;
}
 };
int main()
{
   sum<int>obj; 
    obj.Sum();
    sum<float>obj2;
    obj2.Sum();
    cout<<"\nEnter two integer data: ";
    cin>>a>>b;
    cout<<"\nEnter two float data: ";
    cin>>x>>y;
    sum(a,b); 
    sum(x,y);      
}
