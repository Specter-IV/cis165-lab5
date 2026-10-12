# CIS 165 Lab 5 — Compound Interest and Loan Payments

## Programs

This repository contains two C++ programs:

- `compound_interest.cpp` calculates the final amount and interest earned using the principal balance, annual interest rate, and compounding frequency.
- `loan_payment.cpp` calculates the monthly loan payment, total amount paid back, and total interest using the loan amount, annual interest rate, and number of monthly payments.

## Initial plans

### Program 1: Compound interest

1. Ask for the principal balance, annual interest rate as a percentage, and number of times interest is compounded during one year.
2. Convert the annual percentage to a decimal by dividing it by 100.
3. Calculate the final amount using `principal * pow(1.0 + rate / times_compounded, times_compounded)`.
4. Calculate interest earned by subtracting the principal from the final amount.
5. Display the interest rate, compounding frequency, principal, interest earned, and final amount to two decimal places.

### Program 2: Monthly loan payment

1. Ask for the loan amount, annual interest rate as a percentage, and number of monthly payments.
2. Convert the annual percentage into a monthly decimal rate using `annual_rate / 100 / 12`.
3. Use `pow` and the loan-payment formula to calculate the monthly payment.
4. Multiply the monthly payment by the number of payments to calculate the total paid back.
5. Subtract the original loan amount from the total paid back to calculate the interest paid.
6. Display the loan amount, monthly interest rate, number of payments, monthly payment, total paid back, and interest paid to two decimal places.

## Testing

Expected values below were calculated using the formulas in the lab instructions. Actual values are based on the attached source files as they currently stand. Re-run both programs after making any corrections and confirm the output matches.

| Program and test | Inputs | Expected results | Actual results from current source | Match or correction |
| --- | --- | --- | --- | --- |
| Compound interest — assigned | Principal: 1000; annual rate: 4.25%; times compounded: 12 | Interest earned: **$43.34**; amount in savings: **$1,043.34** | Final amount: **$1,043.34**. The program does not currently display the calculated interest earned. | Final amount matches. Add an output line for `InterestEarned` so both required results appear. |
| Compound interest — changed | Principal: 2500; annual rate: 3.5%; times compounded: 4 | Interest earned: **$88.66**; amount in savings: **$2,588.66** | Final amount: **$2,588.66**. The program does not currently display the calculated interest earned. | Final amount matches. Add an output line for `InterestEarned`. |
| Loan payment — assigned | Loan: 10000; annual rate: 12%; payments: 36 | Monthly rate: **1.00%**; monthly payment: **$332.14**; amount paid back: **$11,957.15**; interest paid: **$1,957.15** | Monthly rate: **1.00%**; monthly payment: **$332.14**; amount paid back: **$11,957.15**; interest paid: **$1,957.15** | Calculations match. Change the output label from “payments completed” to “number of payments” to match the assignment wording. |
| Loan payment — changed | Loan: 5000; annual rate: 6%; payments: 24 | Monthly rate: **0.50%**; monthly payment: **$221.60**; amount paid back: **$5,318.47**; interest paid: **$318.47** | Monthly rate: **0.50%**; monthly payment: **$221.60**; amount paid back: **$5,318.47**; interest paid: **$318.47** | Calculations match. Change the output label from “payments completed” to “number of payments” to match the assignment wording. |

### Test calculation notes

For the changed compound-interest test:

- Decimal annual rate: `3.5 / 100 = 0.035`
- Final amount: `2500 * pow(1 + 0.035 / 4, 4) = $2,588.66`
- Interest earned: `$2,588.66 - $2,500.00 = $88.66`

For the changed loan-payment test:

- Monthly rate: `6 / 100 / 12 = 0.005`, or `0.50%`
- Monthly payment: approximately `$221.60`
- Amount paid back: approximately `$5,318.47`
- Interest paid: approximately `$318.47`

## Explanation questions

### Why must a percentage be divided by 100 before using it in a formula?

A percentage is expressed out of 100. Dividing it by 100 converts it into a decimal that can be used in the formula. For example, 5% becomes `0.05`.

### How does `pow` represent exponentiation?

`pow(base, exponent)` from `<cmath>` raises the base to the given exponent. For example, `pow(1.05, 6)` calculates \(1.05^6\).

### What does the number of compounding periods change in the savings formula?

It changes how the annual rate is divided into periods and how many times the growth factor is applied. The program uses the formula specified in the lab instructions.

### How is an annual interest rate converted to a monthly rate?

First divide the percentage by 100 to convert it to a decimal, then divide by 12. For example, 12% annually becomes `12 / 100 / 12 = 0.01`, or 1% per month.

### Why should `double` be used for these calculations?

`double` can store fractional values, which are needed for interest rates and financial calculations. It also provides more precision than an integer type.

### Why should calculations use full precision when money is displayed to two decimal places?

Rounding intermediate results can cause small errors to accumulate. The program should keep the unrounded values for calculations and round only when displaying the final results.

### How are the amount paid back and total interest calculated?

The amount paid back is the monthly payment multiplied by the number of monthly payments. Total interest is the amount paid back minus the original loan amount.

### Why are calculations stored in variables before being displayed?

Storing results in variables makes the calculations easier to read, test, debug, and reuse. It also follows the course rule against putting formulas directly inside `cout`.

## Running the programs

The programs can be tested using OnlineGDB:

1. Open OnlineGDB and select C++ as the language.
2. Open or paste the contents of `compound_interest.cpp` into the editor and click **Run**.
3. Enter the test values when prompted and compare the output with the expected results above.
4. Repeat with `loan_payment.cpp`.
5. After making corrections, rerun all four tests and update the actual-results column if the output changes.

The repository should contain these four files at its top level:

- `compound_interest.cpp`
- `loan_payment.cpp`
- `README.md`
- `AI_REFLECTION.md`

## Final checks before submission

- [ ] Both programs compile and run.
- [ ] The compound-interest program displays both interest earned and the final amount.
- [ ] All four test cases have been rerun after the final code changes.
- [ ] Variable names follow the course rule for meaningful lowercase names, and named constants use `ALL_CAPS`.
- [ ] Calculations are stored in variables before output.
- [ ] The public GitHub repository is named `cis165-lab5` and contains all four files at the top level.
- [ ] The repository and final commit are visible while signed out of GitHub.
