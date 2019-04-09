
#include<iostream>
using namespace std;
int main()
{
int A[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15},size;
size=sizeof(A)/sizeof(A[0]);
for(int i=0;i<size;++i)
{
	cout<<A[i]<<" ";
}
int r;
cout<<"\nNumber of rotation =";
cin>>r;
int temp[size];
for(int i=0;i<size;++i)
{
	if(i>r-1)
		temp[i]=A[i-r];
	else
		temp[i]=A[size-r+i];

}
cout<<"After the rotation"<<endl;
for(int i=0;i<size;++i)
{
	cout<<temp[i]<<" ";
}cout<<endl;

return 0;
}

