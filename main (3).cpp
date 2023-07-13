/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

// Base class for weather conditions
class WeatherCondition {
protected:
    string condition;

public:
    WeatherCondition(string condition) : condition(condition) {}

    void displayCondition() {
        cout << "Weather Condition: " << condition << endl;
    }
};

// Derived class for temperature condition
class Temperature : public WeatherCondition {
private:
    double temperature;

public:
    Temperature(string condition, double temperature) : WeatherCondition(condition), temperature(temperature) {}

    void displayTemperature() {
        cout << "Temperature: " << temperature << " degrees Celsius" << endl;
    }
};

// Derived class for precipitation condition
class Precipitation : public WeatherCondition {
private:
    string type;

public:
    Precipitation(string condition, string type) : WeatherCondition(condition), type(type) {}

    void displayPrecipitation() {
        cout << "Precipitation Type: " << type << endl;
    }
};

int main() {
    string name, college;
    string weatherCondition, precipitationType;
    double temperature;

    // Prompt the user to enter their name and college name
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your college name: ";
    getline(cin, college);

    // Prompt the user to enter weather condition details
    cout << "Enter the weather condition: ";
    getline(cin, weatherCondition);

    // Create a WeatherCondition object
    WeatherCondition wc(weatherCondition);

    // Prompt the user to enter temperature details
    cout << "Enter the temperature (in degrees Celsius): ";
    cin >> temperature;

    // Create a Temperature object
    Temperature temp(weatherCondition, temperature);

    cin.ignore();  // Ignore the newline character

    // Prompt the user to enter precipitation details
    cout << "Enter the precipitation type: ";
    getline(cin, precipitationType);

    // Create a Precipitation object
    Precipitation precip(weatherCondition, precipitationType);

    // Display the weather condition, temperature, precipitation, and user details
    cout << "\nWeather Report:\n";
    cout << "----------------\n";
    wc.displayCondition();
    temp.displayTemperature();
    precip.displayPrecipitation();
    cout << "\nUser Details:\n";
    cout << "--------------\n";
    cout << "Name: " << name << endl;
    cout << "College: " << college << endl;

    return 0;
}

