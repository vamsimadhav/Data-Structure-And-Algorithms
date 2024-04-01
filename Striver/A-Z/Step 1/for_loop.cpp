#include<iostream>
using namespace std;

int main(){
    int n;
        cin >> n;
        vector<int> fib;
        fib.push_back(0);
        fib.push_back(1);
        fib.push_back(1);

        for(int i=2; i<n; i++){
                fib.push_back(fib[i] + fib[i-1]);
        }

        cout << fib[n] << endl;
}