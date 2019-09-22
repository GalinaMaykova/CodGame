#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n; // the number of temperatures to analyse
    cin >> n; cin.ignore();
    if (n==0) cout << 0 << endl;
    else{
        // временная переменная со значением максимально далеким от нуля (из условия)
        int min=5527;
        for (int i = 0; i < n; i++) {
            int t; // a temperature expressed as an integer ranging from -273 to 5526
            cin >> t; cin.ignore();
            
            // находим минимальное значение из всех поступающих данных
            if (abs(min)>abs(t)) min = t;
            // особое условие для температур разных по знаку, но равных по модулю
            if (abs(min) == abs(t)&& min<t) min=t;    
        }       
        cout << min << endl;
    }
}
