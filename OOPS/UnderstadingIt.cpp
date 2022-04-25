#include <iostream>

using namespace std;

class Hero{
    private:
    int health;
    public:
    int level;

    int getHealth(){
        return health;
    }

    void setHealth(int a){
        health = a;
    }

    Hero(int health, char level){
        this -> health = health;
        this -> level = level;
    }
};

int main(){
    
    Hero h1(1,'a');
    cout << "Player health: " << h1.getHealth();
    int heal;
    cin >> heal;
    h1.setHealth(heal);
    
    cout << "Level of the player is: " << h1.getHealth() << endl;

    return 0;
}