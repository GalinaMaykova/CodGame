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
   
    int R;
    cin >> R; cin.ignore();
    int V;
    cin >> V; cin.ignore();
    int vaults[V][2] ;
    int timeOfRobbers[R];
    for (int i = 0; i < V; i++) {
        int C;
        int N;
        cin >> C >> N; cin.ignore();
        // Общее число символов
        vaults[i][0] = C;
        // число цифр
        vaults[i][1] = N;
    }
    int time=0;
    for (int i=0; i<V;i++){
        if (i<R){
            /* разных цифр 10 штук, т.е. для N букв будет 10^N вариантов,
            разных букв 5 штук, т.е. для С-N букв будет 5^(C-N) вариантов.
            Перемножение даст общее количество вариантовю
            Раздаем каждому грабителю по одному хранилищу
            */
            timeOfRobbers [i] = pow(10,vaults[i][1]) * pow(5,vaults[i][0]-vaults[i][1]);
            }else{
                // самым быстрым грабителям добавляем следующие попорядку хранилища
               int min=timeOfRobbers[0];
               int numberMin = 0;
                   for (int j=0; j<R; j++){
                       if(min> timeOfRobbers[j]) {
                           numberMin=j;
                           min = timeOfRobbers[j];
                       }
                   }
               timeOfRobbers[numberMin] = 
                              timeOfRobbers[numberMin] +  pow(10,vaults[i][1]) * pow(5,vaults[i][0]-vaults[i][1]);
        }
   }
   //Выбираем время самого медленного грабителя
   for (int j=0; j<R; j++){
       if (time< timeOfRobbers[j])  time=timeOfRobbers[j];
   }
    cout << time << endl;
}
