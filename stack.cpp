#include <bits/stdc++.h>
using namespace std;

int main()
{
	stack <int> s;
	//axira artirib axirdan silir
	//stackin ancaq axirinci elementine erismek olur
	
	s.push(5);
	s.push(2);
	s.push(6);
	cout<<s.top()<<endl;
	s.pop();
	cout<<s.top()<<endl;

}
