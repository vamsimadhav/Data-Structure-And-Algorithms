#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int oddSum = 0;
	int evenSum = 0;

	while(n != 0){
		int rem = n % 10;
		if(rem % 2 == 0){
			evenSum += rem;
		}else{
			oddSum += rem;
		}
		n = n / 10;
	}
	cout << evenSum << " " << oddSum <<endl;
}
