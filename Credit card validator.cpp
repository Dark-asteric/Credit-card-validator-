// Using Luhn Algorithm

#include <iostream>
#include <vector>
using namespace std;

int main(){
	string credit_card;
	cin>>credit_card;
	vector<int>v;
	for(int i=0;i<credit_card.size();i++){
		v.push_back(credit_card[i] - '0');
	}
	for(int i=0;i<credit_card.size();i += 2){
		int temp = v[i]*2;
		if(temp > 9){
			temp = (temp%10) + 1;
		}
		v[i] = temp;
	}
	int result = 0;
	for(auto it:v){
		result += it;
	}
	if(result & 1){
		cout<<"False\n";
	}
	else
		cout<<"True\n";
	return 0;
