
#include <bits/stdc++.h> 
using namespace std; 


string decimalToBinary(int n) 
{ 
	
	string s = bitset<64> (n).to_string(); 
	
	
	const auto loc1 = s.find('1'); 
	
	if(loc1 != string::npos) 
		return s.substr(loc1); 
	
	return "0"; 
} 


int main() 
{ 
	int n;
	cin>>n;
	while(n--){
		int x;
		cin>>x;
		cout << decimalToBinary(x)<<"\n";
	} 
	return 0; 
} 
