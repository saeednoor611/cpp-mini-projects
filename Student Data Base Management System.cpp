        // Complete Student Record database management system
        // c++ 
#include<iostream>
#include<conio.h>
using namespace std;
int i=0;
struct student
{
	string roll,name,clas;
	float tot,obt,per;
}s[100];
void display_panel()
{
	cout<<"\n\n\n\t\t\tCONTROL PANEL";
	cout<<"\n\n1: Insert Record :";
	cout<<"\n2: Display Record :";
	cout<<"\n3: Search Record :";
	cout<<"\n4: Update Record :";
	cout<<"\n5: Delete Record :";
	cout<<"\n6: Exit :";
	cout<<"\n\n Enter Your choice :";
}
void insert(student s[])
{
	system("cls");
	cout<<"\n\n\t\t\tInsert Record....";
	cout<<"\n\nRoll No :";
	cin>>s[i].roll;
	cout<<"\nName :";
	cin>>s[i].name;
	cout<<"\nClass :";
	cin>>s[i].clas;
	cout<<"\nTotal Marks :";
	cin>>s[i].tot;
	cout<<"\nObtained Marks :";
	cin>>s[i].obt;
	s[i].per=(s[i].obt/s[i].tot)*100;
}
void display(student s[])
{ 
    int c=1;
	system("cls");
	cout<<"\n\n\t\t\tDisplay Record...";
	if(i>0)
	{
	for(int a=0;a<i;a++)
	{
		cout<<"\n\nStudent :"<<c;
		cout<<"\nRoll No :"<<s[a].roll;
		cout<<"\nName :"<<s[a].name;
		cout<<"\nClass :"<<s[a].clas;
		cout<<"\nTotal marks :"<<s[a].tot;
		cout<<"\nObtained marks :"<<s[a].obt;
		cout<<"\nPercentage % :"<<s[a].per;
		c++;
	}
    }
    else
    {
    	cout<<"\nData base is empty...";
	}
}
void search(student s[])
{
	int count=0;
	string roll;
	system("cls");
	cout<<"\n\n\t\tSearch Record...";
	if(i>0)
	{
		cout<<"\n\nRoll No : for search :";
		cin>>roll;
		for(int a=0;a<i;a++)
		{
			if(roll== s[a].roll)
			{
				cout<<"\n\nStudent :"<<count;
	         	cout<<"\nRoll No :"<<s[a].roll;
	        	cout<<"\nName :"<<s[a].name;
	         	cout<<"\nClass :"<<s[a].clas;
	        	cout<<"\nTotal marks :"<<s[a].tot;
	        	cout<<"\nObtained marks :"<<s[a].obt;
	         	cout<<"\nPercentage % :"<<s[a].per;
				count++;	
			}
		}
		if(count==0)
		{
			cout<<"\n\n Record not found....";
		}
	}
	else
	{
		cout<<"\n\ndata base is empty.....";
	}
}
void update(student s[])
{
	system("cls");
	string roll;
	int count=0;
	cout<<"\n\n\t\t\tUpdate Record ..";
	if(i>0);
	{
		cout<<"\n\nRoll No. for updata :";
		cin>>roll;
		for(int a=0;a<i;a++)
		{
			if(roll==s[a].roll)
			{
				cout<<"\n\nNew Roll No :";
			    cin>>s[a].roll;
	            cout<<"\nName :";
         	    cin>>s[a].name;
        	    cout<<"\nClass :";
         	    cin>>s[a].clas;
        	    cout<<"\nTotal Marks :";
        	    cin>>s[a].tot;
         	    cout<<"\nObtained Marks :";
        	    cin>>s[a].obt;
         	    s[i].per=(s[i].obt/s[i].tot)*100;
			    count++;	
			}
		}
	     if(count==0)
	    {
	    	cout<<"\n\nRecord not found....";
		}
	else
	{
		cout<<"\n\nData base is empty....";
	}
}
}
void del(student s[])
{
	system("cls");
	string roll,t_roll,t_name,t_class;
	float t_tot,t_obt,t_per;
    int count=0;
	cout<<"\n\n\t\tDelete Record...";
	if(i > 0)
	{
		cout<<"\n\nRoll No. for delete :";
		cin>>roll;
		for(int a=0;a<i;a++)
		{
			if(roll==s[a].roll)
			{
				for(int j=a;j<1;j++)
				{
					t_roll = s[j+1].roll;
					t_name = s[j+1].name;
					t_class = s[j+1].clas;
					t_tot = s[j+1].tot;
		            t_obt = s[j+1].obt;
		            t_per = s[j+1].per;
		            s[j].roll = t_roll;
		            s[j].name = t_name;
		            s[j].clas = t_class;
		            s[j].tot = t_tot;
		            s[j].obt = t_obt;
		            s[j].per = t_per;
				}
				cout<<"\n\nRecord is Deleted.....";
				i--;
				count++;
			}
			if(count == 0)
			{
				cout<<"\n\nRecord Not found...";
			}
	   }
	}
	else
	{
		cout<<"\n\nData base is empty....";
	}
}
main()
{
	int choice;
	char x;
	p:
	system("cls");
	display_panel();
	cin>>choice;
	switch(choice)
	{
		case 1:
		do
		{
		insert(s);
		i++;
		cout<<"\n\n\t\t\tDo You want to add another record [ y or n ] ...";
		cin>>x;
		}while(x=='y');
		break;
		case 2:
		display(s);
		break;
		case 3:
		search(s);
		break;
		case 4:
		update(s);
		break;
		case 5:
		del(s);
		break;
		case 6:
		exit(0);
		break;
		default:
		cout<<"\n\n Invalid value....please try again..";
	}
	getch();
	goto p;
}
