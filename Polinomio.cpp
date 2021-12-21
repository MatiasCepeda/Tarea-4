#include <iostream>
#include <vector>
#include <cmath>
#include <cstring>

using namespace std;

class Polinomio
{   
    private: 
        vector<double> V;
    public:
        Polinomio();
        Polinomio(vector<double> Vcoef);

        grade();

        ~Polinomio();
};

Polinomio::Polinomio() {V={0};}
Polinomio::Polinomio(vector<double> Vcoef) {V=Vcoef;};

Polinomio::grade() 
{
    int grade = sizeof(V) - 1;
    return grade;
}

int main() 
{
    //variables;
    vector<double> Vcoef;
    double x, coef;
    int i=0, n;

    //ejecucion
    cout << "Ingrese el numero de coeficientes: ";
    cin >> n;
    while (i<=n)    
    {
        cout << "Ingrese el coeficiente asociado a la variable: x^" << i << endl;
        cin >> coef;
        Vcoef.push_back(coef);
        i++;
    }
    // Polinomio p();
    // p.grade();  
    return 0;
}