#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double principal_balance;
    cout << "Input principal balance" << endl;
    cin >> principal_balance;

    double annual_rate;
    cout << "Input annual rate (as percentage)" << endl;
    cin >> annual_rate;

    double times_compounded;
    cout << "Input number of times interest is compounded during one year" << endl;
    cin >> times_compounded;

    double rate;
    rate = annual_rate / 100.0;

    double amount;
    amount = principal_balance * pow(1.0 + rate / times_compounded,
        times_compounded);

    double interest_earned;
    interest_earned = amount - principal_balance;

    cout << fixed << setprecision(2);

    cout << "----- Compound Interest Report -----" << endl;
    cout << left << setw(25) << "Principal Balance:" << principal_balance << endl;
    cout << left << setw(25) << "Annual Rate (%):" << annual_rate << endl;
    cout << left << setw(25) << "Compounding Frequency:" << times_compounded << endl;
    cout << left << setw(25) << "Interest Earned:" << interest_earned << endl;
    cout << left << setw(25) << "Amount in Savings:" << amount << endl;

    return 0;
}
