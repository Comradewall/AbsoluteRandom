#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int opval,a,b,c,d,delta,x1,x2,med1,med2,sin,cos,tg,ctg,tpit,distab,coords1,coords2,g;
	OP:cout<<"What operation do you want to use?(1. for list)"<<endl;
	cin>>opval;
    if (opval == 1) {
    	cout<<"Math ez calc V0.1 "<<endl;
    	cout<<"2 is for 2nd grade equation"<<endl;
    	cout<<"3 is for aritmethic medium (4 var)"<<endl;
    	//U can modulate these to work with customizable vars but u wont bc u lazy
    	cout<<"4 is for geometric medium(3 var)"<<endl;
    	cout<<"5 is for sin/cos"<<endl;
    	cout<<"6 is for tg/ctg"<<endl;
    	cout<<"7 is for T. Pit."<<endl;
    	cout<<"8 is for distance between two points(reper cartezian)"<<endl;
    	cout<<"9 is for vector coordonate calc"<<endl;
    	cout<<"10 is for exit"<<endl;
        cout<<"11 is for calculating The G of an obj."<<endl;
    	goto OP;
    }
    else if (opval == 2) {
    //Easly breakable remeber add a limit and rest deduction
    cout<<"a= ";
    cin>>a;
    cout<<"b= ";
    cin>>b;
    cout<<"c= ";
    cin>>c;
    delta = (b*b)-4*(a*c);
    cout<<delta<<endl;
    x1 = (-b+sqrt(delta))/(2*a);
    x2 = (-b-sqrt(delta))/(2*a);
    cout<<"X1= "<<x1<<endl;
    cout<<"X2= "<<x2<<endl;
    goto OP;
    }
    else if (opval == 3){
     // This is sus oh and this code looks horible
     // Next add rest deduction
     cout<<"a= ";
     cin>>a;
     cout<<"b= ";
     cin>>b;
     cout<<"c= ";
     cin>>c;
     cout<<"d= ";
     cin>>d;
     med1 = (a+b+c+d)/4;
     cout<<"Med= "<<med1<<endl;
     goto OP;
     }
     else if (opval == 4){
     cout<<"a= ";
     cin>>a;
     cout<<"b= ";
     cin>>b;
     cout<<"c= ";
     cin>>c;
     med2 = sqrt(a*b*c);
     cout<<"Med2 = "<<med2<<endl;
     goto OP;
     }
     else if (opval == 5) {
     cout<<"cateta opusa = ";
     cin>>a;
     cout<<"cateta alturata = ";
     cin>>b;
     cout<<"ipotenuza = ";
     cin>>c;
     sin = a/c;
     cos = b/c;
     cout<<"Sin = "<<sin<<endl;
     cout<<"Cos = "<<cos<<endl;
     goto OP;
     }
     else if (opval == 6) {
     cout<<"cateta opusa = ";
     cin>>a;
     cout<<"cateta alturata = ";
     cin>>b;
     tg = a/b;
     ctg = b/a;
     cout<<"Tg = "<<tg<<endl;
     cout<<"Ctg = "<<ctg<<endl;
     goto OP;
     }
     else if (opval == 7) {
     cout<<"Cateta1 = ";
     cin>>a;
     cout<<"Cateta2 = ";
     cin>>b;
     tpit = (a*a)+(b*b);
     cout<<"Ipotenuza = "<<tpit<<endl;
     goto OP;
     }
     else if (opval == 8) {
     cout<<"Xa = ";
     cin>>a;
     cout<<"Xb = ";
     cin>>b;
     cout<<"Ya = ";
     cin>>c;
     cout<<"Yb = ";
     cin>>d;
     distab = sqrt(((b-a)*(b-a))+((d-c)*(d-c)));
     cout<<"Distance = "<<distab<<endl;
     goto OP;
     }
     else if (opval == 9) {
     cout<<"X1 = ";
     cin>>a;
     cout<<"X2 = ";
     cin>>b;
     cout<<"Y1 = ";
     cin>>c;
     cout<<"Y2 = ";
     cin>>d;
     coords1 = b-a;
     coords2 = d-c;
     cout<<"AB("<<coords1<<","<<coords2<<")"<<endl;
     goto OP;
     }
     else if (opval == 10) {
     }
     else if (opval == 11) {
     cout<<"m= ";
     cin>>a;
     g = a*9,81;
     cout<<"G = "<<g<<"N"<<endl;
     goto OP;
     }
     else {
     cout<<"E1:Wrong input. Retry..."<<endl;
     goto OP;
     }
     return 0;
}