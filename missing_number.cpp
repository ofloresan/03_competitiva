#include <iostream>
using namespace std;

int main(){
	long long n;
	cin >> n;
	
	long long num_falt = n * (n + 1) / 2;
	
	for (long long i = 0; i < n - 1; i++){
		long long x;
		cin >> x;
		num_falt -= x;
	}
	
	cout << num_falt << endl;
	
	return 0;
}
