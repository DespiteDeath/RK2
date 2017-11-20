#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sumN(int x) {
	int sum = 0;
	for(int i = 1; i < (x + 1); i++)
		sum += i;

	return sum;
}

void find(int sumN) {
	vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(5);
  v.push_back(3);
	vector<int>::iterator iter;
	int _sum = 0;
	
	for(iter = v.begin(); iter != v.end(); iter++) {
		cout << (*iter) << ' ';
		_sum += (*iter);
	}
	cout << endl;

	int delVal = sumN - _sum;
	cout << "Deleted value: " << delVal << endl;

	v.push_back(delVal);

	for(iter = v.begin(); iter != v.end(); iter++)

		cout << (*iter) << ' ';

	cout << endl;
}

int main() {

	int N = 5;
	int sum = sumN(N);
	find(sum);
	return 0;
	
}