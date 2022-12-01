/*
      restaurent project complete:
*/

#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int p_p=0,p_b=0,p_s=0,p_i=0,p_c=0;
	int s_p=0,s_b=0,s_s=0,s_i=0,s_c=0;
	int p=0,b=0,s=0,i=0,c=0,choice,q;
	cout<<"\n\n\n\n\t\t\tPurchase Items...";
    cout<<"\n\n Number of Pitzza :";
    cin>>p_p;
    cout<<"\n Number of Burger :";
    cin>>p_b;
    cout<<"\n Number of sandwitch :";
    cin>>p_s;
    cout<<"\n Number of Ice_cream :";
    cin>>p_i;
    cout<<"\n Number of Cake:";
    cin>>p_c;
    //creating menu
    p:
    system("cls");
    cout<<"\n\n\t\t\t\tRestaurent Items menu :";
    cout<<"\n\n1: Pitzza :";
    cout<<"\n2: Burgar :";
    cout<<"\n3: Sandwitch :";
    cout<<"\n4: Ice_cream :";
    cout<<"\n5: Cake :";
    cout<<"\n6: Details :";
    cout<<"\n7: Exit :";
    cout<<"\nEnter your choice......";
    cin>>choice;
    
    //creating switch statement to access menu(cases)
    switch(choice)
    {
    	case 1:
    	cout<<"\n\n Enter pitzza Qunatity .";
    	cin>>q;
    	if(p_p-s_p >= q)
    	{
    		s_p += q;
    		p += q * 500;
    		cout<<"\n\n "<<q<<" Pitzza sales thank you!!!";
		}
		else
		cout<<"\n\n\n\tSorry "<<p_p-s_p<<" pitzza remaining in restaurent";
    	break;
    	case 2:
    	cout<<"\n\n Enter burger Qunatity .";
    	cin>>q;
    	if(p_b-s_b >= q)
    	{
    		s_b += q;
    		b += q * 100;
    		cout<<"\n\n "<<q<<" burger sales thank you!!!";
		}
		else
		cout<<"\n\n\n\tSorry "<<p_b-s_b<<" pitzza remaining in restaurent";
    	break;
    	case 3:
    	cout<<"\n\n Enter sandwitch Qunatity .";
    	cin>>q;
    	if(p_s-s_s >= q)
    	{
    		s_s += q;
    		s += q * 300;
    		cout<<"\n\n "<<q<<" sandwitch sales thank you!!!";
		}
		else
		cout<<"\n\n\n\tSorry "<<p_s-s_s<<" sandwitch remaining in restaurent";
    	break;
    	case 4:
    	cout<<"\n\n Enter ice-cream Qunatity .";
    	cin>>q;
    	if(p_i-s_i >= q)
    	{
    		s_i += q;
    		i += q * 300;
    		cout<<"\n\n "<<q<<" ice-cream sales thank you!!!";
		}
		else
		cout<<"\n\n\n\tSorry "<<p_i-s_i<<" ice-cream remaining in restaurent";
    	break;
    	case 5:
    	cout<<"\n\n Enter cake Qunatity .";
    	cin>>q;
    	if(p_c-s_c >= q)
    	{
    		s_c += q;
    		c += q * 1000;
    		cout<<"\n\n "<<q<<" cake sales thank you!!!";
		}
		else
		cout<<"\n\n\n\tSorry "<<p_c-s_c<<" cake remaining in restaurent";
    	break;
        case 6:
		system("cls");
		//displaying details for pitzza.
		cout<<"\n\n\n\t\t\tDetails panel ";
		cout<<"\n\nPurchase Pitzza Quantity :"<<p_p;
		cout<<"\nsales pitzza  Quantity :"<<s_p;
		cout<<"\nremaining Pitzza Quantity :"<<p_p-s_p;
		cout<<"\nTotal pitzza price in a day :"<<p;
		//displaying details for burger.
	  
		cout<<"\n\nPurchase burger Quantity :"<<p_b;
		cout<<"\nsales burger  Quantity :"<<s_b;
		cout<<"\nremaining burger Quantity :"<<p_b-s_b;
		cout<<"\nTotal burger price in a day :"<<b;
		//displaying details for sandwitch

		cout<<"\n\nPurchase sandwitch Quantity :"<<p_s;
		cout<<"\nsales sandwitch  Quantity :"<<s_s;
		cout<<"\nremaining sandwitch Quantity :"<<p_s-s_s;
		cout<<"\nTotal sandwitch price in a day :"<<s;
		//displaying details for ice-cream

		cout<<"\n\nPurchase ice-cream Quantity :"<<p_i;
		cout<<"\nsales ice-cream  Quantity :"<<s_i;
		cout<<"\nremaining ice-cream Quantity :"<<p_i-s_i;
		cout<<"\nTotal ice-cream price in a day :"<<i;
			//displaying details for forcake

		cout<<"\n\nPurchase cake Quantity :"<<p_c;
		cout<<"\nsales cake  Quantity :"<<s_c;
		cout<<"\nremaining cake Quantity :"<<p_c-s_c;
		cout<<"\nTotal cake price in a day :"<<c;
		
		//overall profite 
		cout<<"\n\ntotal profit of the day :"<<p+b+s+i+c;
		break;
		case 7:
		exit(0);
		default:
		cout<<"\n\n\n\t you entered invaid key....";
	}
	getch();
	goto p;
   
}
