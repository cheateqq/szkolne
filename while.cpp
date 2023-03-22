#include <iostream>

using namespace std;

int main()
{
    int wplata,suma_wplat=0,zbieranie;
    
    cout<<"Ile zbieramy: ";
    cin>>zbieranie;
    
    while(suma_wplat<zbieranie){
        cout<<endl<<"Wprowadz kwote wplaty: ";
        cin>>wplata;
        suma_wplat=suma_wplat+wplata;
    }
    
    cout<<endl<<"Uzbierana kwota: "<<suma_wplat;
}




#include <iostream>

using namespace std;

int main()
{
    int a=25;
    do{
        cout<<a<<endl;
        a--;
    }
    while(i>=1);
    return 0 
}
