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
	cout<<s[5]<<endl;  //if there is no such element it returns 0
	cout<<s.count()<<endl; //shows the count of 1 in the given bitset
	
	
	//bitset yaratmagin basqa yolu
	bitset <10> m(string("0101101101")); 
	cout<<m[4]<<endl;  //from right to left
}
