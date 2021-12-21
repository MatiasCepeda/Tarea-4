#include <iostream>
#include <cmath>

using namespace std;

double Stretch1(double beta) 
{
    double gamma1;
    gamma1 = 1/(sqrt(1-beta*beta));
    return gamma1;
}

double Stretch2(double e)
{
    double gamma2;
    gamma2 = 1/(sqrt((2-e)*e));
    return gamma2;
}

int main() 
{
    double b=0, e, g_e;
    int i=1;
    e=0.001;
    g_e = Stretch2(e);
    // despejando b 
    b = sqrt(1-1/(g_e*g_e));
    cout << "El maximo valor de beta para una presicion de 0,001 o menos es: " << b << endl;
}