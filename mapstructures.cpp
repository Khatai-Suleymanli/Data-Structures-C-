#include <bits/stdc++.h>
using namespace std;

int main()
{
	map <string, int> m;
	m["monkey"] = 4;
	m["banana"] = 3;
	m["lion"] = 1;
	cout<<m["monkey"]<<endl;
	cout<<m["eagle"]<<endl; // bele olanda default olaraq sifir edir cavabi
	
	if(m.count("monkey"))
	{
		cout<<"key exist"<<endl;
	}
	
	for(auto x : m)
	{
		cout<<x.first<<" "<<x.second<<"\n";
	}
	
}
