#include <iostream>
using namespace std;

int fibonacci(int n, int& n1, int& n2, int& sum, int& x){
	if (x == n){
		return 0;
	}

	n1 = n2;
	n2 = sum;
	sum = n2 + n1;
	return sum;
}

void test(int n){
	n = n-3;
	int n1;
	int n2;
	int sum;
	for (int x=0; x < n; ++x){
		if (x == 0){
				n1 = 0;
				n2 = 1;
				sum = 1;
		cout << n1 << " " << n2 << " " << sum << " ";
		}
		cout << fibonacci(n, n1, n2, sum, x) << " ";
	}
}

int main(){
	cout << test(13) << endl;
}
