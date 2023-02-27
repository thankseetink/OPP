#include <iostream>
using namespace std;
int main () {
	int n,b;
	cout << "Size:" << " ";
	cin >> n;
	int i, a[n];
	for (i=0; i<n; i++) {
		cin >> a[i];
	}
	cout << "Moi nhap so:" << " ";
	cin >> b;
	for (i=0; i<n; i++) {
		if (b==a[i]) {
			cout << "So nam trong mang";
			exit (0);
		}
			
		}
		cout << "So nam ngoai mang"; 
	}

