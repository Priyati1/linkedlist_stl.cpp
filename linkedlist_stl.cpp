#include<iostream>
#include<list>//cpp reference list
using namespace std;
int main(){
	list<int>l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	l.push_back(5);//yaha humko yeh nhi pata ki kitne no ko insert kiya hain
	// meaning n nhi pata aur nikal bhi nhi sakte 
	// for such we use ---->>>>  for each loop
	for(auto node:l){
		cout<<node<<" ";
	}
	return 0;
}