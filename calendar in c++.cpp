/*  >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
   ....complete years calendar final part 2:
   ....(((year-1)*365)+((year-1)/4)-((year-1)/100)+((year)/400)+1)%7;
   ....week: 0(sun),1(mon),2(tus),3(wen),4(thur),5(fri),6(sat):
   ....monthes: 0(jan),1(feb),2(mar),3(apr),4(may),....11(dec):
   
   
*/
#include<iostream>
#include<conio.h>
using namespace std;
int day_year(int year)
{
	int day;
	day=(((year-1)*365)+((year-1)/4)-((year-1)/100)+((year)/400)+1)%7;
}
 main()
{

	int day,month,year,week;
	p:
	int month_day[12]={31,28,31,30,31,30,31,31,31,31,30,31};
    string months[12] = {"january","febuary","march","april","may","june","july","august","september","october","november","december"};
	cout<<"\n\n\n\t\t\t____________TAKE INPUTS FROM USER_____________";
    cout<<"\nEnter month :";
    cin>>month;
    cout<<"\nEnter year :";
    cin>>year;
    if(year%4 == 0)
    month_day[1] = 29;
    day=day_year(year);
    for(int i=0;i<(month-1);i++)
    {
    	for(int j=1;j<=month_day[i];i++)
    	{
    		if(++day > 6)
    		day = 0;
		}
	}
	system("cls");
	cout<<"\n\n\t\t"<<month[months-1]<<" , "<<year;
	cout<<"\n\n  sun  mon  tue  wed  thu  fri  sat\n";
	for(int i=0;i<day;i++)
	{
		cout<<"      ";
	}
	week = day;
	for(int j=1;j<=month_day[month-1];j++)
	{
		if(j >=10)
		cout<<"     ";
		else 
		cout<<"    ";
		if(week > 6)
		{
			cout<<"\n    "<<j;
			week = 0;
		}
		else
		{
			cout<<j;
		}
		week++;
	}
    getch();
    goto p;
    return 0;
}






