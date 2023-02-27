#include <iostream>

using namespace std;
int drink (int option);
int moneyy (int money, int a);

int main () 
{
	int option;
	int money;
	cout <<"Vending machine <3 "<<endl;
	cout <<"Enter your money" << endl;
	cin >> money;
	if (money<5000) {
		cout <<"Go away!"<<endl;
		exit(0);
		}
	cout <<"What do you want to drink?"<< endl;
	cin >> option;
	int a=drink(option);
	moneyy (money,a);
}

int drink (int option) {
	switch (option) {
		case 1:
			cout <<"C2 tea"<<endl;
			return 1;
			break;
		case 2:
			cout <<"Sting"<<endl;
			return 2;
			break;
		case 3:
			cout <<"Pepsi"<<endl;
			return 3;
			break;
		case 4:
			cout <<"Warrior"<< endl;
			return 4;
			break;
		case 5:
			cout <<"Pure Water"<<endl;
			return 5;
			break;
	}
}

int moneyy (int money, int a) {
	if (a==1) {
		cout <<"So luong"<<" "<<money /9000<<endl;
		cout <<"Tien thua"<<" "<<money-((money/9000)*9000)<<endl;
	}
	else if (a==2) {
		cout <<"So luong"<<" "<<money /11000<<endl;
		cout <<"Tien thua"<<" "<<money-((money/11000)*11000)<<endl;
	}
	else if (a==3) {
		cout <<"So luong"<<" "<<money /10000<<endl;
		cout <<"Tien thua"<<" "<<money-((money/10000)*10000)<<endl;
	}
	else if (a==4) {
		cout <<"So luong"<<" "<<money /13000<<endl;
		cout <<"Tien thua"<<" "<<money-((money/13000)*13000)<<endl;
    }
    else if (a==5) {
		cout <<"So luong"<<" "<<money /5000<<endl;
		cout <<"Tien thua"<<" "<<money-((money/5000)*5000)<<endl;
		}
}
