#include <iostream>
#include<string>
using namespace std;

class aeroport{
    private:
    string name;
    int count;
    string klass;
    int people;
    public:
    aeroport(string n, int co, string kl, int pe){
        name=n;
        count=co;
        klass=kl;
        people=pe;
    }
    void output(){
        cout<<"Название: "<<name<<endl;
        cout<<"Количество полос: "<<count<<endl;
        cout<<"Тип: "<<klass<<endl;
        cout<<"Вместимость "<<people<<" человек"<<endl<<endl;
    }
    string get_name(){
        return name;
    }
    int get_count(){
        return count;
    }
    string get_klass(){
        return klass;
    }
    int get_people(){
        return people;
    }
    void set_name(string n){
        name = n;
    }
    void set_count(int co){
        count = co;
    }
    void set_klass(string kl){
        klass = kl;
    }
    void set_people(int pe){
        people = pe;
    }
};

int main(){//можно будет потом обернуть эт вот все в цикл
    aeroport SVO = aeroport("Шереметьего",6,"Международный",1000);
    aeroport DME("Домодедово", 4, "Международный", 800);
    SVO.output();
    SVO.set_count(10);
    SVO.set_klass("Внутрений");
    SVO.set_people(1200);
    SVO.output();
    DME.output();
}
