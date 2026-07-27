#include <iostream>
#include <string>
#include <cmath>
double validateInput()
{
    double input;
    while (true)
    {
        std::cin >> input;
        if (std::cin.fail())
        {
            std::cout << "Invalid input!" << std::endl
                      << "Please enter a valid number: " << std::endl;
            std::cin.clear();
            std::cin.ignore(1000, '\n');
        }
        else
        {
            return input;
        }
    }
}

double addi(double summand1, double summand2)
{
    return summand1 + summand2;
}

double subt(double minuend, double subtrahend)
{
    return minuend - subtrahend;
}

double mult(double factor1, double factor2)
{
    return factor1 * factor2;
}

double divi(double dividend, double divisor)
{
    return dividend / divisor;
}

int main()
{
    int running = 1;
    while (running == 1)
    {
        std::cout << "\n";
        std::cout << "What kind of calculation would you like to perform??" << std::endl;
        std::cout << "\n";
        std::cout << "1(Addition)  ";
        std::cout << "2(Subtraction)  ";
        std::cout << "3(Multiplication)  " << std::endl;
        std::cout << "4(Division)  ";
        std::cout << "5(Exponential)  ";
        std::cout << "6(Logarithm)" << std::endl;

        int x = validateInput();
        switch (x)
        {
        case 1:
        {
            std::cout << "Addition" << std::endl;
            std::cout << "Enter 2 numbers\n";
            double num1, num2;
            num1 = validateInput();
            num2 = validateInput();
            double Summe = addi(num1, num2);
            std::cout << "= " << Summe << std::endl;
            break;
        }
        case 2:
        {
            std::cout << "Subtraction" << std::endl;
            std::cout << "Enter 2 numbers\n";
            double num1, num2;
            num1 = validateInput();
            num2 = validateInput();
            double Differenz = subt(num1, num2);
            std::cout << "= " << Differenz << std::endl;
            break;
        }
        case 3:
        {
            std::cout << "Multiplication" << std::endl;
            std::cout << "Enter 2 numbers\n";
            double num1, num2;
            num1 = validateInput();
            num2 = validateInput();
            double Produkt = mult(num1, num2);
            std::cout << "= " << Produkt << std::endl;
            break;
        }
        case 4:
        {
            std::cout << "Division" << std::endl;
            std::cout << "Enter 2 numbers\n";
            double num1, num2;
            num1 = validateInput();
            num2 = validateInput();

            if (num2 == 0)
            {
                std::cout << "You cannot divide by 0" << std::endl;
            }
            else
            {
                double quotient = divi(num1, num2);
                std::cout << "= " << quotient << std::endl;
            }
            break;
        }
        case 5:
        {
            std::cout << "Exponential" << std::endl;
            double num1, num2;
            std::cout << "Enter your base" << std::endl;
            num1 = validateInput();
            std::cout << "Enter your exponent" << std::endl;
            num2 = validateInput();
            std::cout << "= " << pow(num1, num2);
            std::cout << "\n";
            break;
        }
        case 6:
        {
            bool valid = false;
            while (!valid)
            {
                std::cout << "Logarithm" << std::endl;
                double num1, num2;
                std::cout << "Enter your base" << std::endl;
                num1 = validateInput();
                std::cout << "Enter your number" << std::endl;
                num2 = validateInput();
                if (num2 <= 0 || num1 <= 0 || num1 == 1)
                {
                    std::cout << "Invalid input for logarithm" << std::endl;
                }
                else
                {
                    valid = true;
                    std::cout << "= " << log(num2) / log(num1) << std::endl;
                }
            }
            break;
        }
        default:
            std::cout << "Invalid input" << std::endl;
            break;
        }
        std::cout << "Continue(1) exit(0)" << std::endl;
        running = validateInput();
    }
    return 0;
}