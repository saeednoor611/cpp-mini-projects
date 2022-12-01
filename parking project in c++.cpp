#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
main()
{
	system("color 9");
	
	string var="\n\n\n\t\t\t\t>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<"
	           "\n\t\t\t\t <<<<<<<<>>>>>>>>>>>>><<<<<<<<<<<<>>>>>>"
	           "\n\t\t\t\t  ....................................."
	           "\n\t\t\t\t          parking project              "
	           "\n\t\t\t\t  ....................................."
	           "\n\t\t\t\t >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"
	           "\n\t\t\t\t>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>";
    for(int i=0;i<=var.size();i++)
    {
    	Sleep(100);
    	cout<<var[i];
	}
	k:
	int m_amt=0,r_amt=0,c_amt=0,b_amt=0;
	int m_cnt=0,r_cnt=0,c_cnt=0,b_cnt=0;
	int t_amt=0,t_cnt=0,x;
	a:
	system("cls");
	cout<<"\n\n\n\t\t\tPARKING PROJECT ";
	cout<<"\n\n1. bike ";
	cout<<"\n2. rickshaw ";
	cout<<"\n3. car ";
	cout<<"\n4. bus ";
	cout<<"\n5. display record ";
	cout<<"\n6. delete vehicale ";
	cout<<"\n7. delete record ";
	cout<<"\n8. exit ";
	cout<<"\n\n Enter your choice ";
	cin>>x;
	switch(x)
	{
		case 1:
		if(t_cnt < 100)
		{
			m_cnt++;
			t_cnt++;
			m_amt +=20;
			t_amt +=20;
			cout<<"\n\n\t\t\tBike is successfully parked....";
		}
		else
		{
			cout<<"\n\n\t\t\tparking is already full....";
		}
		break;
	
		case 2:
		if(t_cnt < 100)
		{
			r_cnt++;
			t_cnt++;
			r_amt +=50;
			t_amt +=50;
			cout<<"\n\n\t\t\tRickshaw is successfully parked....";
		}
		else
		{
			cout<<"\n\n\t\t\tparking is already full....";
		}
		break;
		case 3:
		if(t_cnt < 100)
		{
			c_cnt++;
			t_cnt++;
			c_amt +=100;
		    t_amt +=100;
			cout<<"\n\n\t\t\tcar is successfully parked....";
		}
		else
		{
			cout<<"\n\n\t\t\tparking is already full....";
		}
		break;
		case 4:
		if(t_cnt < 100)
		{
			b_cnt++;
			t_cnt++;
			b_amt +=200;
			t_amt +=200;
			cout<<"\n\n\t\t\tBus is successfully parked....";
		}
		else
		{
			cout<<"\n\n\t\t\tparking is already full....";
		}
		break;
		case 5:
		if(t_cnt > 0)
		{
			system("cls");
			cout<<"\n\n\n\t\t\tDisplay record ";
			cout<<"\n\n---> Bike in parking :"<<m_cnt;
			cout<<"\n---> bike amount :"<<m_amt;
			cout<<"\n\n---> Rickshaw in parking :"<<r_cnt;
			cout<<"\n---> Rickshaw amount :"<<r_amt;
			cout<<"\n\n---> Car in parking :"<<c_cnt;
			cout<<"\n---> Car amount :"<<c_amt;
			cout<<"\n\n---> Bus in parking :"<<b_cnt;
			cout<<"\n---> Bus amount :"<<b_amt;
			cout<<"\n\n---> total vehicales in parking :"<<t_cnt;
			cout<<"\n---> total amount :"<<t_amt;
		}
		else
		{
			cout<<"\n\n\t\t\tParking is empty...add some record...";
		}
		break;
		case 6:
		p:
		system("cls");
		cout<<"\n\n\n\t\t\tDelete vehicale ";
		cout<<"\n\n1. Bike :";
		cout<<"\n2. Rickshaw :";
		cout<<"\n3. Car :";
		cout<<"\n4. Bus :";
		cin>>x;
		if(x == 1)
		{
			m_cnt--;
			t_cnt--;
			cout<<"\n\n\t\t\t Bike is successfully removed....";
		}
		else if(x == 2)
		{
			r_cnt--;
			t_cnt--;
			cout<<"\n\n\t\t\t Rickshaw is successfully removed...";
		}
		else if(x == 3)
		{
			c_cnt--;
			t_cnt--;
			cout<<"\n\n\t\t\t Car is successfully removed.....";
		}
		else if(x == 4 )
		{
			b_cnt--;
			t_cnt--;
			cout<<"\n\n\t\t\t Bus is successfully removed......";
		}
		else
		{
			cout<<"\n\n\t\t\t invalid choice...try again...";
			getch();
			goto p;
		}
		break;
		case 7:
		cout<<"\n\n\t\t\tDeleted all record successfully...";
		getch();
		goto k;
		case 8:
		exit(0);
		default:
		cout<<"\n\n\n\t\t\t Invalide choice...try again...";
	}
	getch();
	goto a;
	
}







