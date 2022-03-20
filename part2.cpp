#include <iostream>
#include <string>
using namespace std;

class Converter
{
public:
    float fromFtoC(float Fah)
    {
        float Celcius;
        Celcius = 5 * (Fah - 32) / 9;

        return Celcius;
    }
    void conv_print()
    {
        string inp;
        cout << "What's the temperature? ";
        cin >> inp;
        float Fah = stof(inp);
        cout << "The temperature is " << fromFtoC(Fah) << " degree Celcius\n";
    }
};


int main()
{
    Converter temperature;
    temperature.conv_print();

    return 0;
}