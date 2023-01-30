#include<iostream>

using namespace std;
int A[100];
int n;
bool NEXT = true;
void init() {
	for (int i = 0; i < n; i++) {
		A[i] = 0;
	}
}

void result() {
	for (int i = 0; i < n; i++) {
		cout << A[i] << " ";
	}
	cout << endl;
}
void generate() {
	int k = n/2;
	while (A[k] != 0 && k < n) {
		k++;
	}
	if (k==n) {
		NEXT = false;	
	}
	else {
		A[k]=A[n-1-k]=1;
		for (int i = n-k;i<k;i++) {
			A[i] = 0;
		}
	}
}

int main() {
	cin >> n;
	init();
	while (NEXT) {
		result();
		generate();
	}
	return 0;
}
