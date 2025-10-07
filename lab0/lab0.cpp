#include <iostream>
using namespace std;

struct Dots
{
    int x;
    int y;
};
int main(){
    
    int n;
    cout << "Введите количество точек:" << endl;
    cin >> n;

    for (int i=0;i<n;i++){
        Dots Dot;
        cout << "Введите координаты точки:" << endl;
        cout << "x = ";
        cin >> Dot.x;
        cout << "y = ";
        cin >> Dot.y;
        if (Dot.x > 0 && Dot.y > 0){
            cout << "Первая четверть" << endl;
        }
        else if (Dot.x > 0 && Dot.y < 0){
            cout << "Четвертая четверть" << endl;
        }
        else if (Dot.x < 0 && Dot.y < 0){
            cout << "Третья четверть" << endl;
        }
        else if (Dot.x < 0 && Dot.y > 0){
            cout << "Вторая четверть" << endl;
        }
        else if (Dot.x == 0 && Dot.y != 0) {
            cout << "На оси y";
        } else if (Dot.y == 0 && Dot.x != 0) {
            cout << "На оси x" << endl;
        } else {
            cout << "В нуле" << endl;
        }
    }

}
