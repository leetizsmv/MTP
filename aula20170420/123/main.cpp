#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int ce,cg;
    float pct,pck,vc,vi,vt;
    cout << "Digite o codigo do estado de origem da carga: ";
    cin >> ce;
    cout << "\nDigite o peso da carga em toneladas: ";
    cin >> pct;
    cout << "\nDigite o codigo da carga: " << endl;
    cin >> cg;
    if (cg>=10 && cg<=20)
    {
        vc = 100*pct*1000;
    }
    else if (cg>=21 && cg<=30)
    {
        vc = 250*pct*1000;
    }
    else
    {
        vc = 340*pct*1000;
    }
    pck = pct*1000;
    cout << "O peso da carga em kilos eh: " << pck;
    cout << "\nO Preço da carga eh: " << vc << endl;
    if (ce==1)
        vi = vc*0.35;
    else if (ce==2)
        vi = vc*0.25;
    else if (ce==3)
        vi = vc*0.15;
    else if (ce==4)
        vi = vc*0.05;
    else
        vi = 0;
    cout << "O valor do imposto sobre a carga eh: " << vc << endl;
    vt = vc+vi;
    cout << "O valor total transportado pelo caminhaum eh de: " << vt << endl;
    system("pause");
    return 0;
}
