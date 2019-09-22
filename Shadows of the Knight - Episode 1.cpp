#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int W; // width of the building.
    int H; // height of the building.
    cin >> W >> H; cin.ignore();
    int N; // maximum number of turns before game over.
    cin >> N; cin.ignore();
    int X0;
    int Y0;
    cin >> X0 >> Y0; cin.ignore();
    // размер поля в котором может быть бомба (изначально - весь дом)
     int field[2][2] = {
        {0,0}, //X1, Y1
        {W-1,H-1}, //X2, Y2
    };
     
    // game loop
    while (1) {
        string bombDir; // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
        cin >> bombDir; cin.ignore();      
        
        // переопределяем границы  области возможного нахождения бомбы с учетом полученного bombDir
        if (bombDir.find("U")<2){
            field[1][1] = Y0;
        }
        if (bombDir.find("R")<2){
            field[0][0] = X0+1;        
        }
        if (bombDir.find("D")<2){
            field[0][1] = Y0+1; 
        }
      
        if (bombDir.find("L")<2) {
            field[1][0] = X0;         
        }            
            // отправляем Бэтмена в середину области
        X0 = (field[1][0] - field[0][0])/2 + field[0][0];
        Y0 = (field[1][1] - field[0][1])/2 + field[0][1];
    
        cout << X0<< " "<<Y0<< endl;
    } 
}
