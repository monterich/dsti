//
//  testfile.cpp
//  DSTI
//
//  Created by Marcel Thor Stefansson on 12.11.18.
//  Copyright © 2018 Marcel Thor Stefansson. All rights reserved.
//

// #include "testfile.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]){
    string word_length;
    string word = "cancer";
    double length = word.length();
    
    for (int i = 0; i < length; i++){
        word_length.append("_");    }
    int attempts = 15;
    
    
    cout << "The word you are looking for has " << length << " letters. First try: "<< word_length << endl;
    
    while (attempts > 0){
        if (word_length == word){
            cout << "Congratulations, you found out the word!!"<< endl;
            break;
        }
        else{
            char guess;
            cout << "Please enter the next letter: "<< endl;
            cin >> guess;
            
            for (int i = 0; i < length; i++){
                if (guess == word[i]){
                    word_length[i] = guess;
                }
                else {
                    continue;
                }
            }
            cout << word_length << endl;
            attempts = attempts - 1;
            cout << "Try again. "<< attempts << " attempts left" << endl;
        }
    }
    cout << "The word is: "<< word << endl;
    
    return 0;
}
