#include<iostream>
using namespace std;
class reverse
{
	private:
		int n,i;
		public:
	reverse()
	{
		cout<<"Enter number to reverse: ";
		cin>>n;
	}
	void out()
	{
		cout<<endl<<"The reverse of the Entered number: ";
		for(i=n;n>0;n=n/10)
		{
			cout<<n%10;
		}
	}
};
int main()
{
	reverse r;
	r.out();
}
