#include <bits/stdc++.h>
using namespace std;

int main()
{
	// bitset is an array whose values are 0 or 1
	bitset<10> s;
	s[1] = 0;
	s[2] = 1;
	s[3] = 1;
	s[4] = 1;
	cout<<s[4]<<endl;
	cout<<s[1]<<endl;
	cout<<s[5]<<endl;  //bele element yoxdur deye 0 verir
	cout<<s.count()<<endl; //icindeki 1 lerin sayini gosterir
	
	
	//bitset yaratmagin basqa yolu
	bitset <10> m(string("0101101101")); 
	cout<<m[4]<<endl;  //sagdan sola oxuyur
}
