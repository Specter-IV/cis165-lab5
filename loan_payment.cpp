#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double loan_amount;
    cout << "Input loan amount" << endl;
    cin >> loan_amount;

    double annual_rate;
    cout << "Input annual interest rate (as percentage)" << endl;
    cin >> annual_rate;

    double number_of_payments;
    cout << "Input number of monthly payments" << endl;
    cin >> number_of_payments;

    double monthly_rate;
    monthly_rate = (annual_rate / 100.0) / 12.0;

    double monthly_payment;
    if (monthly_rate == 0.0)
    {
        monthly_payment = loan_amount / number_of_payments;
    }
    else
    {
        monthly_payment = (monthly_rate * pow(1.0 + monthly_rate, number_of_payments))
            / (pow(1.0 + monthly_rate, number_of_payments) - 1.0) * loan_amount;
    }

    double amount_paid_back;
    amount_paid_back = monthly_payment * number_of_payments;

    double interest_paid;
    interest_paid = amount_paid_back - loan_amount;

    double monthly_rate_percentage;
    monthly_rate_percentage = monthly_rate * 100.0;

    cout << fixed << setprecision(2);

    cout << "----- Loan Payment Report -----" << endl;
    cout << left << setw(32) << "Loan Amount:" << loan_amount << endl;
    cout << left << setw(32) << "Monthly Interest Rate:" << monthly_rate_percentage << "%" << endl;
    cout << left << setw(32) << "Number of Payments:" << number_of_payments << endl;
    cout << left << setw(32) << "Monthly Payment:" << monthly_payment << endl;
    cout << left << setw(32) << "Amount Paid Back:" << amount_paid_back << endl;
    cout << left << setw(32) << "Interest Paid:" << interest_paid << endl;

    return 0;
}
