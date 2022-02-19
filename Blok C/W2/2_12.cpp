//
// Created by tomno on 19/02/2022.
//

#include "iostream"
#include "vector"

using namespace std;

string reverse(string word){
    string woord = word;
    int n = woord.length();
    string back;
    for (int i=n-1; i>=0;i--){
        back.push_back(woord[i]);
    }
    cout << back << endl;
    return back;
}

bool isPalindroom(const string& word){
    string originalWord = word;
    reverse(originalWord);
    for(unsigned int i=0; i<word.size(); i++){
        if(word[i] != originalWord[i]){
            return false;
        }
    }
    return true;
}



void twee_twaalf(){
    string word;
    string palin;
    cout << "een woord: ";
    cin >> word;
    palin = isPalindroom(word);
    cout << palin;
}