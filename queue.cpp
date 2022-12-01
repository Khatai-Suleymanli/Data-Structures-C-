#include <bits/stdc++.h>

using namespace std;
int main()
{
	//stackle eyni seydir sadece axira eded artirib evvelden silir
	//axirinci ve evvelki elemente erismek olur ancaq
	
	queue <int> q;
	q.push(3);
	q.push(5);
	q.push(2);
	cout<<q.front()<<endl;
	q.pop();
	cout<<q.front()<<endl;
}
