/*

     cout<<"[[[[[[[[[[[[[[[[[[]]]]]]]]]]]]]"<<endl;
     cout<<"||                           ||"<<endl;
     cout<<"||      salam guys !         ||"<<endl;
     cout<<"||  lottery ticket project   ||"<<endl;
     cout<<"||                           ||"<<endl;
     cout<<"]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]"<<endl;
*/
#include<iostream>
#include<conio.h>
#include<windows.h>
#include<string.h>
using namespace std;
main()
{
	system("color 2b");
     string aa="\n\n\t\t\t[[[[[[[[[[[[[[[[[[]]]]]]]]]]]]]"
                "\n\t\t\t||                           ||"
                "\n\t\t\t||      congratulation       ||"           
				"\n\t\t\t||  khushnaseeb 10 member    ||"
                "\n\t\t\t||                           ||"
                "\n\t\t\t]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]";
    for(int i=0;i<aa.size();i++)
    {
    	cout<<aa[i];
    	Sleep(100);
	}
	
	p:
    int ticket[10],n;
    for(int i=0;i<=9;i++)
    {
    	n=rand()%1000+1;
    	for(int a=0;a<i;a++)
    	{
    		if(n == ticket[a])
    		goto p;
		}
    	ticket[i]  = n;
	}
	for(int i=0;i<=9;i++)
	cout<<"\n\n\t\tTICKET IDS :  "<<ticket[i];
	getch();
	return 0;
}
