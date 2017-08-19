#include <iostream>
using namespace std;
int main()
{
float sueldo;
cout<<"Ingresa tu sueldo actual: ";
cin>>sueldo;
/*
Sin necesidad de usar otras variables, calcula el nuevo sueldo de acuerdo a la siguiente tabla
rango aumento
0 - 1000 18% 
1001 - 1100 15%
1101 - 1200 12%
1201 - 1300 10%
mas de 1300 8%
*/
if(sueldo>=0)
{

  if(sueldo<=1000)
    sueldo*=1.18;
    cout<<"\nTu nuevo sueldo es : "<<sueldo;
}
else
    if(sueldo>=1001)
    {
	  if(sueldo<=1100)
        sueldo*=1.15;
        cout<<"\nTu nuevo sueldo es : "<<sueldo; 
    }
    else
        if(sueldo>=1101)
        {
		  if(sueldo<=1200)
            sueldo*=.12;
            cout<<"\nTu nuevo sueldo es : "<<sueldo;;  
        }
        else
           if(sueldo>=1201)
           {
		     if(sueldo<=1300)
               sueldo*=.10;
               cout<<"\nTu nuevo sueldo es : "<<sueldo; 
           }
           else
              if(sueldo>=1300)
              {
                sueldo*=.8;
                cout<<"\nTu nuevo sueldo es : "<<sueldo; 
              }
              else
          
 return 0;

}
