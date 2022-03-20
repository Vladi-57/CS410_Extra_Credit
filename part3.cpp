#include <iostream>
#include <string>
using namespace std;

class Converter
{
public:
    static Converter* getInstance()
    {
        if (!instance)
        {
            instance = new Converter;
        }
        return instance;
    };
    ~Converter();

    float fromFtoC(float Fah)
    {
        float Celcius;
        Celcius = 5 * (Fah - 32) / 9;

        return Celcius;
    }

private:
    Converter(){}
    static Converter* instance;
};

Converter  *Converter::instance =  0;
int main(){
    string inp;
    float temperature;
    cout << "whats the temperature? ";
    cin >> inp;

    temperature = stof(inp);
    cout<< Converter::getInstance()->fromFtoC(temperature)<<" degree Celc.\n";
    return 0;
}