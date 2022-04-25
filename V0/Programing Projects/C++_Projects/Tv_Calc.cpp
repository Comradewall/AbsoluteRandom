#include <Math.h>
#include <iostream>

using namespace std;

int main()
{
	// Vt-Velocitate terminala(m/s)
	// ro-densitatea aerului(kg/m3)
	// Cd-coeficientul de frecare(-)
	// A-Aria sectiunii corpului(m2)
	// T-Temperatura aerului(K)
	// P-Presiunea atmoseferica(Pa)
	// Rsp-Constanta specifica a gazului(J/(kg*K))
	float Vt,ro,A,Cd,g,T,P,Rsp;
	Rsp = 287.058
	cout<<"Calculator pentru velocitatea terminala a unui obiect sub conditii atmosferice ideale."<<endl;
	cout<<"Asumand ca aerul este uscat si coeficientul gazos este constant."
	cout<<"Greutatea obiectului:";
	cin>>g;
	cout<<"Temperatura:";
	cin>>T;
	cout<<"Presiunea atmosferica:";
	cin>>P;
	cout<<"Aria Sectiunii obiectului:";
	cin>>A;
	cout<<"Coeficientul de frecare al obiectului:";
	cin>>Cd;
	ro = P/(Rsp*T)
	cout<<ro<<endl;
}