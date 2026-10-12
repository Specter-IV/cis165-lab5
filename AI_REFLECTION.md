# AI Reflection — Lab 5

## Tools used

I used ChatGPT to help plan the programs, explain the interest formulas, identify mistakes in the loan-payment formula, and calculate expected results for testing. I used OnlineGDB to run and check my C++ programs.

## One decision

One useful correction was realizing that the loan amount should multiply the fraction in the monthly-payment formula only once. Multiplying by the loan amount twice made the monthly payment much too large. I kept the calculation in a separate variable so it is easier to read and check.

## Verification

I checked the assigned loan test using a $10,000 loan, a 12% annual interest rate, and 36 monthly payments. The monthly rate was 1.00%, the monthly payment was $332.14, the amount paid back was $11,957.15, and the interest paid was $1,957.15. These values matched the lab's expected results. Testing the compound-interest program also showed that the final amount matched the expected amount, but the current program still needs to display the interest earned as a separate result.

## Learning

I can now convert annual percentages into decimal rates, use `pow` for exponentiation, and calculate the total paid back and interest paid. I still need to practice checking formulas carefully and reading compiler warnings, because a program can run successfully while still missing a required output or using a variable that is not displayed.
