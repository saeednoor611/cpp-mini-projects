/*
     cout<<">>>>>>>>>>>>>>DIGITAL WATCH<<<<<<<<<<<<<<<<<"<<endl;
     cout<<.............................................."<<endl;

*/
#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
main()
{
	
	int hour, minute, second,helping=0;
    cout<<">>>>>>>>>>>>>>DIGITAL WATCH<<<<<<<<<<<<<<<<<\n";
    cout<<".............................................."<<endl;
    cout<<"input hour :"<<endl;
    cin>>hour;
    cout<<"input minute :"<<endl;
    cin>>minute;
    cout<<"input second :"<<endl;
    cin>>second;
    
    while(helping==0)
    {
    	system("cls");
    	cout<<"TIME IS :"<<"|"<<hour<<" : "<<minute<<" : "<<second<<endl;
    	second++;
    	Sleep(1000);
	}
	if(second > 59)
	{
		minute++;
		second=0;
	}
	if(minute > 59)
	{
		hour++;
		minute=0;
	}
	if(hour > 11)
	{
		hour=0;
	}
    getch();
}






