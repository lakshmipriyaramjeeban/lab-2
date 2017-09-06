#include <iostream>
using namespace std;
 
int main() 
{
	float a,b,c,d,e,total,avg,perc;
	cout<<"enter marks of 1st sub:";
	cin>>a;
	cout<<"enter marks of 2nd sub:";
	cin>>b;
	cout<<"enter marks of 3rd sub:";
	cin>>c;
	cout<<"enter marks of 4th sub:";
	cin>>d;
	cout<<"enter marks of 5th sub:";
	cin>>e;
	total=a+b+c+d+e;
	cout<<"total mark is:"<<total;
	avg=(a+b+c+d+e)/5;
	cout<<"average mark is:"<<avg;
	perc=((a+b+c+d+e)/500)*100;
	cout<<"percentage is:"<<perc;
 
 
	return 0;
}
