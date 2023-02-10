#include <iostream>

using namespace std;



int bok;
int obwod(){
    return 4*bok;
}
int main(){
    cout<<"Podaj bok kwadratu";
    cin>>bok;
    cout<<"obwod kwadratu o boku "<<bok<<"wynosi "<<obwod();
    return 0;
}
