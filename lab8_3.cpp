#include<iostream>
using namespace std;

char before(char x){
	for(int i=1;i<=27;i++){
		if(x=='A'+i){
			return x-1;
		}else if(x=='A'){
			return 'Z';
		}
	}
	return '0';
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	
}
