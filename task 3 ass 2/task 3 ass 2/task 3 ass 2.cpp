#include <iostream>
using namespace std;
bool check(int size)
{
    // check the size is true or no
    if (size >= 14 && size <= 16)
    {
        return true;
    }
    else {
        return false;
    }
}
// const as array [] will be changed in for loop
// number = size
int sum(const int arr[], int n) {
    int sum = 0;
    if (n == 14 || n == 16) {
        for (int i = (n - 1); i >= 0; i--) {
            int l = 0;
            if (i % 2 == 0) {
                l = arr[i] * 2;
                if (l > 9) {
                    l = (l % 10) + 1;
                }
            }
            sum = sum + l;
        }
    }
    else {
        for (int i = (n - 1); i >= 0; i--) {
            int l = 0;
            if (i % 2 == 1) {
                l = arr[i] * 2;
                if (l > 9) {
                    l = (l % 10) + 1;
                }
            }
            sum = sum + l;
        }
    }
    return sum;
}
int sum2(const int array2[], int number) {
    int sum2 = 0;// to avoid the sum = 0 in the for loop
    if (number == 14 || number == 16)
    {
        for (int n = (number - 1); n >= 0; n--)
        {

            if (n % 2 == 1)
                sum2 = sum2 + array2[n];
        }
    }


    else
    {
        for (int n = 0; n < number; n++) {

            if (n % 2 == 1)

                sum2 = sum2 + array2[n];
        }

    }
    cout << sum2 << endl;
    return sum2;
}

int main() {


    long long num;
    cout << "enter num card " << endl;
    cin >> num;
    int size = 0;
    // as num will exit from the loop =0
    long long number = num;

    while (num != 0) {
        num /= 10;
        size += 1;
    }
    int arr[size];
    if (check(size) == 1) {



        for (int i = (size - 1); i >= 0; i--) {
            int n = int(number % 10);
            arr[i] = n;
            number = (number - (number % 10)) / 10;
        }
    }
    else
    {
        cout << "invalid number ";
    }

    int sum_1 = sum(arr, size);
    int sum_2 = sum2(arr, size);
    int sumAll = sum_1 + sum_2;
    if (sumAll % 10 == 0) {
        cout << "valid card ";
    }
    else {
        cout << "invalid card";
    }




    return 0;
}