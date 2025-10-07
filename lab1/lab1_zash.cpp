#include <iostream>
using namespace std;

class complex{
    private:
    float x;
    float y;

    public:
        complex(float re, float im){
        x = re;
        y = im;
    }
    float get_re() {
        return x;
    }
    
    float get_im() {
        return y;
    }
    void output(){

        cout<<x<<"+"<<y<<"i"<<endl;
    
        
    }


};
    float um_re(float a, float b, float c, float d) {
        return (a*c)-(b*d);
    }
    
    float um_im(float a, float b, float c, float d) {
        return (b*c)+(a*d);
    }
    float min_re(float a, float b, float c, float d) {
        return a-c;
    }
    
    float min_im(float a, float b, float c, float d) {
        return b-d;
    }
int main(){
    complex a = complex(3,4);
    complex b = complex(2,8);
    complex c = complex(7,5);

    a.output();
    b.output();
    c.output();

    float a_re = a.get_re();
    float a_im = a.get_im();
    float b_re = b.get_re();
    float b_im = b.get_im();
    float c_re = c.get_re();
    float c_im = c.get_im();

    //q=a*(b-c)-c^2
    float bc_re = min_re(b.get_re(), b.get_im(), c.get_re(), c.get_im());
    float bc_im = min_im(b.get_re(), b.get_im(), c.get_re(), c.get_im());

    float abc_re = um_re(a.get_re(), a.get_im(), bc_re, bc_im);
    float abc_im = um_im(a.get_re(), a.get_im(), bc_re, bc_im);
    
    float c2_re = um_re(c.get_re(), c.get_im(), c.get_re(), c.get_im());
    float c2_im = um_im(c.get_re(), c.get_im(), c.get_re(), c.get_im());

    float q_re = abc_re-c2_re;
    float q_im = abc_im-c2_im;
    
    cout<<"q= "<< q_re<<"+"<<q_im<<"i"<<endl;
    
}
