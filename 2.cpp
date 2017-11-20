
#include <iostream>
#include <vector>

int sumN(int);
void find(int);

int main(int argc, char const *argv[]) {
	int N = 5;
	int sum = sumN(N);
	find(sum);
	return 0;
}

int sumN(int x) {
	int sum = 0;
	for(int i = 1; i < (x + 1); i++)
		sum += i;

	return sum;
}

void find(int sumN) {
	std::vector<int> v{1, 4, 5, 3};
	std::vector<int>::iterator iter;
	int _sum = 0;

	for(iter = v.begin(); iter != v.end(); iter++) {
		std::cout << (*iter) << ' ';
		_sum += (*iter);
	}
	std::cout << std::endl;

	int delVal = sumN - _sum;
	std::cout << "Deleted value: " << delVal << std::endl;

	v.push_back(delVal);

	for(iter = v.begin(); iter != v.end(); iter++)
		std::cout << (*iter) << ' ';

	std::cout << std::endl;
}
