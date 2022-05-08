#include <iostream>
#include <iterator>
#include <map>
#include <string>

using namespace std;

int main()
{
    string test = "ForestH11";
    map<int, bool> myMap;
    for (char i = 'a'; i <= 'z'; ++i)
    {
       
        map.insert(pair<char, bool>(i, (test.find(i) != string::npos )));
        
    }

    map<char, bool>::iterator itr;
    cout << "\nThe map of myMap is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = myMap.begin(); itr != myMap.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';

    }
    
    return 0;
}