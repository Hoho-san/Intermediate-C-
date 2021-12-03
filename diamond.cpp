#include<iostream>
using namespace std;

void diamond(int num){
    for (int i = 1; i <= num; i++) {	
       for(int k = num - i; k> 0; k--)
            cout<<" ";
            for(int j = 1; j<=i; j++){
                cout<<" *";
            }
       cout << endl;  
    }
    // for (int i = num -1; i>=1; i--){
    //     for(int k= num - i; k >0; k--)
    //     cout <<" ";
    //     for (int j= i; j>0; j--){
    //         cout <<" *";
    //     }
    //     cout << endl;
    // }
    diamond(num - 2);
}
int main()
{
    diamond(4); 
    

    return 0;
}
void recursive(int num){
    int star,a;
    star = num - 1;
    if (star != 0){
        cout<< "%";
        recursive(num - 1); 
       if (star == 1){
           cout<< " *";
       }
       cout << endl;
    }


}