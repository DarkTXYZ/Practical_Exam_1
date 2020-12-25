#include <iostream>

using namespace std;

string hideVowels(string word){
    int l = word.length();
    int i = 0;
    while(i < l){
        if(word[i] == 'A' or word[i] == 'a')
            word[i] = '_';
        if(word[i] == 'E' or word[i] == 'e')
            word[i] = '_';
        if(word[i] == 'I' or word[i] == 'i')
            word[i] = '_';
        if(word[i] == 'O' or word[i] == 'o')
            word[i] = '_';
        if(word[i] == 'U' or word[i] == 'u')
            word[i] = '_';
        ++i;
    }
    return word;
}

int main(){
    cout << hideVowels("Chiang Mai University");
}