#include <bits/stdc++.h>
using namespace std;

int read_word(string &word){
    char ch;
    word.clear();
    int flag = 0;
    while (cin.get(ch)){
        if (!isalpha(ch)&&!isdigit(ch)){
            if (ch == '\n') flag++;
            if (flag == 2) return 0;
        }
        else {
            word += ch;
            break;
        }
    };
    while (cin.get(ch) && (isalpha(ch) || isdigit(ch))){
        word += ch;
    }
    return word.size();
}

int main(){
    map<string, int> word_frequency;
    string word;
    while (read_word(word)){
        word_frequency[word]++;
    }
    for (map<string, int>::iterator p = word_frequency.begin(); p != word_frequency.end(); p++){
        cout << p->first << " " << p->second << endl;
    }    
}