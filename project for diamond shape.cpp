#include<iostream>
using namespace std;
int main()
{
	//initialization of veriables
	int i,j,rows;
	cout<<"enter the number of rows :::";
	cin>>rows;
	//print upper triangle
	for(int i=1;i<=rows;i++)
	{
		for(int j=rows;j>i;j--)
		{
			cout<<" ";//print space
		}
		cout<<"|";//print symbol
		for(int j=1;j<(i-1)*2;j++)
		{
			cout<<" ";//print space
		}
		if(i==1)
		{
			cout<<endl;
		}
		else
		{
			cout<<"|"<<endl;
		}
		
	}
	
	
	//print rower triangle
	for(i=rows-1;i>=1;i--)
	{
		for(j=rows;j>i;j--)
		{
			cout<<" ";//print space
		}
		cout<<"|";//print symbol
		for(j=1;j<(i-1)*2;j++)
		{
			cout<<" ";//print space
		}
		if(i==1)
		{
			cout<<endl;//print newline
		}
		else
		{
			cout<<"|"<<endl;
		}
		
	}
	return 0;
}
