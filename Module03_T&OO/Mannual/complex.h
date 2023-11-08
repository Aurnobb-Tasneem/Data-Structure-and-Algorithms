#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class Complex {
public:
    Complex();
    Complex(double, double);
    Complex operator+(const Complex&);
    Complex operator*(const Complex&);
    bool operator!=(const Complex&);
    void Print() const;

private:
    double Real, Imaginary;
};

#endif // COMPLEX_H_INCLUDED
