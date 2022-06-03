#include <iostream>
#include <string>

using namespace std;

int main(){
    string str = "On an exceptionally hot evening early in July a young man came out of the garret ...";
    for (int i = 0; i < str.size(); i++){
        if (i > 0 && str[i-1] == ' ' && !(str[i] >= '0' && str[i] <= '9'))
            str[i] = toupper(str[i]);
    }
    cout << str << endl;
    return 0;
}
