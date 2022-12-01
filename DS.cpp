#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v;
	v.push_back(5);
	v.push_back(6);             //pop_back() sonuncu elementi silir
	v.push_back(3);             //back() sonuncu elementi gosterir

	
	cout<<v[0]<<v[1]<<v[2]<<endl;
	
	//vector elemenlerini gormek ucun
	for(int i=0; i<v.size(); i++)
	{
		cout<<v[i];
	}
	
	cout<<"\n";
	
	//vector elemenlerini gormeye daha qisa yol
	for(auto x:v)
	{
		cout<<x;
	}
}
