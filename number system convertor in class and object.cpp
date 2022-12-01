#include<iostream>
#include<math.h> 
#include<string.h> 
using namespace std;



class convertor{
    	private:
    	long long int num3,num2;    //global variables num3,num2;
        string num_hexa;  // global variable for (inputed) hexadecimal value
        int choice; //     'choice' variable for choosing number system (FROM)
        int choice2;// and 'choice2' variable for choosing number system (TO)

        public:
        convertor(){
        num3=0;
        num2=0;
        		system("cls");
      
	cout<<"Please Select Number System:\n";
	cout<<" which Type of value you Entering? i.e (FROM) \t\t\t(Made by Mudassir Shoukat)\n";
	cout<<"\tPress 1 for Binery:\n";
	cout<<"\tPress 2 for Octal:\n";       // this is first manu (FROM)
	cout<<"\tPress 3 for Decimal:\n";
	cout<<"\tPress 4 for Hexadecimal:\n";
	cin>>choice;
	system("cls");
	if(choice==1)
	{
		from_binery();
	}
	else if(choice==2)
	{
		from_octal();
	}
	else if(choice==3)
	{
		from_decimal();
	}
	else if(choice==4)
	{
		from_hexadecimal();
	}
    else{
	cout<<"\nInvalid choice\n";
    }
system("cls");

cout<<"\n\nSelect a Number System\n";
cout<<"  value to be convert into? i.e : (TO) \t\t\t(Made by Mudassir Shoukat)\n";
	cout<<"\tPress 1 for Binery:\n";
	cout<<"\tPress 2 for Octal:\n";
	cout<<"\tPress 3 for Decimal:\n";
	cout<<"\tPress 4 for Hexadecimal:\n";
	cout<<"\tPress 5 for ALL:\n";
	cin>>choice2;
	system("cls");
	
	if(choice2==1)
	{
		if(choice==4)
		{cout<<"("<<num_hexa<<")"<<" = (";
		to_binery();
		cout<<") in binery\n";
		}
		else{
		cout<<"("<<num3<<")"<<" = (";
		to_binery();
		cout<<") in binery\n";
		}
	}
	else if(choice2==2)
	{
		if(choice==4)
		{
			cout<<"("<<num_hexa<<")"<<" = ("<<to_octal()<<") in Octal\n";
		}
		else
		{
		cout<<"("<<num3<<")"<<" = ("<<to_octal()<<") in Octal\n";
		}
	}
	else if(choice2==3)
	{
		if(choice==4)
		{
		cout<<"("<<num_hexa<<")"<<" = ("<<to_decimal()<<") in Decimal\n";
		}
		else
		{
			cout<<"("<<num3<<")"<<" = ("<<to_decimal()<<") in Decimal\n";
		}
	}
	else if(choice2==4)
	{ 
	if(choice==4)
	{  cout<<"("<<num_hexa<<") = (";	}
	else
	{  cout<<"("<<num3<<") = (";  }
	to_hexadecimal();
	cout<<")\n";
	}
 else if(choice2==5)
{	if(choice==4)
	{cout<<"("<<num_hexa<<")"<<" = (";
		to_binery();
		cout<<")in binery";
	cout<<"("<<num_hexa<<")"<<" = ("<<to_octal()<<") in Octal\n";
	cout<<"("<<num_hexa<<")"<<" = ("<<to_decimal()<<") in Decimal\n";
	cout<<"("<<num_hexa<<")"<<" = (";
	to_hexadecimal();
	cout<<") in HexaDecimal\n";
	}
	else
	{cout<<"("<<num3<<")"<<" = (";
		to_binery();
		cout<<")in binery";
	cout<<"("<<num3<<")"<<" = ("<<to_octal()<<") in Octal\n";
	cout<<"("<<num3<<")"<<" = ("<<to_decimal()<<") in Decimal\n";
	cout<<"("<<num3<<")"<<" = (";
	to_hexadecimal();
	cout<<") in HexaDecimal\n";
	}}
	
else{	cout<<"\nInvalid choice\n";
//	return 0;
	}
    }
    
    ~convertor(){
	cout<<"Program Exited!  GOOD BYE\n";
    }
    
    void from_binery(){       //function for accepting BINERY input value (binery to decimal)
	long long int num1=0;
	int rem=0,sum=0;
	cout<<"Enter a Binery_Based value = ";
	cin>>num1;
	num3=num1;
	for(int i=0;num1>0;i++)
	{	rem=num1%10;
		if(rem<2){
		sum=sum+rem*pow(2,i);
		num1/=10;
		num2=sum;
		}
		else{
		cout<<"The number you entered Not belongs to Binery number system...\n\tTry again\n";
			from_binery();
			break;
		}
	}
}

void from_octal()       	//function for accepting OCTAL input value (octal to decimal)
{		int num1=0,rem=0,sum=0;
	cout<<"Enter a OCTAL_Based value = ";
	cin>>num1;
	num3=num1;
	for( int i=0;num1>0;i++)
	{
		rem=num1%10;
		if(rem<8){
		sum=sum+rem*pow(8,i);
		num1=num1/10;
		num2=sum;
		}
		else{
		cout<<"The number you entered Not belongs to Octal number system...\n\tTry again\n";
			from_octal();
			break;
		}	
	}
}
void from_decimal()				//function for accepting DECIMAL input value (decimal to decimal)
{
	char num1[100];
cout<<"Enter a Decimal_Based value = ";
	cin>>num1;
	int len=strlen(num1);
	for(int i=0;i<=len-1;i++){
	    if(num1[i]>=48&&num1[i]<=57){
	    num1[i]=num1[i]-48;
	    num2=num2*10+num1[i]; 
        }
        else{
        num2=0;
        cout<<"The number you entered Not belongs to Decimal number system...\n\tTry again\n";
        from_decimal();
        break;
        }
        num3=num2;
    }
	
}
void from_hexadecimal()			//function for accepting HEXADECIMAL input value (Hexadecimal to decimal)
{		
		int rem=0,ctr=0,sum=0;
		char num[20];
		num_hexa!=num;
	cout<<"Enter a Hexadecimal_Based value = ";
	cin>>num;
	num_hexa=num;     //asking for input a H.Decimal value
 int len=strlen(num);
	for(int i=len-1;i>=0;i--)
	{
		if(num[i]>='0'&&num[i]<='9')
		{
		sum+=(num[i]-48)*pow(16,ctr);
		num2=sum;
		}
		else if(num[i]>='a'&&num[i]<='f')
	{	sum+=(num[i]-87)*pow(16,ctr);
		num2=sum;
		}
		else if(num[i]>='A'&&num[i]<='F')
		{ 
		sum+=(num[i]-55)*pow(16,ctr);
		num2=sum;
		}
		else
		{
			cout<<"The number does not belongs to Hexadecimal...Try again\n ";
			num_hexa!=num;
			from_hexadecimal();
			break;
		}
	ctr++;
	}	
}
void to_binery(){			//function for converting Decimal Value to BINERY (Decimal to Binery)
	int num;
	num=num2;
	int num3[100],ctr=0;
	long double binery=0;
	for(int i=0;num>=1;i++)
	{
		num3[ctr]=num%2;
		num/=2;
		ctr=ctr+1;
	}
	ctr=ctr-1;
	for(int i=ctr;i>=0;i--)
	{
		cout<<num3[i];
	}
}
int to_decimal()			//function for converting Decimal Value to DECIMAL (Decimal to Decimal)
 {int decimal;
	decimal=num2;
	return decimal;
}
int to_octal(){				//function for converting Decimal Value to OCTAL (Decimal to OCTAL  )
		int oc_num,num3[500],octal=0,ctr=0;
		oc_num=num2;
	for(int i=0;oc_num>=1;i++)
	{
		num3[ctr]=oc_num%8;
		oc_num/=8;
		ctr=ctr+1;
	}
	ctr=ctr-1;
	cout<<endl;
	for(int i=ctr;i>=0;i--)
	{
		octal=octal*10+num3[i];
	}
	return octal;
}
void to_hexadecimal()		//function for converting Decimal Value to HEXADECIMAL (Decimal to Hexa)
{	char hexa[20];
	int num,rem,ctr=0;
	num=num2;
	for(int i=0;num>0;i++)
	{	rem=num%16;
		if(rem>=0&&rem<10)
		{
			hexa[i]=rem+48;	
		}
		else if(rem>=10&&rem<=15)
		{
			hexa[i]=rem+55;
		}
		num/=16;
		ctr++;
	}
	ctr=ctr-1;
	for(int i=ctr;i>=0;i--)
	{
		cout<<hexa[i];
	}
}

};


//void from_binery();
//void from_octal();
//void from_decimal();
//void from_hexadecimal();
//void to_binery();
//int to_decimal();
//int to_octal();
//void to_hexadecimal();



main()				//Main function
{
	int ter;  
	ter=1;
	do   
	{	
	
    convertor ob; //object
    
	cout<<"\n\t\t\t\t\t(Press -1 for Exit program) = "<<endl;		//Here is asking for terminationg
	cout<<"\t\t\t\t\t(Press 1 to restart program again ) = "<<endl; // and repeating the whole program
    cin>>ter;		//asking for -1 or 1
}
while(ter==1);

}




