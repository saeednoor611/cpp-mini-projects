#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	cout<<"\n\n\t\t\t======WELCOME IN FACEBOOK======="<<endl<<endl;
	
	string email,pass;
	cout<<"\n\nEnter your Email ID..."<<endl;
	cin>>email;
	cout<<"\n\nEnter your Password..."<<endl;
	for(int i=1;i<=4;i++)
	{
		pass+=getch();
		cout<<"*";
	}
	
	if(email=="noor"  &&  pass=="khan")
	cout<<"\n\nYOUR ARE WELCOME IN FACEBOOK.....";
    else if(email=="noor")
	cout<<"\n\nYour Password is wrong....";
    else if(pass=="khan")
	cout<<"\n\nYour Email is wrong.....";
	else
	cout<<"\n\nBoth your email & password are wrong....";

	
}
