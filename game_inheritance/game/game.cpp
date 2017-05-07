#include <iostream>
#include "game.h"

using namespace std;

void game::go(int a,int b){

	if (a<=1000&&a>0&&(b==1||b==2||b==3)){
	base = 1000;
	cout<<"Built-in money left: "<<base<<endl;

	bet=a;
	choice=b;

	roll();

	if (choice==1){
	
	if(sum<7){
	base+=bet;
	cout<<"Yeah~ you win!";
	}
	else {
	base-=bet;
	cout<<"Sorry~ you lose!";
	}
	}

	if (choice==2){
	if(sum==7){
	base=base+7*bet;
	cout<<"Yeah~ you win!";
	}
	else {
	base=base-7*bet;
	cout<<"Sorry~ you lose!";
	}
	}

	if (choice==3){
	if(sum>7){
	base+=bet;
	cout<<"Yeah~ you win!";
	}
		
	else{
	base-=bet;
	cout<<"Sorry~ you lose!";
	}
	}
	cout<<" (money you bet is "<<bet<<" and you choose "<<choice<<")"<<endl;
	cout<<endl;
	cout<<"Current money left is: "<<base<<endl;
	cout<<endl;
	}

	else{
	cout<<"Incorrect input for .go(int,int) function. Please reedit the values!"<<endl;
	cout<<endl;
	}
}

int game::getbase(){

return base;
}

int  game::getbet(){
return bet;

}

int game::getchoice(){
return choice;

}