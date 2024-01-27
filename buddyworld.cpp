#include <iostream>
using namespace std;

string palName;
int inputColor;
string color;
bool fortunate;
int randomFortunate;
string nature;
int natureNum;

int main(){
    cout << "What do you want to name your buddy? :)" << endl;
    cin >> palName;

    cout << "\nWhat color do you want your pal to be? Please choose from the selection below:" << endl;
    cout << "[1]: Red" << endl;
    cout << "[2]: Blue" << endl;
    cout << "[3]: Green" << endl;
    cout << "[4]: Yellow" << endl;
    cout << "[5]: White" << endl;
    cin >> inputColor;

    if(inputColor == 1){
        color = "Red";
    }
    
    else if(inputColor == 2){
        color = "Blue";
    }

    else if(inputColor == 3){
        color = "Green";
    }

    else if(inputColor == 4){
        color = "Yellow";
    }

    else if(inputColor == 5){
        color = "White";
    }

    else cout << "Please stop being a silly goose!" << endl;

    randomFortunate = rand() % 1000 + 1;
    if (randomFortunate == 1) {
        fortunate = true;
    }
    else {
        fortunate = false;
    }

    natureNum = rand() % 4;

    if (natureNum == 0) {
        nature = "Workaholic";
    }
    if (natureNum == 1) {
        nature = "Legendary";
    }
    if (natureNum == 2) {
        nature = "eepy";
    }
    if (natureNum == 3) {
        nature = "gex enjoyer";
    }
    if (natureNum == 4) {
        nature = "clinical liar";
    }

    
return 0;
}