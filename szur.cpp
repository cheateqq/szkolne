#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

void pierwiastek(){
	int x;
	cout<<"podaj liczbe "; cin>>x; cout<<endl;
	if(x<0){
		cout<<"liczba ujemna";
	}
	else{
		cout<<"Pierwiastek z "<<x<<" wynosi "<<sqrt(x);
	}
}

void najmniejsza(){
	int a, b, c;
	cout<<"podaj liczby "; cin>>a; cin>>b; cin>>c;
	
	if(a<b && a<c){
		cout<<"a jest najmniejsze";
	} 
	else if(b<a && b<c){
		cout<<"b jest najmniejsze";
	}
	else{
		cout<<"c jest najmniejsze";
	}
	
}

void polekola(){
	int pole, r;
	cout<<"Podaj r "; cin>>r;
	
	if(r>0){
		pole=M_PI*r*r;
	}
	else if(r<0){
		cout<<r+-1;
	}
	else{
		cout<<"rowna zero";
	}
	cout<<"pole = "<<pole;
}

void grupy(){
	int ocena, wynik, cos;
	cout<<"[1] - Ocena"<<endl<<"[2] - Wynik z testu"<<endl; cin>>cos;
	if(cos==1){
		cout<<"Wprowadz ocene "; cin>>ocena;
		if(ocena>=5) cout<<"grupa zaawansowana";
		else cout<<"grupa podstawowa";
	}
	if(cos==2){
		cout<<"Wprowadz wynik "; cin>>wynik;
		if(wynik>=90) cout<<"grupa zaawansowana";
		else cout<<"grupa podstawowa";
	}
}

void objwalca(){
	int h, r;
	cout<<"Wprowadz h i r "; cin>>h; cin>>r;
	if(h<0 || r<0) cout<<"bledne dane";
	else{
		cout<<"V = "<<M_PI*r*r*h;
	}
}




int main(){
	int g;
	cout<<"[1] - Pierwiastek z x"<<endl<<"[2] - Najmniejsza liczba"<<endl<<"[3] - Pole kola"<<endl<<"[4] - Grupowanie klas"<<endl<<"[5] - Objetosc walca"<<endl;
	cin>>g;
	if(g==1) pierwiastek();
	if(g==2) najmniejsza();
	if(g==3) polekola();
	if(g==4) grupy();
	if(g==5) objwalca();
	
	
	
}
