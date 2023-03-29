#include <iostream>
#include <string>

using namespace std;

void printGreeting(char language) {
    string greeting;

    switch (language) {
        case 'e':
        case 'E':
            greeting = "Hello!";
            break;
        case 'f':
        case 'F':
            greeting = "Bonjour!";
            break;
        case 's':
        case 'S':
            greeting = "¡Hola!";
            break;
        case 'c':
        case 'C':
            greeting = "你好!";
            break;
        default:
            greeting = "Unknown language preference.";
            break;
    }

    cout << greeting << endl;
}

int main(){
     cout<<"Enter E or e for Espanyol\nEnter A or a for Arabic\nEnter H or h for Hindi"<<endl;
     char language;
     cin>>language;
     printGreeting(language);
     return 0;
}
