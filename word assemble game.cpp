/*
         word assemble game complete:
         1. "pakistan","noor","USA","india","china","fruit","phone","laptop","butterfly","LED"};
          
         2. {"kistanpa","roon","SAU","diain","naich","uitfr","noeph","toplap","ttbuerfly","EDL"};
*/


#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
main()
{
	string word[10]={"pakistan","noor","USA","india","china","fruit","phone","laptop","butterfly","LED"};
    string guss[10]={"kistanpa","roon","SAU","diain","naich","uitfr","noeph","toplap","ttbuerfly","EDL"};
    int score=0,n;
    string choice;
    for(int i=1;i<=5;i++)
    {
    	system("cls");
    	cout<<"\n\n\n\t\t\t\tWORD ASSEMBLE GAME...";
    	n=rand()%10;
    	cout<<"\n\n"<<guss[n];
    	cout<<"\n\nwrite true word...";
    	cin>>choice;
    	if(choice == word[n])
    	{
    		cout<<"\n\nWord is True   ";
    		score++;
		}
		else
		cout<<"\n\nWord is wrong  ";
		getch();
	}
	if(score >= 4)
	{
		cout<<"\n\ncongratulation you have won the match...";
	}
	else
	{
		cout<<"\n\nalas! you have lose the match...";
	}
	getch();
    
}







