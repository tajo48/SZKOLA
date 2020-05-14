#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int ilosc = 40; 
int tab[ilosc];


void wypisz(int tab[], int k)
{
    int d = 0;
    for (int c = 0; c < ilosc; c++)
    {
        cout << tab[c] << " ";
        d++;
        if (d % k == 0) cout << endl;
    }
}

int main()
{
    int k = 10;
    srand(time(NULL));

    for (int c = 0; c < ilosc; c++) 
        tab[c] = 10 + rand() % 11;

	
    wypisz(tab, k);
    cout << endl;


    int c = 0;
    int d, t[11] = { 0 };
    for (int c = 0; c < ilosc; c++)
    {
        d = tab[c];
        t[d - 10]++;



    }



    for (int q = 10; q < 21; q++ && c++) cout << q << " pojawia sie " << t[c] << " razy" << endl;



    cout << endl;
    int o = 0, l = 10;
    for (int q = 0; q <= 10; q++) 
    {

        for (int c = 0; c < ilosc; c++) 
        {
            o++;
            if (l == tab[c]) 
            {
                cout << l << " " << "po raz pierwszy pojawia sie "  << o << endl; 
                break; 
            }
            if (o == ilosc)
            {
                cout << l << " " << "nie pojawia sie ani razu" << endl; 
                break; 
            }


        }
        l++; 
        o = 0; 
    }
    cout << endl << "Piotr Swiercz" << endl << "Klasa 1CG";
}
