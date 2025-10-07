#include <iostream>
#include<string>
using namespace std;

class tring{
    private:
        float length;
    public:

    tring(float a){
        length = a;
    }
    
    float h(float a){
        float x = (a*1.73)/2;
        return x;
    }
    float s(float a){
        float x = ((a*a)*1.73)/4;
        return x;
    }
    int s(int a){
        float x = ((a*a)*1.73)/4;
        return x;
    }
    float b(float a){
        float x = (a*1.73)/2;
        return x;
    }
    float p(float a){
        float x = a*3;
        return x;
    }
    
    virtual void output(){
        cout<<"Длина стороны: "<<length<<endl;
        cout<<"Высота: "<<h(length)<<endl;
        cout<<"Биссектриса: "<<b(length)<<endl;
        cout<<"Периметр "<<p(length)<<endl;
        cout<<"Площадь "<<s(length)<<endl<<endl;
    }
    
    float get_l(){
        return length;
    }
};

class tet: public tring{
    private:
    public:
    tet(float a) : tring(a){}

    float v(){
        return (get_l()*get_l()*get_l()*1.41)/12;
    }
    
    void output() override {
        cout<<"Ребро: "<<get_l()<<endl;
        cout<<"Площадь поверхности: "<<s(get_l())*4<<endl;
        cout<<"Объем "<<v()<<endl<<endl;
    }
};

class Main {
public:
    void mainn(){
        int N;
        cout << "Введите количество треугольников:" << endl;
        cin >> N;
        float sum = 0;
        
        for (int i = 1;i<=N;i++){
            float q;
            cout << "введите длину "<<i<< " треугольника "<<endl;
            cin >> q;
            tring t(q);
            sum += t.s(q);
        }
        
        cout << endl<< "средняя площадь треугольников: " << sum/N <<endl <<endl;

        int M;
        cout << "введите количество пирамид:"<<endl;
        cin >> M;
        float min = -1;
        int minc = 0;
        
        for (int i = 1;i<=M;i++){
            float q;
            cout << "Введите ребро "<<i<< " пирамиды "<<endl;
            cin >> q;
            tet t(q);
            if (min == -1 || t.v() < min){
                min= t.v();
                minc=i;
            }
        }
        
        cout << endl<< "наименьшая пирамида: " <<minc<<endl;
        cout << "объем наименьшей пирамиды: " <<min<<endl;
    }
};

int main(){
    Main m;
    m.mainn();
}
