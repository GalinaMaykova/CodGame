#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/
int main()
{
    int lightX; // the X position of the light of power
    int lightY; // the Y position of the light of power
    int initialTX; // Thor's starting X position
    int initialTY; // Thor's starting Y position
    cin >> lightX >> lightY >> initialTX >> initialTY; cin.ignore();
    
    string directions("");
    string str1("");
    string str2("");
    int x = initialTX;
    int y = initialTY;

    // game loop
    while (1) {
        int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remainingTurns; cin.ignore();

  // Когда тору необходимо двигаться по вертикали (вверх или вниз), в "у" записывается изменненное местоположение
    if  (y!=lightY) {  
         if (y> lightY) {
            str1 = "N";
            y=y-1;
         } else {
            str1 = "S";
            y=y+1;
         } 
    }
    // Когда тору неободимо двигаться по горизонтали, в "x" записывается изменненное местоположение
     if  (x!=lightX) {    
         if (x< lightX) {
            str2 = "E";
            x = x+1;
         } else {
            str2 = "W";
            x=x-1;
         } 
     }
     // результирующие направление
     directions = str1+str2;
      
     str1 = "";
     str2 = "";
    // A single line providing the move to be made: N NE E SE S SW W or NW
     cout << directions << endl;
    }
}
