#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>
using namespace std;
int doanso (int x, int b){
    int i, w, n = 5;
    do {
    for (i=0; i<n; i++) {
        if (b<x) {
            cout << "SO QUA THAP, MOI NHAP LAI:" << " " << endl; 
            cin >> b;
        }
        else if (b>x) {
            cout << "SO QUA CAO, MOI NHAP LAI:" << " " << endl;
            cin >> b;
        }
        
        else if(b==x){
            	cout << "SO CHINH XAC LA:" << " " << x << ", CHUC MUNG! BAN DA DUNG " << endl;
            	return 0;
				   	}   
    }
    cout << "Lai sai nua roi! Non vcl" << endl;
    cout << "Muon choi lai khong thang nhoc?" << endl;
    cin >> w;
    }
	while (w==1); 
    }
    
int main (){
    srand (time(NULL));
    int x = rand() %5+1;
    cout <<x<<endl;
    int b;
    cout << "Moi doan so:" << " " << endl;
    cin >> b;
    doanso (x , b);
}


