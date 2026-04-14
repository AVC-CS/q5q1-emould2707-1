#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cout << "Input: ";
    cin >> n;
    
    for (int i =1; i <=n; i++){
        for (int j =0; j < i; j++){
            cout << char('A' + j);
            if (j < i -1){
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
