#include<iostream>
#include<conio.h>

using namespace std;
main()
{
	/*
	      ASCII code; A = 65 Z = 90
	      a = 97 z = 122
	      capital 65 = 90;
	      smalest 97 = 122;
	*/
	p:
	system("cls");
    int a;
    cout<<"\n\nASCII VALUE :";cin>>a;
    cout<<"\n\n\tAcharacter :"<<char(a);
    getch();
    goto p;
}
