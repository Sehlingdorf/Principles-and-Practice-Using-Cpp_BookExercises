#include <iostream>
#include <math.h>

using namespace std;

void solve_quadratic_equation(double a, double b, double c);

int main(){
    // Initialze
    double a,b,c;

    // Get the coefficients
    cout << "Type in the coefficients a*x^2 + b*x +c in the order [a|b|c] as doubles: ";
    cin >> a >> b >> c;

    solve_quadratic_equation(a,b,c);

}

void solve_quadratic_equation(double a, double b, double c){
    if(a == 0.0) {
        if(b == 0.0){
            if(c == 0.0) {
                cout << "The equation has only zero coeff!" << endl;
            } else {
                cout << "No solution for a constant not equal to zero" << endl;
            }
        } else {
            cout << "Linear function with solution: " << -c/b << endl;
        }
    } else {
        if(b*b-4*a*c < 0) {
            cout << "The expression has no solution." << endl;
        } else if (b*b-4*a*c == 0) {
            cout << "The expression has one solution " << -b/(2*a) << endl;
        } else {
            cout << "The two solutions are: " << endl;
            cout << (-b+sqrt(b*b-4*a*c))/(2*a) << endl;
            cout << (-b+sqrt(b*b-4*a*c))/(2*a) << endl;
        }
    }
}