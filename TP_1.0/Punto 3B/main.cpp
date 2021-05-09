#include <iostream>

using namespace std;

int main()
{
    float M1,B1,M2,B2,x,y;
    bool coord = true;

    cout << "ingresar datos de las rectas:" << endl;
    cout << "M1:" <<endl;
    cin >> M1;
    cout << "B1:" <<endl;
    cin >> B1;
    cout << "M2:" <<endl;
    cin >> M2;
    cout << "B2:" <<endl;
    cin >> B2;
    if (B1>=0 && B2>=0){
    cout << "las rectas son: Y=X."<<M1<<"+"<<B1<<" y Y=X."<<M2<<"+"<<B2<< endl;
    }
    if(B1<0 && B2>=0){
    cout << "las rectas son: Y=X."<<M1<<B1<<" y Y=X."<<M2<<"+"<<B2<< endl;
    }
    if(B1>=0 && B2 <0){
      cout << "las rectas son: Y=X."<<M1<<"+"<<B1<<" y Y=X."<<M2<<B2<< endl;
    }
    if (B1<0 && B2<0){
        cout << "las rectas son: Y=X."<<M1<<B1<<" y Y=X."<<M2<<B2<< endl;
    }
    x = (B2-B1)/ (M1-M2);
    y = x*M1 + B1;

    if (B2== B1 && M1 == M2){
       cout << "ambas rectas son iguales" <<  endl;
       coord = false;
    }
    if (M1==M2&& B1!= B2){
        cout<< "las rectas son paralelas " << endl;
        coord = false;
    }
     if(coord == true){
    cout << "la interseccion se produce en el punto:" << " (" <<x <<";"<<y<<")"<< endl;
     }
    return 0;
}
