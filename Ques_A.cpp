#include <vector>
#include <fstream>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n, i, sum, temp;
	vector<int>weight;
	ifstream infile("file.in", ios::in);
	
	infile >> n;
	for(i = 0;i < n;++i){
		infile >> temp;
		weight.push_back(temp);
	}
	sort(weight.begin(), weight.end());
	for(i = n-1, sum = 0;i >= n-5;--i){
		sum = sum + weight.at(i);
	}
	cout << sum << endl;
	return 0;
}
