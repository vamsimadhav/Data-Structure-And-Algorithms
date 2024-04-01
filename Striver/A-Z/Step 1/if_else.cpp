#include<iostream>
using namespace std;

string compareIfElse(int a, int b) {
    if(a < b){
        return "smaller";
    }else if (a > b){
        return "greater";
    }
    else{
        return "equal";
    }
}


int main() {
    string a = compareIfElse(4,1);

    cout << a << endl;
}