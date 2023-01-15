#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v;
	v.push_back(5);
	v.push_back(6);             //pop_back() deletes the last element
	v.push_back(3);             //back() shows the last element

	
	cout<<v[0]<<v[1]<<v[2]<<endl;
	
	//vector elemenlerini gormek ucun
	for(int i=0; i<v.size(); i++)
	{
		cout<<v[i];
	}
	
	cout<<"\n";
	
	//shorter way to see vector elements
	for(auto x:v)
	{
		cout<<x;
	}
}
