#include <iostream>
using namespace std;

int globalCount = 0;

void displayMessage() {
    globalCount++;
    cout << "This function has been called " << globalCount << " times." << endl;

}
int main() {
   for (int i = 0; i < 10; i++){
        displayMessage();
   }
    return 0;
}