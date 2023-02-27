////#include <iostream>
////#include <math.h>
////using namespace std;
////int main () {
////	int i, j , k;
////	for (i = 0; i <= 200; ++i)
////	for (j = 0; j <= 100; ++j)
////	for (k = 0; k <= 40; ++k)
////	if (i*1000 + j*2000 + k*5000 ==200000) {
////		cout << i << "to 1000" << j << "to 2000" << k << "to 5000" << endl; 
////	}
////return 0;
////}
//
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main () {
//	double a;
//	cout << "Nhap diem tich luy:" << " ";
//	cin >> a;
//	if (a>=9) {
//		cout << "XUAT SAC";
//	}
//	else if (8<=a<9) {
//		cout << "GIOI";
//	}
//	else if (7<=a<8) {
//		cout << "KHA";
//	}
//	else if (6<=a<7) {
//		cout << "TRUNG BINH KHA";
//	}
//	else if (5<=a<6) {
//		cout << "TRUNG BINH";
//	}
//	else {
//		cout << "YEU";
//	}
//return 0;
//}

#include <iostream>
#include <string.h>
using namespace std;
double id, tuoi, diemtoan, diemly, diemhoa, dtb;
string ten, gioitinh;
cout << "Nhap id:";
cin >> id;
cout << "Nhap tuoi:";
cin >> tuoi;
cout << "Diem toan:";
cin >> diemtoan;
cout << "Diem ly:";
cin >> diemly;
cout << "Diem hoa:";
cin >> diemhoa;
dtb= (diemtoan + diemly + diemhoa)/3;
cout << "DTB la:" << " " << dtb << endl;
if (dtb>=8) {
	cout << "GIOI";
}
else if (6.5<=dtb<8) {
	cout << "KHA";
}
else if (5<=dtb<6.5) {
	cout << "TRUNG BINH"; 
}
else {
	cout << "YEU";
}


