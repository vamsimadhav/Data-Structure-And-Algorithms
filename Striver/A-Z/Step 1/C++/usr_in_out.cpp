#include<iostream>
using namespace std;

int main() {
	char character;
	cin >> character;

	if(character >= 'A' && character <= 'Z'){
		cout << 1 << endl;
	}else if(character >= 'a' && character <= 'z'){
		cout << 0 << endl;
	}else{
		cout << -1 << endl;
	}
	
}
