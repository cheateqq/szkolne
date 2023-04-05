/*mehcanizmu generowania kolejnych liczb calk. oznacza to ze zapis ```srand(120);```  ustawi punkt startowy na 120. Aby uzyskac kazdorazowo inne wylosowane wartosci wraz w
kompilowanym programie nalezy powiazac funkcje srand z czasem rzeczywistym, ustawionym obecnie w komputerze. W tym celu należy dołączyć biblioteke <ctime> która umożliwi m. in.
skorzystanie z funkcji time. Funkcja ta zwraca obecny czas na komputerze w postaci liczby. Zapis ```rand()%100+1``` zainicjuje losowanie liczb od 1 do 100
zapis ```srand(time(NULL))``` nalezy wywolac tylko raz na samym poczatku programu*/

#include <iostream>
#include <cstdio>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include <time.h>
#include <math.h>

using namespace std;

int main(){
	int t[10],i,j;
	srand(time(NULL));
	int suma=0;
	
	for(i=0;i<10;i++){
		t[i]=rand()%100+1;
		cout<<"t["<<i<<"]= "<<t[i]<<endl;
		suma=suma+t[i];
	}
	
	cout<<"Suma wartosci tablicy wynosi: "<<suma;
	return 0;
}

#include <iostream>
#include <cstdio>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include <time.h>
#include <math.h>

using namespace std;




int main(){
	cout<<"-.-.-.-.-.-.-.-.-.-.-.-.-.-Zwolnienie blokady-.-.-.-.-.-.-.-.-.-.-.-.-.-"<<endl;
	int t[6],i,j,wylosowana;
	srand(time(NULL));
	
	for(i=0;i<6;i++){
		wylosowana=rand()%49+1;
		
	}
	while (wylosowana==t[0]||wylosowana==t[1]||wylosowana==t[2]||wylosowana==t[3]||wylosowana==t[4]||wylosowana==t[5]){
		wylosowana=rand()%49+1;

	t[i]=wylosowana;
	cout<<t[i]<<endl;
}


	return 0;
	
}


