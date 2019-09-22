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
    int surfaceN; // the number of points used to draw the surface of Mars.
    cin >> surfaceN; cin.ignore();
    // точка посадки (x,y)
    int pointSite[2];
    
    for (int i = 0; i < surfaceN; i++) {
        int landX; // X coordinate of a surface point. (0 to 6999)
        int landY; // Y coordinate of a surface point. By linking all the points together in a sequential fashion, you form the surface of Mars.
      
        //массив точек, задающих поверхность.  
        int surfacePoint[surfaceN][2];
       
        cin >> landX >> landY; cin.ignore();
        
        surfacePoint [i][0]=landX;
        surfacePoint [i][1]=landY;
         
        // ищем середину ровной площадки размером больше 1000
        if (i>0){
            if (surfacePoint[i][1]==surfacePoint[i-1][1] && surfacePoint[i][0]-surfacePoint[i-1][0] >=1000){
              
                // "х"-овая координата точки посадки (в данной задаче не используется, т.к посдка ровно под аппаратом)
                pointSite[0]=(surfacePoint[i][0]-surfacePoint[i-1][0])/2;
                  
                // "y"-овая координата точки посадки  
                pointSite[1]=surfacePoint[i][1];
            }
        }        
    }
    // game loop
    while (1) {
        int X;
        int Y;
        int hSpeed; // the horizontal speed (in m/s), can be negative.
        int vSpeed; // the vertical speed (in m/s), can be negative.
        int fuel; // the quantity of remaining fuel in liters.
        int rotate; // the rotation angle in degrees (-90 to 90).
        int power; // the thrust power (0 to 4).
        cin >> X >> Y >> hSpeed >> vSpeed >> fuel >> rotate >> power; cin.ignore();
        
        string command = "0 0";
        
        // расстояние до земли
        double S=Y-pointSite[1];
        
        /*Условия задачи допускают принебречь плавным включением двигателей (+1 за каждую итерацию)
        и рассчитать момент включения двигателя по формуле:
        (vSpeed^2-vStart^2)/2 = S, исходя из соображений, 
        что сумма ускорений (гравитация и двигатели на четвертой скорсти равна 0,289) и vStart=0
        */
        if ((vSpeed* vSpeed)/S>0.578){
            command = "0 4" ;
        }               
        cout << command << endl;
    }
}
