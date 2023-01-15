#include <bits/stdc++.h>
using namespace std;

// push_back(x) add one element to end of the vector
// back()  returns the last element in the vector
// pop_back() // removes the last element
// size() // size of the vector

int main(){
	vector <int> v1;
	v1.push_back(3); // [3]
	v1.push_back(2); // [3,2]
	v1.push_back(5); // [3,2,5]
	
	for(int i=0; i<v1.size(); i++){
		cout<<v1[i]<<"\n";
	}
	
	cout<<v1.back()<<"\n"; //5
	cout<<v1.at(2);  // this is preffered ov erv1[2] 
	v1.pop_back(); //[3,2]
			
	// shorter way to iterate through a vector
	for(auto x: v1){
		cout<<x<<"\n";
	}
	
	
	// another way of creating a vector
	vector <int> v2 = {2,4,6};
	for(auto x: v2){
		cout<<x<<"\n";
	}
	
		
	// another ways of creating vector
	vector <int> v3 (10); // size 10, initial value 0
		
	vector <int> v4 (10, 4); // size 10, initial value 4
}
