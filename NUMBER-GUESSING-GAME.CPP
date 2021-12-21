#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
#include<time.h>

void main()
{
    int a,b,c=0,d=0,f=0;
    clrscr();
    cout<<"********Welcome To Guessing Number Game **********"<<endl;
    cout<<"******************** Rules ***********************"<<endl;
    cout<<"1.Enter y for yes and n for exit the game"<<endl;
    cout<<"2.You have to enter number in between 1-10"<<endl;

    char e;

    do
    {

	cout<<"Enter the guess number from 1-10 you think: ";
	cin>>a;
	cout<<endl;
	srand(time(0));
	b=rand()%10+1;

	if(b==a)
	{
	    cout<<"Congratulations you guess correct number."<<endl;
	    c++;
	}
	else
	{
	    cout<<"Sorry,you have guess worng number,Try again."<<endl;
	    d++;
	}
	f++;
	cout<<"Do you want to try again y/n: ";
	cin>>e;
	cout<<endl;
	if(e=='n'||e=='y'){}
	else
	{
	    cout<<"Invalid input.Plz enter again to play game or to exit"<<endl;
	}
    }while(e!='n');
    cout<<"You tried "<<f<<" times"<<endl;
    cout<<"You guessed correct number "<<c<<" times"<<endl;
    cout<<"You guessed wrong number  "<<d<<" times"<<endl;
    getch();
}