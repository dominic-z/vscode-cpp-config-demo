#include <iostream>

const int INPUT_SIZE = 20;
const int DAILY_EXPENSE = 8000;
const int CASH_DEPOSIT = 2000;

const float MID_TERM_RATIO = 0.4;
const float MID_TERM_DOMESTIC = 0.8;
// const float MID_TERM_OUTBOUNDS = 0.3;

const float LONG_TERM_RATIO = 0.6;

const float LONG_TERM_DOMESTIC = 0.7;
// const float LONG_TERM_OUTBOUNDS = 0.3;

float get_income()
{

    std::cout << "input income: ";
    char input[20];
    std::cin.getline(input, INPUT_SIZE);
    float income = atof(input);
    return income;
}

void income_distribution(float income)
{

    std::cout << "your income is " << income << std::endl;

    std::cout << "\tyour short term deposit is " << DAILY_EXPENSE + CASH_DEPOSIT << std::endl;
    std::cout << "\t\tyour daily expense is " << DAILY_EXPENSE << std::endl;
    std::cout << "\t\tyour cash deposit is " << CASH_DEPOSIT << std::endl;

    float left = income - DAILY_EXPENSE - CASH_DEPOSIT;

    float mid_term_inv_sum = left * MID_TERM_RATIO;
    float mid_term_domestic_inv = mid_term_inv_sum * MID_TERM_DOMESTIC;
    float mid_term_outbounds_inv = mid_term_inv_sum - mid_term_domestic_inv;
    std::cout << "\tyour mid term inv sum is " << mid_term_inv_sum << std::endl;
    std::cout << "\t\tyour mid term domestic inv is " << mid_term_domestic_inv << std::endl;
    std::cout << "\t\tyour mid term outbounds inv is " << mid_term_outbounds_inv << std::endl;

    left -= mid_term_inv_sum;
    float long_term_inv_sum = left;
    float long_term_domestic_inv = long_term_inv_sum * LONG_TERM_DOMESTIC;
    float long_term_outbounds_inv = long_term_inv_sum - long_term_domestic_inv;
    std::cout << "\tyour long term inv sum is " << long_term_inv_sum << std::endl;
    std::cout << "\t\tyour long term domestic inv is " << long_term_domestic_inv << std::endl;
    std::cout << "\t\tyour long term outbounds inv is " << long_term_outbounds_inv << std::endl;
}

int main()
{

    float income = get_income();
    income_distribution(income);

    return 0;
}
