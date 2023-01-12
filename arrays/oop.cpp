#include<iostream>
using namespace std;



class car{
    protected:
    string car_name;
    int tp = 0;
    int bs01=0,ef01 = 0,cf01 = 0,BF01 = 0,GF01 = 0;

    public:
    void setbs01(){bs01 = 0;}
    void setef01(){ef01 = 0;}
    void setcf01(){cf01 = 0;}
    void setBF01(){BF01 = 0;}
    void setGf01(){GF01 = 0;}
    void SetName(string s){
        cout<<" name of the car "<<s;
    }

    void getTotal(){
        cout<<"the total is "<< bs01+ef01+cf01+BF01+GF01;
    }

};

class sedan:car{
   
    public:
    void setbs01(){bs01 = 4000;}
    void setef01(){ef01 = 8000;}
    void setcf01(){cf01 = 4000;}
    void setBF01(){BF01 = 1500;}
    void setGf01(){GF01 = 6000;}

    int getTotal(){
        return (bs01+ef01+cf01+BF01+GF01);
    }
};

class Hatchback:car{
   
    public:
    void setbs01(){bs01 = 2000;}
    void setef01(){ef01 = 5000;}
    void setcf01(){cf01 = 2000;}
    void setBF01(){BF01 = 1000;}
    void setGf01(){GF01 = 3000;}

    int  getTotal(){
        return (bs01+ef01+cf01+BF01+GF01);
    }
};

class SUV:car{
   
    public:
    void setbs01(){bs01 = 5000;}
    void setef01(){ef01 = 10000;}
    void setcf01(){cf01 = 6000;}
    void setBF01(){BF01 = 2500;}
    void setGf01(){GF01 = 8000;}

    int getTotal(){
        return (bs01+ef01+cf01+BF01+GF01);
    }
};


int main()
{
    
    sedan obj;
    obj.setBF01();
    obj.setGf01();
    obj.setbs01();
    obj.setcf01();
    int x = obj.getTotal();
    cout<<"your total bill : "<<x<<endl;
    if(x>10000) cout<<"congratulations u got complementary cleaning servies";


return 0;
}