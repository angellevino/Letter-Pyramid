#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main (){
    string letter {};
    cout << "Enter a letter: " << endl;
    getline(cin,letter);

    size_t n = letter.length();
    string pyramid;

    for(size_t i{0} ; i <n ; ++i){

        // make spaces
        for (int j {0} ; j < n-1-i ; ++j){
            cout << ' ';
        }
        // add elements until reach last char in letter
        for (int j {0} ; j<= i ; ++j){
            cout << letter[j];
        }

        // add elements when it start descending
        for (long int j = i - 1 ; j >= 0 ; j--){
            cout << letter [j];
        }
        cout << endl;
    }

    return 0;
}




