#include<iostream>
#include<conio.h>
using namespace std;


main()
{
	string email,pass;
	char c;
	
	cout<<"\n\n\t\t\t\t Login Page...";
	cout<<"\n\n Your E-mail   :";
	cin>>email;
	cout<<"\n\n Your Password  :";
	
	
	for(int i=1;i<=4;i++)
	{
		c=getch();
		pass+=c;
		cout<<"*";
	}
	
	
	
	if(email=="noor"&& pass=="noor")
	cout<<"\n\n\n Welcom...................";
	else if(email=="noor"&& pass!="noor")
	cout<<"\n\n\n Your Password is Wrong..";
	else if(email!="noor"&& pass=="noor")
	cout<<"\n\n\n Your E-mail is Wrong....";
	else
	cout<<"\n\n\n Your E-mail & Password is Wrong........";
	getch();
	return 0;
}
