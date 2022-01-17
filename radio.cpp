#include <iostream>
using namespace std;

int k(int N, short P){
	const int array_size = 100000;
	int A[array_size];

	for (int i; i < N; i++) {
		cin >> A[i];
		A[i] = A[i] - P;
	}

	int current_max = A[0];
	int max_global = A[0];
	
	for(int i=0; i <= N; i++){
		current_max = max(A[i], A[i] + current_max);
		if (current_max > max_global) {
			max_global = current_max;
		}
	}
	cout << max_global << endl;
	return max_global;

}

int main() {
	int N;
	short P;
	cin >> N >> P;
	k(N, P);
	return 0;
}