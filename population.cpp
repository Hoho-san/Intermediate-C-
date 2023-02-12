#include <iostream>
using namespace std;

int GrowthRate(int BD, int DD) {
    int growthRate = BD - DD;
    return growthRate;
}

int EstimatedPopulation(int Pop, int growthRate, int n, int BD, int DD)  {
    int estimatedPopulation = Pop * n + (BD * (Pop * n)) / 100 - (DD * (Pop * n)) / 100;
    return estimatedPopulation;
}

int main() {
    int currentPopulation;
    int birthRate;
    int deathRate;
    int n;
    int growthRate;
    int estimatedPopulation;

    cout << "Enter the starting population: ";
    cin >> currentPopulation;
    cout << "Enter the birth rate: ";
    cin >> birthRate;
    cout << "Enter the death rate: ";
    cin >> deathRate;
    cout << "Enter the number of years: ";
    cin >> n;

    if (currentPopulation < 2 || birthRate < 0 || deathRate < 0) {
        cout << "The population must be greater than 2 and birthrate and death rate must greater than 0" << endl;
        return 0;
    }

    growthRate = GrowthRate(birthRate, deathRate);
    estimatedPopulation = EstimatedPopulation(currentPopulation, growthRate, birthRate, deathRate, n);
    cout << "The estimated population after " << n << " years is " << estimatedPopulation << endl;

    return 0;
}