#include <iostream>
using namespace std;
#include "Dathuc.h"
int main()
{
	int n;
	cin>>n;
	int c;
	DaThuc a(n);
	for (int i=n;i>=0;i--)
	{
		cin>>c;
		a.setHS(c,i);
	}
	a.Print();
	cout<<endl;
	

}
