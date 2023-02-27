#include <iostream>
#include <locale>
using namespace std;
int moneyy (int money, int to);
int main () 
{
	cout <<"This is trade money system"<<endl;
	int money,to;
	cout <<"Enter your money"<<endl;
	cin>> money;
	if ((money<10000) && (money%10000!=0)) {
		cout <<"Go away!"<< endl;
		exit (0);
	}
	moneyy (money,to);
}

int moneyy (int money, int to) 
{
	if (money>=10000){
		to=money/500000;
		money=money-(to*500000);	
		cout <<"SL to 500k la:" << " " << to << endl;
		to=money/200000;
		money=money-(to*200000);
		cout <<"SL to 200k la:" << " " << to << endl;
		to=money/100000;
		money=money-(to*100000);
		cout <<"SL to 100k la:" << " " << to << endl;
		to=money/50000;
		money=money-(to*50000);
		cout <<"SL to 50k la:" << " " << to << endl;
		to=money/20000;
		money=money-(to*20000);
		cout <<"SL to 20k la:" << " " << to << endl;
		to=money/10000;
		money=money-(to*10000);
		cout <<"SL to 10k la:" << " " << to << endl;
	}
	}
	

