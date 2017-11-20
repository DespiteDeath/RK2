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
	
	std::vector<int> v{4, 5, 3};
	std::vector<int> vF;
	std::vector<int>::iterator iter_v;
	std::vector<int>::iterator iter_vF;
	
	int _sum = 0;

	for(iter_v = v.begin(); iter_v != v.end(); iter_v++) {
		std::cout << (*iter_v) << ' ';
		_sum += (*iter_v);
	}
	std::cout << std::endl;

	int sumDelVals = sumN - _sum;
	int delValFst;
	int delValSec;

	for(int i = (sumDelVals/2); i != 0; i--)
		vF.push_back(i);


	for(iter_vF = vF.begin(); iter_vF != vF.end(); iter_vF++) {
		
		for(iter_v = v.begin(); iter_v != v.end(); iter_v++) {
			
			if( (*iter_vF) == (*iter_v) ) {
				vF.erase( iter_vF );
			} else {
				delValFst = (*iter_vF);
			}
		}
	}

	delValSec = sumDelVals - delValFst;

	std::cout << "Deleted values: " << delValFst << " \'n\' " << delValSec << std::endl;

	v.push_back(delValFst);
	v.push_back(delValSec);

	for(iter_v = v.begin(); iter_v != v.end(); iter_v++)
		std::cout << (*iter_v) << ' ';

	std::cout << std::endl;
}
