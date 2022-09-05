#include <iostream> 
#include <map>
#include <unordered_map>
#include <string>

using namespace std; 

int main(){ 

    //creating an unordered type of hashmap
    unordered_map <string, int> something;
    
    //insertion
    pair<string, int> p = make_pair("babbar" , 3);
    something.insert(p);

    pair<string, int> p2("love" , 2);
    something.insert(p2);

    something["mera"] = 1;

    //searching
    cout << something["mera"] << '\n';
    cout << something.at("babbar") << '\n';

    cout << something["unknownKey"] << '\n';  //using this method will create a new entry with unknownKey
    cout << something.at("unknownKey") << '\n';

    //checking size 
    cout << something.size();

    //erase
    something.erase("love");

    for (auto i:something){
        cout << i.first << i.second << '\n';
    }

    unordered_map<string, int> :: iterator it = something.begin();
    while(it != something.end()){
        cout << it->first << " " << it->second << '\n';
    }

    return 0;
}