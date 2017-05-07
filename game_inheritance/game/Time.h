#ifndef TIME
#define TIME

class Time{
public:
	Time();
	int getyr();
	int getmn();
	int getdy();
	int gethr();
	int getmin();
	int getsec();
private:
	int yr,mn,dy,hr,min,sec;
};


#endif