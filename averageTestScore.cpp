#include <iostream>
using namespace std;

int calcSum(int testScore, int numTestScores) {
    int sum = 0;
   
    for (int i = 0; i < numTestScores; i++) {
        cout << "Enter test score: ";
        cin >> testScore;
        sum += testScore;
    }
    return sum;
}

void calcAverage(int sum, float numTestScores) { 
    float average = sum / numTestScores;
    cout << "The average is " << average << endl; 
}

int main(){
    float numTestScores;
    int testScore;
    int sum;

    cout << "How many test scores do you have? ";
    cin >> numTestScores;
    sum = calcSum(testScore, numTestScores);
    calcAverage( sum, numTestScores); 
    return 0;
}
