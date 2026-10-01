#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	long long ar[200000];
	for (int i = 0; i < n; i++){
		cin >> ar[i];
	}
	
	long movs = 0;
	for (int i = 1; i < n; i++){
		if (ar[i] < ar[i - 1]){
			movs += (ar[i - 1] - ar[i]);
			ar[i] = ar[i - 1];
		}
	}
	cout << movs << endl;
	
	return 0;
}
