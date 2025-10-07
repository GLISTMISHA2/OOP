#include <iostream>
#include<string>
using namespace std;

class apt{
    protected:
        string name = "";
        string tel= "";
        string addres= "";
        string time= "";
    public:
        apt(string _name,string _tel,string _addres,string _time){
        name= _name;
        tel= _tel;
        addres= _addres;
        time= _time;
    }
        void set_name(string _name){
            name=_name;
        }
        void set_tel(string _tel){
            tel=_tel;
        }
        void set_addres(string _addres){
            addres=_addres;
        }
        void set_time(string _time){
            time=_time;
        }
        string get_name(){
            return name;
        }
        string get_tel(){
            return tel;
        }
        string get_addres(){
            return addres;
        }
        string get_time(){
            return time;
        }
        virtual void output(){
        cout<<"Название: "<<name<<endl;
        cout<<"Телефон: "<<tel<<endl;
        cout<<"Адресс: "<<addres<<endl;
        cout<<"Время работы "<<time<<endl<<endl;
        }
};
class p_apt:public apt{
    protected:
        string fio = "";
    public:
        p_apt(string _name,string _tel,string _addres,string _time,string _fio) : apt(_name, _tel, _addres, _time) {
            fio = _fio;
        }
        void output() override {
        cout<<"Название: "<<name<<endl;
        cout<<"Телефон: "<<tel<<endl;
        cout<<"Адресс: "<<addres<<endl;
        cout<<"Время работы "<<time<<endl;
        cout << "Владелец: " << fio<< endl<< endl;
        }
        void set_fio(string _fio){
            fio=_fio;
        }
        string get_fio(){
            return fio;
        }
};
int main(){
    apt q = apt("чиназес","14-15","улица пушкина","6-12");
    q.output();
    p_apt p = p_apt("Частная аптека","55-66","Ленина","8-20","Иванов И");
    p.output();
    p.set_name("Новая аптека");
    p.output();

}
