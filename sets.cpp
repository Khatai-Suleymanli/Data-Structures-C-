#include <bits/stdc++.h>
using namespace std;

int main()
{	
	set <int> s {3,7};
	s.insert(1);            // eger element artiq listin icinde varsa, insert onu daxil etmir
	s.insert(2);
	s.insert(5);
	cout<<s.count(5)<<endl; // bu ya 1 ya da 0 qaytarir, yeni icinde olub olmadigini bildirir
	s.erase(5);
	s.insert(6);
	cout<<s.size()<<endl;   //vectordan yegane ferq odur ki [] ile elementlere erise bilmirik
	
	for(auto x  : s)
	{
		cout<<x;
	}
	
	cout<<"\n"; 
	
	//unordered setde elementler sorted duzulusde olmur
	unordered_set <int> s1{2,3,1,8};
	
	for(auto z  : s1)
	{
		cout<<z;
	}
	
	
	cout<<"\n";
	
	//multiset - burada eyni elementden ne qeder istesek artia bilerik
	
	multiset <int> s2;
	s2.insert(5);
	s2.insert(5);
	
	for(auto k  : s2)
	{
		cout<<k;
	}
}
