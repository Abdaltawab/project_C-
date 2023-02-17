#include <iostream>
using namespace std;
// this is a function to calculate the power
double power(double number1, int number2) {
    double ans = 1;
    for (int n = 0; n < number2; n++) {
        ans *= number1;
    }
    return ans;
}
// this is a function to calculate the factorial
double fact(int num)
{
    // base case
    if (num <= 1)
        return 1;
    else
        return num * fact(num - 1);
}

int main() {
    double angle;
    // get the angle from the user
    cout << "enter angle degrees" << endl;
    cin >> angle;

    angle = angle * (3.14 / 180);
    double sinx = 0, cosx = 0;
    for (int i = 0;i <= 14;i++)
    {

        cosx += (power(-1.0, i) * power(angle, 2 * i)) / fact(2 * i);
        sinx += (power(-1.0, i) * power(angle, (2 * i) + 1)) / fact((2 * i) + 1);
    }
    cout << "cos(x) = " << cosx << endl;
    cout << "sin(x) = " << sinx << endl;

    long double tanx = 0.0;
    long double Bernoulli[15] = { 1.0 / 6,-1.0 / 30,1.0 / 42,-1.0 / 30,5.0 / 66,-691.0 / 2730,7.0 / 6,-3617.0 / 510,43867.0 / 798,-174611.0 / 330,854513.0 / 138,-236364091.0 / 2730,8553103.0 / 6,
                       -23749461029.0 / 870,8615841276005.0 / 14322 };
    for (int n = 0;n <= 14;n++)
    {
        //A and C are symbols for the two equations

        int A = (2 * n) + 1;
        int C = (2 * n) + 2;
        tanx += ((power(-1.0, n) power(angle, A) * power(2.0, C)(power(2.0, C) - 1) * Bernoulli[n])) / (fact(C));


    }
    if (angle == 90) {
        cout << "tan(x) = Undefined" << "\n";
    }
    else
    {

        cout << "tan(x) = " << tanx << "\n";
    }
    return 0;

}