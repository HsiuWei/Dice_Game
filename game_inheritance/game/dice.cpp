#include <iostream>
#include "dice.h"
#include <cstdlib>
#include <ctime>

using namespace std;

void dice::roll(){

	//Time();

	sum=0;

	srand(time(0));

	cout<<"rolling result is: "<<endl;

	for(int i=1;i<=2;i++){
		face = 1+rand()%6;
		sum+=face;

		switch(face){
		case 1:
		cout<<"1 point"<<endl;
		break;
		case 2:
		cout<<"2 point"<<endl;
		break;
		case 3:
		cout<<"3 point"<<endl;
		break;
		case 4:
		cout<<"4 point"<<endl;
		break;
		case 5:
		cout<<"5 point"<<endl;
		break;
		case 6:
		cout<<"6 point"<<endl;
		break;
	}

}

	cout<<"sum of the two points: "<<sum<<endl;
	cout<<endl;

}

int dice::getface(){

	return face;
}