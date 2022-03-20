#include <iostream>
#include <string>
using namespace std;

int main(){
    float Fah;
    float Celcius;
    string inp;
    
    cout << "What is the temperature? ";
    cin >> inp;
    Fah = stof(inp);
    Celcius = 5* (Fah-32)/9;

    cout << "The temperature is " << Celcius << " degree Celcius\n";

    


    return 0;
}