/*
     tic cross game part 4;
     logic
*/
#include<iostream>
#include<conio.h>
using namespace std;
//declaration and intiliazation of array
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int turn='x';
int row,col;
int p;
bool draw=true;


//creating  display funtion
void display()
{
	system("cls");
	cout<<"\n\n\n\t\t\t TIC CROSS GAME.. ";
	cout<<"\n\t\t-------------------------------------------------";
	cout<<"\n\t\t|\t\t|\t\t|\t\t|";
	cout<<"\n\t\t|\t"<<board[0][0]<<"\t|\t"<<board[0][1]<<"\t|\t"<<board[0][2]<<"\t|";
	cout<<"\n\t\t|\t\t|\t\t|\t\t|";
	cout<<"\n\t\t-------------------------------------------------";
	cout<<"\n\t\t|\t\t|\t\t|\t\t|";
	cout<<"\n\t\t|\t"<<board[1][0]<<"\t|\t"<<board[1][1]<<"\t|\t"<<board[1][2]<<"\t|";
	cout<<"\n\t\t|\t\t|\t\t|\t\t|";
	cout<<"\n\t\t-------------------------------------------------";
	cout<<"\n\t\t|\t\t|\t\t|\t\t|";
	cout<<"\n\t\t|\t"<<board[2][0]<<"\t|\t"<<board[2][1]<<"\t|\t"<<board[2][2]<<"\t|";
	cout<<"\n\t\t|\t\t|\t\t|\t\t|";
	cout<<"\n\t\t-------------------------------------------------";
}
//creating function 3 for winning game
bool wingame()
{ 
    for(int i=0;i<=2;i++)
	if(board[i][0]==board[i][1]&&board[i][0]==board[i][2] ||board[0][i]==board[1][i]&&board[0][i]==board[2][i])
	{ 
	    draw=false;
		return false;	
	}

	if(board[0][0]==board[1][1]&&board[0][0]==board[2][2] ||board[0][2]==board[1][1]&&board[0][2]==board[2][0])
    {
    	{
			 	 
	    draw=false;
		return false;	
	}
	}
	for(int i=0;i<=2;i++)
	for(int j=0;j<=2;j++)
	if(board[i][j]!='x'&&board[i][j]!='y')
	return true;
	return false;
}
// creating function 2 for player turn
void game()
{
	int choice;
	p:
	if(turn=='x')
	cout<<"\n\t player 1 [X] :";
	else
	cout<<"\n\t player 2 [y] :";
	cin>>choice;
	switch(choice)
	{
		case 1:row=0;col=0;break;//1
	    case 2:row=0;col=1;break;//2
		case 3:row=0;col=2;break;//3
		case 4:row=1;col=0;break;//4
	    case 5:row=1;col=1;break;//5
		case 6:row=1;col=2;break;//6
		case 7:row=2;col=0;break;//7
		case 8:row=2;col=1;break;//8
		case 9:row=2;col=2;break;//9
		default:cout<<"\n\n\tinvalid key....plz try again...";
		getch();
		goto p;
	}
	if(turn=='x'&&board[row][col]!='x'&&board[row][col]!='y')
	{
		board[row][col]='x';
		turn='y';
	}
		else if(turn=='y'&&board[row][col]!='x'&&board[row][col]!='y')
	{
		board[row][col]='y';
		turn='x';
	}
	else
	{
		cout<<"\n\t index is already filled.....try another one ...";
		getch();
	}
    	display();
}
int main()
{
	//calling diplay function
	while(wingame())
	{
	display();
	game();//called function game
	}
	if(turn=='x'&&draw==false)
	cout<<"\n\n\tcongratulation player 2 [y] has won the match..."<<endl;
	else if(turn=='y'&&draw==false)
	cout<<"\n\n\tcongratulation player 1 [x] has won the match..."<<endl;
	else
	cout<<"\n\n\t Game draw....";
	return 0;
}

