#include <iostream>

using namespace std;

int main()
{
    float M1,B1,M2,B2,x,y;

    //aca se toman los datos
    cout << " M1:" <<endl;
    cin >> M1;
    cout << " B1:" <<endl;
    cin >> B1;
    cout << " M2:" <<endl;
    cin >> M2;
    cout << " B2:" <<endl;
    cin >> B2;
    //aca se calcula la interseccion
      if(M1 != M2)
       {
        x = (B2 - B1) / (M1 - M2);
        y = x * M1 + B1;

        cout << "la interseccion se produce en el punto:" << " ( " <<x <<";"<<y<<")"<< endl;
       }
     //aca se ejecuta un mensaje en caso de que no se pueda realizar el calculo (esto ya que no se puede dividir por 0)
     if (M1 == M2)
        {
            if (B1 != B2)
            {
             cout << "las rectas son paralelas" << endl;
            }
            else;
            {
             cout <<"las rectas son iguales"<< endl;
            }
        }
    return 0;
}
