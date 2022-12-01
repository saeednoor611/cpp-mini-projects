#include<iostream>
#include<windows.h>
using namespace std;
main()
{
	SYSTEMTIME x;
	GetSystemTime (&x);
	cout<<"hour :"<<x.wHour<<endl;
	cout<<"minute :"<<x.wMinute<<endl;
	cout<<"second :"<<x.wSecond<<endl;
	cout<<"mili :"<<x.wMilliseconds<<endl;
	cout<<"day :"<<x.wDay<<endl;
	cout<<"month :"<<x.wMonth<<endl;
	cout<<"year :"<<x.wYear;
}

