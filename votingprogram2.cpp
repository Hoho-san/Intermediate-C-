#include<iostream>
using namespace std;

double percent( double numvotes, double total){
    double totalpercent = (numvotes/total) * 100;
    return totalpercent;  
}

int main(){

    string candidates[5];
    int votes[5];
    double candidate00[5] = {0,0,0,0,0};
    int total_votes = 0;
    int winner_vote;
  
    cout<< endl ;
    for (int i = 0; i < 5; i++){
        cout<<"Enter the last name of Candidate: ";
        cin>> candidates[i];
        cout<<"Enter Number of Votes: ";
        cin>> votes[i];
    }  
   
    for(int i = 0; i < 5 ; i++){
        total_votes += votes[i];
    }
    
    for (int i = 0; i < 5; i++){
        candidate00[i] = percent(votes[i], total_votes);
    }

    cout << endl;
    cout<<"Candidate               Vote Received              % of Total Votes\n";
    for (int i = 0; i < 5; i++){
        cout<<candidates[i] << "                    " << votes[i] <<"                    "<< candidate00[i] << endl;
    }
    cout<<"Total: " << "                    " << total_votes << endl << endl;

    winner_vote = votes[0];
    string winner = candidates[0];
        for( int i = 1; i < 5; i++) {
            if(winner_vote < votes[i]){
                winner_vote = votes[i];
                winner = candidates[i];           
            }    
        } 
    cout<<"The Winner of the Election is " << winner;      
    return 0;
}