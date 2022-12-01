//Moving text in c++ 

#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
gotoxy(int x,int y)
{
	COORD coord;
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);//builtin function
}



main()
{
	
	for(int i=1;i<=50;i++)
	{
	Sleep(500);//builtin function,500= half second
	system("cls");//clrear screen
		

	gotoxy(i,2);//calling gotoxy function
    
	cout<<"OUR BELOVED HOLY PROPHET (PBUH)===>>\t\t\t\t\t   (___)"<<endl;

	}
	
return 0;
	
}
