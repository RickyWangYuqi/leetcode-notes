#include <iostream>
#include <vector>
using namespace std;

int main(){
	int a = 120;
	int b = 367;
	vector<int> test;
	while(a != 0){
		test.push_back(a % 10);
		a = a / 10;
	}
	while(b != 0){
		test.push_back(b % 10);
		b = b / 10;
	}
	for(int i : test) {
		cout << i;
	}
}
