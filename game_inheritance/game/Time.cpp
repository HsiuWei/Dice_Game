#include <iostream>
#include "Time.h"
#include <ctime>
using namespace std;

Time::Time(){
	time_t current;

	time(&current);

	struct tm *pointer = localtime(&current);

	yr=pointer->tm_year+1900;
	mn=pointer->tm_mon+1;
	dy=pointer->tm_mday;
	hr=pointer->tm_hour;
	min=pointer->tm_min;
	sec=pointer->tm_sec;

	cout<<endl;
	cout<<"This round is executed at: "<< yr<<"/"<<mn<<"/"<<dy<<" "<<hr<<":"<<min<<":"<<sec<<endl;
	cout<<endl;
}

int Time::getyr(){
	return yr;
}
int Time::getmn(){

	return mn;
}
int Time::getdy(){

	return dy;
}
int Time::gethr(){
	return hr;

}
int Time::getmin(){
	return min;

}
int Time::getsec(){
	return sec;
}
