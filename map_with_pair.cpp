#include <iostream>
#include <utility>
#include <map>
#include <string>

using namespace std;


int main(){
    map<string, string> my_dictionary;

    pair<string, string> apfel_translation ("apfel", "apple");
    pair<string, string> banane_translation ("banane", "banana");
    pair<string, string> strawberry_translation ("erdbeere", "strawberry");

    my_dictionary.insert(apfel_translation);
    my_dictionary.insert(banane_translation);
    my_dictionary.insert(strawberry_translation);

    for (auto translation: my_dictionary) {
        cout << translation.first << " - " << translation.second << endl;
    }

    return 0;
}