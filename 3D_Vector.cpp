#include <iostream>

using namespace std;

class Vector
{
    private:
        double x, y, z, coef;
    public:
        Vector(); //para inicializar
        Vector(double xcoo, double ycoo, double zcoo);
        
        void setx(double xc); // para fijar
        void sety(double yc);
        void setz(double zc);
        void setcoef (double coefc);

        double gx(); // para entregar los valores en main 
        double gy();
        double gz();

        Vector scalar(double coef); // producto vector scalar
        Vector sum(Vector b); // sumas de vectores
        double dot(Vector b); // producto punto
        Vector cross(Vector b); // producto cruz

        ~Vector();
};

Vector::Vector() {x=0, y=0, z=0;}
Vector::Vector(double xcoo, double ycoo, double zcoo) {x=xcoo, y=ycoo, z=zcoo;}

void Vector::setx(double xc) {x=xc;};
void Vector::sety(double yc) {y=yc;};
void Vector::setz(double zc) {z=zc;};
void Vector::setcoef (double coefc) {coef=coefc;};

double Vector::gx() {return x;}
double Vector::gy() {return y;}
double Vector::gz() {return z;}

Vector Vector::scalar(double coef)
{
    Vector Scalar;
    Scalar.x = x*coef;
    Scalar.y = y*coef;
    Scalar.z = z*coef;
    return Scalar;
}

Vector Vector::sum(Vector b)
{
    Vector Sum;
    Sum.x = x + b.x;
    Sum.y = y + b.y;
    Sum.z = z + b.z;
    return Sum;
}

double Vector::dot(Vector b) {return x*b.x + y*b.y + z*b.z;}

Vector Vector::cross(Vector b) 
{
    Vector Cross;
    Cross.x = y*b.z - z*b.y;
    Cross.y = z*b.x - x*b.z;
    Cross.z = x*b.y - y*b.x;
    return Cross;
}

Vector::~Vector() {}

int main() 
{
    double x=0, y=0, z=0, c=0;
    Vector v1;

    cout << "Ingresar las coordenas x,y,z del vector v1, separando cada entrada con vacios: ";
    cin >> x >> y >> z;
    v1.setx(x); 
    v1.sety(y); 
    v1.setz(z);

    cout << "Vector v1 despues de fijar las coordenadas: <" << v1.gx() << "," << v1.gy() << "," << v1.gz() << ">" << endl;

    cout << "Ingresar las coordenas x,y,z del vector v2, separando cada entrada con vacios: ";
    cin >> x >> y >> z;
    Vector v2(x, y, z);
    cout << "Vector v2 despues de fijar las coordenadas: <" << v2.gx() << "," << v2.gy() << "," << v2.gz() << ">" << endl;

    cout << "Ingresar coeficiente para el producto escalar con v1: ";
    cin >> c;
    Vector Scalar = v1.scalar(c);
    cout << "El produto escalar entre v1 y el coeficiente elegido es: (" << Scalar.gx() << "," << Scalar.gy() << "," << Scalar.gz() << ")" << endl;

    Vector Sum = v1.sum(v2);
    cout << "La suma entre los vectores es: (" << Sum.gx() << "," << Sum.gy() << "," << Sum.gz() << ")" << endl;

    cout << "El producto punto entre v1 con v2 es = " << v1.dot(v2) << endl;
    
    Vector Cross = v1.cross(v2); 
    cout << "El producto cruz entre v1 con v2 es = (" << Cross.gx() << "," << Cross.gy() << "," << Cross.gz() << ")" << endl;
}