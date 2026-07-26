#include <iostream>
#include <string>

double validateInput()
{
    double input;
    while (true)
    {
        std::cin >> input;
        if (std::cin.fail())
        {
            std::cout << "Invalid input! Please enter a valid number: " << std::endl;
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
        std::cout << "What kind of calculation would you like to perform??" << std::endl;
        std::cout << "1(+)  ";
        std::cout << "2(-)  ";
        std::cout << "3(*)  ";
        std::cout << "4(/)" << std::endl;

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
            std::cout << Summe << std::endl;
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
            std::cout << Differenz << std::endl;
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
            std::cout << Produkt << std::endl;
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
                std::cout << quotient << std::endl;
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
