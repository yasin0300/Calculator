#include <iostream>
#include <string>

int addi(int summant1, int summant2)
{
    return summant1 + summant2;
}

int subt(int minuend, int subtrahend)
{
    return minuend - subtrahend;
}

int mult(int faktor1, int faktor2)
{
    return faktor1 * faktor2;
}

int divi(int divident, int divisor)
{
    return divident / divisor;
}

int main()
{
    int w = 1;
    while (w == 1)
    {
        std::cout << "Welche Art von Rechnung moechten sie durchfuehren?" << std::endl;
        std::string operatoren[] = {"1(+)  ", "2(-)  ", "3(*)  ", "4(/)"};
        for (int i = 0; i < 4; i++)
        {
            std::cout << operatoren[i];
        }
        std::cout << "" << std::endl;
        int x;
        std::cin >> x;
        if (x == 1)
        {
            std::cout << "Additon" << std::endl;
            std::cout << "Geben sie 2 Zahlen ein\n";
            int num1, num2;
            std::cin >> num1 >> num2;
            int Summe = addi(num1, num2);
            std::cout << Summe << std::endl;
        }
        else if (x == 2)
        {
            std::cout << "Subtraktion" << std::endl;
            std::cout << "Geben sie 2 Zahlen ein\n";
            int num1, num2;
            std::cin >> num1 >> num2;
            int Differenz = subt(num1, num2);
            std::cout << Differenz << std::endl;
        }
        else if (x == 3)
        {
            std::cout << "Multiplikation" << std::endl;
            std::cout << "Geben sie 2 Zahlen ein\n";
            int num1, num2;
            std::cin >> num1 >> num2;
            int Produkt = mult(num1, num2);
            std::cout << Produkt << std::endl;
        }
        else if (x == 4)
        {
            std::cout << "Division" << std::endl;
            std::cout << "Geben sie 2 Zahlen ein\n";
            int num1, num2;
            std::cin >> num1 >> num2;

            if (num2 == 0)
            {
                std::cout << "Sie koennen nicht durch 0 teilen" << std::endl;
            }
            else
            {
                int quotient = divi(num1, num2);
                std::cout << quotient << std::endl;
            }
        }

        std::cout << "Weiter(1) beenden(0)" << std::endl;
        std::cin >> w;
    }
    return 0;
}