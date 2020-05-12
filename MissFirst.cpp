//Missing number


same changes in this code

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int bi[10];
	int index=0,r=0;
	
	for(int i=0;n!=0;i++)
	{
		r=n%2;
		n=n/2;
		bi[index]=r;
		index++;
	}
	
	for(int i=index-1;i>=0;i--)
	{
		cout<<bi[i];
	}
return 0;
}
