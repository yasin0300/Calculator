#include <iostream>
#include <string>

double addi(double summant1, double summant2)
{
    return summant1 + summant2;
}

double subt(double minuend, double subtrahend)
{
    return minuend - subtrahend;
}

double mult(double faktor1, double faktor2)
{
    return faktor1 * faktor2;
}

double divi(double divident, double divisor)
{
    return divident / divisor;
}

int main()
{
    int w = 1;
    while (w == 1)
    {
        std::cout << "Welche Art von Rechnung moechten sie durchfuehren?" << std::endl;
        std::cout << "1(+)  ";
        std::cout << "2(-)  ";
        std::cout << "3(*)  ";
        std::cout << "4(/)" << std::endl;

        bool gultigeeingabe = false;
        int x;
        while (!gultigeeingabe)
        {
            std::cin >> x;
            if (std::cin.fail())
            {
                std::cout << "Ungueltige Eingabe!" << std::endl;
                std::cin.clear();
                std::cin.ignore(1000, '\n');
                std::cout << "Bitte geben sie eine gueltige Zahl ein" << std::endl;
            }
            else
            {
                gultigeeingabe = true;
                switch (x)
                {
                case 1:
                {
                    std::cout << "Additon" << std::endl;
                    std::cout << "Geben sie 2 Zahlen ein\n";
                    double num1, num2;
                    std::cin >> num1 >> num2;
                    double Summe = addi(num1, num2);
                    std::cout << Summe << std::endl;
                    break;
                }
                case 2:
                {
                    std::cout << "Subtraktion" << std::endl;
                    std::cout << "Geben sie 2 Zahlen ein\n";
                    double num1, num2;
                    std::cin >> num1 >> num2;
                    double Differenz = subt(num1, num2);
                    std::cout << Differenz << std::endl;
                    break;
                }
                case 3:
                {
                    std::cout << "Multiplikation" << std::endl;
                    std::cout << "Geben sie 2 Zahlen ein\n";
                    double num1, num2;
                    std::cin >> num1 >> num2;
                    double Produkt = mult(num1, num2);
                    std::cout << Produkt << std::endl;
                    break;
                }
                case 4:
                {
                    std::cout << "Division" << std::endl;
                    std::cout << "Geben sie 2 Zahlen ein\n";
                    double num1, num2;
                    std::cin >> num1 >> num2;

                    if (num2 == 0)
                    {
                        std::cout << "Sie koennen nicht durch 0 teilen" << std::endl;
                    }
                    else
                    {
                        double quotient = divi(num1, num2);
                        std::cout << quotient << std::endl;
                    }
                    break;
                }
                default:
                    std::cout << "Ungueltige Eingabe" << std::endl;
                    break;
                }
                std::cout << "Weiter(1) beenden(0)" << std::endl;
                std::cin >> w;
            }
        }
    }
    return 0;
} 
