//
// Created by tomno on 19/02/2022.
//

#include "iostream"
#include "vector"

using namespace std;

string reverse(string word){
    int n = word.size();
    string back;
    for (int i=n-1; i>=0;i--){
        back.push_back(word[i]);        // letter verplaatsen
    }
    return back;            // omgedraaide woord terug sturen
}

string isPalindroom(const string& word){
    string woord = reverse(word);
    for(unsigned int i=0; i<woord.size(); i++){
        if(woord[i] == word[i]){ // checken of het gedraaide woord het zelfde is
            return "True";
        }
        return "False"; // anders False
    }
    return "False";
}

void twee_twaalf(){
    string word;
    string palin;
    cout << "kies een woord:";
    getline(cin, word);
    cout << "palindrooom is: "<< isPalindroom(word);
}