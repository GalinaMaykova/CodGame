#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * The while loop represents the game.
 * Each iteration represents a turn of the game
 * where you are given inputs (the heights of the mountains)
 * and where you have to print an output (the index of the mountain to fire on)
 * The inputs you are given are automatically updated according to your last actions.
 **/
int main()
{
    int Mounts[8] = {};
    int max;
    int numberMount;
    // game loop
    while (1) {
        for (int i = 0; i < 8; i++) {
            int mountainH; // represents the height of one mountain.
            cin >> mountainH; cin.ignore();
            Mounts[i]=mountainH;
        }
        
        // Берем размер первой горы, как возможно-максимальный
        max=Mounts[0]; 
        numberMount =0;  
        
        // Сравноиваем все горы с максимальной, находим самую большую, стреляем в нее
        for (int i = 1; i < 8; i++) {
            if (max<Mounts[i]) {
                max=Mounts[i];
                numberMount = i;
            }
        }
        cout << numberMount << endl; // The index of the mountain to fire on.
    }
}
