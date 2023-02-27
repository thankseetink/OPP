/*#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main (){
float C;
cout <<" Nhap nhiet do C:"<<endl;
cin >> C;
float F= ((C*(9*1.0/5)) +32);
cout<< fixed << setprecision(2)<<" Do F la:"<<F<<endl;
return 0;
}*/
    
/*#include<stdio.h>
#include<math.h>
int main(void){
	int h,m;
	float t,T;
	printf ("Enter hours and minutes since power failure :");
	scanf ("%d %d",&h,&m);
 h=h*60;
	t=((h*1.0+m)/60);
	T=( ( (4*t*t)/(t+2) ) -20 );
	printf ("Temperature in freezer = %4.2f\n",T);
	return 0;
	} */
/*bài7
#include <stdio.h>
int main (void){
    int y;
    printf ("enter year:");
    scanf("%d",&y);
    if(( ( y%4)==0 )&&((y%100)!=0)){
    printf ( "leap year\n");}
    else { 
    printf ("not leap year\n");}
    return 0;
    }*/
/*bài 8
#include <stdio.h>
    int main (void){
    int a,b;
    printf ("enter 2 numbers:\n");
    scanf ("%d %d",&a,&b);
    if ( a>b) {
    printf ("Maximum is a %d\n",a);
    }
    else{
    printf ("Maximum is b %d\n",b);
    }
    return 0;}*/
/* Bài 9
#include <stdio.h>
int main (void){
    int a,b,c;
    printf ("Enter 3 numbers :\n");
    scanf ("%d %d %d", &a,&b,&c);
    if (( a>b)&&(a>c))
    { printf (" Maximum is %d\n",a);}
    else if(( b>a)&&(b>c)){
    printf ( "Maximum is %d\n",b);}
    else {
    printf ("Maximum is %d\n",c);}
    }*/
/*
#include <stdio.h>
int main(void){
    int a;
    printf (" Enter a number");
    scanf ("%d",&a);
    if (( a%2)==0 ){
    printf ( " %d is even\n",a);}
    else { 
    printf ("%d is odd\n",a);}}*/
/*Bài 12
#include <stdio.h>
int main(void){
    float a,b,c;
    printf(" Enter 3 angles of triangle");
    scanf("%f %f %f", &a,&b,&c);
    if ( (a<180) &&( b<180)&&(c<180)&&((a+b+c)==180))
    {
    printf ("The triangle is valid");}
    else { 
    printf( " The triangle is unvalid");}
    }*/
/*Bài 13
#include <stdio.h>
int main(void){
    float Physics, Chemistry,Biology, Mathematics, Computer;
    float total ,percent;
    printf ("Enter your mark\n");
    printf ("Physics :\n");
    scanf ("%f",&Physics);
    printf ("Chemistry :\n");
    scanf ("%f",&Chemistry);
    printf ("Biology :\n");
    scanf ("%f",&Biology);
    printf ("Mathematics :\n");
    scanf ("%f", &Mathematics);
    printf ("Computer :\n");
    scanf ("%f", &Computer);
    total = (Physics +Chemistry +Biology +Mathematics +Computer);
    percent = ((total /50)*100);
    if (percent >90){
    printf ("You are grade A with %2.2f %%",percent);}
    else if (percent >80){
    printf ("You are grade B with %2.2f %%",percent);}
    else if (percent >70){
    printf ("You are grade C with %2.2f %%",percent);}
    else if (percent >60){
    printf ("You are grade D with %2.2f %%",percent);}
    else if (percent >40){
    printf ("You are grade E with %2.2f %%",percent);}
    if (percent <40){
    printf ("You are grade F with %2.2f %%",percent);}
    return 0;
    }*/
/*#include<stdio.h>""
#include<math.h>
int main(void){
    char a;
    printf("Nhap ky tu\n");
    scanf("%c",&a);
    if (((a>=97 && a<=122) || (a>=65 && a<= 90)|| (a>=48 && a<=57)))
    { printf( "%c la chu so",a);}
    else { 
    printf("%c khong phai chu so",a);}
    return 0;
    }*/
#include <stdio.h>
#include <math.h>
float BasicFare (int dis){
	if (dis <=1000)
	return 3,4;
	else if ((dis <=10200)&&(dis >1000)){
		return 3,4 + ceil( ( (dis-1000)*1.0)/400)*0,22;
	}
	else {
	return 3,4 +23*0,22 + ceil ( ( ( dis -10200)*1.0)/350)	*0,22;
	}
}
float Surcharge (float type, float time, float basic){
	float surcharge ;
	if (time <360)
		surcharge =0,5 *basic;
	else if ( (time <=569)&&(time >=360) ){
			if (type ==1)
			surcharge =0,25*basic;
			else 
				surcharge =0;
		}
    else if ( ( time >569)&&( time <= 1080) )
    surcharge =0;
		else if ((time >1080)&&(time <1440)) 
			surcharge =0.25*basic ;
			return surcharge;
	} 
int main (void){
	int nowday;
 float nowtime, distance, FirstFare, totalFare, Lastsurcharge;
	printf("Day type :" );
	scanf ("%d",nowday);
 printf ("Boarding hour and minute : ");
	scanf ("%f", nowtime) ;
	printf ("Distance : ");
	scanf ("%f",distance);
 FirstFare =	BasicFare ( distance);
 Surcharge (nowday, nowtime, FirstFare);
	printf ("Total taxi fare is : %f" , totalFare);
	return 0;
	}
	

#include <iostream>
#include <math.h>
using namespace std;
float BasicFare (float Khoangcach) {
	float phicoban;
	if (Khoangcach <= 1000) {
		phicoban = 3.4;
	}
	else if ((Khoangcach > 1000) && (Khoangcach <= 10200)) {
		phicoban = 3.4 + ceil (((Khoangcach - 1000)*1.0)/400) * 0.22;
	}
	else if (Khoangcach > 10200) {
		phicoban = 3.4 + (23*0.22) + ceil (((Khoangcach - 10200) * 1.0) / 350)*0.22;
	}
	return phicoban;
}


float Surcharge (float Gio, float Loaingay, float phicoban) {
	float phuthu=0;
	float TONG=0;
	if (Gio < 360) {
		phuthu += phicoban * (0.5);
		}
	else if ((Gio >= 360) && (Gio <= 569 )) {
		if (Loaingay == 0) {
			phuthu = 0;
		}
		else if (Loaingay == 1) {
			phuthu += phicoban*0.25;
		}
	}
	else if ((Gio >= 1080) && (Gio < 1440)) {
		phuthu += phicoban * (0.25);
	}
	TONG = phuthu + phicoban;
cout << "TONG:" << " " << TONG << endl;
}




int main () {
	float a;
	float b;
	float c;
	cout << "Nhap Loai ngay:" << " " << endl;
	cin >> a;
	cout << "Nhap Thoi gian:" << " " << endl;
	cin >> b;
	cout << "Nhap khoang cach:" << " " << endl;
	cin >> c;
	float sum = BasicFare(c);
	Surcharge (b,a,sum);
}


	


