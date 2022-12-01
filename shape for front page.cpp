/*  ..............................................
     ............................................
      ..........................................
       .......................................
        
        "hell is empty, all the devils are here"
                      written
                       by 
                      william shakespeare
        
      .........................................
     ...........................................
    .............................................
   ...............................................
   */
#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;


main()
{
	cout<<"\n\n\n\n";


    int m=1;
	for(int i=1;i<=5;i++)//loop for rows
	{
		for(int k=1;k<i;k++)//for space or decreasing one dot
		{
			cout<<" ";
		}
		for(int j=m;j<=80;j++)//for column
		{
			Sleep(100);
			cout<<":";
	    }
		m=m+2;
		cout<<endl;
	}
	// now write your text at the front page >>
	cout<<"\n\n\t\t HELL IS EMPTY, ALL THE DEVILES ARE HERE\n\n";
	cout<<"\t\t                  witten               \n\n";
	cout<<"\t\t                    by                 \n\n";
	cout<<"\t\t           WILLIAM SHAKESPEARE      \n\n\n\n";
	
	
	
	m=m-2;//copy the above loops,paste them and alter the sign for the next shape after 
	             //text
	             
	      	for(int i=1;i<=5;i++)//loop for rows
	{
		for(int k=5;k>i;k--)//for space or decreasing one dot
		{
			cout<<" ";
		}
		for(int j=m;j<=80;j++)//for column
		{
			Sleep(50);
			cout<<":";
		}
		m=m-2;
		cout<<endl;
	}       
	             
	
	
	return 0;
}
