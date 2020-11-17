#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s1="XYYZXZYZXXYZ";
	string r=s1.substr(2,3);
	string r1=s1.substr(4,5);
	string r11=r1.substr(0,3);

string r2=s1.substr(6,9);
string r22=r2.substr(0,3);

string r3=s1.substr(9,11);



	cout<<"Substring "<<r<<" present at index "<<s1.find(r)<<endl;
	cout<<"Substring "<<r11<<" present at index "<<s1.find(r11)<<endl;
	cout<<"Substring "<<r22<<" present at index "<<s1.find(r2)<<endl;
	cout<<"Substring "<<r3<<" present at index "<<s1.find(r3)<<endl;
	return 0;
}
