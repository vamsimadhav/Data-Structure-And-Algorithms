#include<iostream>
using namespace std;
#include<vector>
#include <math.h>

double areaSwitchCase(int ch, vector<double> a) {

	switch(ch){
		case 1:
			return M_PI * a[0] * a[0];
		case 2:
			return a[0] * a[1];
	}
    return -1;
}

int main(){
    vector<double> d;
    d.push_back(10);
    cout << areaSwitchCase(1, d) << endl;
}
