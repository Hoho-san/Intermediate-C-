#include <iostream>
using namespace std;

// to print asterisk
void star(int asterisk){
    if (asterisk == 0){
         return;
    }    
    cout << "* ";
    star(asterisk - 1);
}
// to print white spaces
void white_space(int space){
    if (space == 0){
        return;
    }     
    cout << " ";
    white_space(space - 1);
}
// function to print the pattern_upper pattern
void pattern_upper(int n, int num){
    white_space(n);
    if (n == 0){
        return;
    }
      
    star(num - n + 1);
    cout << endl;
 
    // recursively calling pattern_upper pattern()
    pattern_upper(n - 1, num);
}

// function to print the pattern_lower pattern
void pattern_lower(int n, int num){
    white_space(num - n + 1);
    if (n == 0){
        return;
    }   
    star(n);
    cout << endl;
    
    // recursively calling pattern_lower pattern()
    pattern_lower(n - 1, num);
}

// function to print the pattern
void diamond_pattern(int n, int num){
	pattern_upper(n, num);
	pattern_lower(n - 1, num);
}


int main(){

    int n;
    cout << "Enter the number of lines in the pattern: ";
    cin >> n;
    diamond_pattern(n, n);
    return 0;
}