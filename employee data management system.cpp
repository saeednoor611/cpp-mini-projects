#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<cstdlib>
#include<fstream>//header file for file handling
using namespace std;
class emp{//class name emp
    private:
    	int id,salary,group_id;
    	string name,address;
	
	public:
		//declaring all functions within class
		void menu();
		void insert();
		void display();
		void search();
};
//defining all functions outside the class
void emp::menu()
{
	int x;
	p:
	system("cls");
    cout<<"\n\t\t__________________________________________________________________";
	cout<<"\n\n\t\t|||||||||||||||>>>>>>>CONTROL PANEL<<<<<<<<|||||||||||||||||||";
    cout<<"\n\t\t__________________________________________________________________";
    cout<<"\n\n\n1: Insert record: ";
    cout<<"\n2: display record: ";
    cout<<"\n3: Search record: ";
    cout<<"\n4: modify recrord: ";
    cout<<"\n5: delete record: ";
    cout<<"\n6: group record: ";
    cout<<"\n7: search group:";
    cout<<"\n8: show all groups:";
    cout<<"\n9: Exit: ";
    cout<<"\n\nPlease Enter Your choice....";
    cin>>x;
    switch(x)
    {
    	case 1:
    		insert();//calling insert function
    		break;
    	case 2:
    		display();
    		break;
    	case 3:
    		search();
    		break;
    	case 4:
    		break;
    	case 5:
    		break;
    	case 6:
    		break;
    	case 7:
    		break;
    	case 8:
    		break;
    	case 9:
    		exit(0);//time in 0 mm
    	default:
    		cout<<"\n\ninvalid output...please try again...";
    		
    		getch();
    		goto p;
	}
}
//defining insert funtion
void emp::insert()
{
	system("cls");
	fstream file,file1;
	cout<<"\n\n\t\t\tInsert Employees Record...";
	cout<<"\n\nEmployee ID : ";
	cin>>id;
	cout<<"\nEmployee Name : ";
	cin>>name;
	cout<<"\nEmployee Address : ";
	cin>>address;
	cout<<"\nEmployee Salary : ";
	cin>>salary;
	cout<<"\nEmployee Group_ID : ";
	cin>>group_id;
	file.open("emp.text",ios::out|ios::app);
	file<<" "<<id<<" "<<name<<" "<<address<<" "<<salary<<" "<<group_id<<endl;
	file.close();
	file1.open("group.text",ios::out|ios::app);
	file1<<" "<<group_id<<" "<<id<<" "<<salary<<endl;
	file1.close();
	cout<<"\n\n\tNew Record inserted successfully...";
	getch();
	menu();
}
//creating display function
void emp::display()
{
	system("cls");
	
	fstream file;
	cout<<"\n\n\n\t\t\tDisplay record ";
	file.open("emp.txt",ios::in);
	if(!file)
	{
		cout<<"\n\nfile openning error...";
		getch();
		menu();
	}
	//file>>id>>name>>salary>>address>>group_id;
	while(!file.eof())
	{
		cout<<"\n\nEmployee ID :"<<id;
		cout<<"\nEmployee name :"<<name;
		cout<<"\nEmpoyee salary :"<<salary;
		cout<<"\nEmpoyee address :"<<address;
		cout<<"\nEmpoyee Group_ID :"<<group_id;
		file>>id>>name>>salary>>address>>group_id;
	}
	file.close();
}
//defining search func();
void emp::search()
{
	system("cls");
	fstream file;
	int emp_id,found=0,salary,group_id,id;
	string name,address;
	cout<<"\n\n\t\t\t\tSearch Record";
	file.open("emp.txt",ios::in);
	if(!file)
	{
		cout<<"\n\n File openning Error...";
		getch();
		menu();
	}
	cout<<"\n\nEmployee ID for search ";
	cin>>emp_id;
	file>>emp_id>>name>>salary>>address>>group_id;
	while(!file.eof())
	{
		if(emp_id==id)
		{
			system("cls");
			cout<<"\n\nEmployee ID :"<<id;
	     	cout<<"\nEmployee name :"<<name;
	       	cout<<"\nEmpoyee salary :"<<salary;
		    cout<<"\nEmpoyee address :"<<address;
		    cout<<"\nEmpoyee Group_ID :"<<group_id;
		    found++;
		}
			file>>id>>name>>salary>>address>>group_id;
	}
		 file.close();
		 if(found==0)
		 cout<<"\n\nEmployee ID can't found...";
}
main()
{
	emp e;
	e.menu();
}
 
