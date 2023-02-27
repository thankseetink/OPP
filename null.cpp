#include <iostream>
using namespace std;

void swap (int *x, int *y) {
	int dan=*x;
	*x=*y;
	*y=dan;
}
int main () {
	int n=1000; int m=2000;
	swap (&n, &m);
	cout << n << " " << m << endl;
	return 0;
}

