#include <iostream>
#include <string>

using namespace std;

class Fueltank{
    private:
    int m_FueltankCapacity;
    int m_Gas_grade;
    
    public:
    Fueltank(int FueltankCapacity = 3000, int gas = 98){
        m_FueltankCapacity = FueltankCapacity;
        m_Gas_grade = gas;
    }
    int fuel_up(int v, int gas){
        if(gas == m_Gas_grade && v == m_FueltankCapacity){
            cout << "fuel_up: " << m_FueltankCapacity << " Gas_grade: " << m_Gas_grade;
        }else if(gas != m_Gas_grade && v == m_FueltankCapacity){
            cout << "Error: Gas_grade: " << gas << " Correct Gas_grade: " << m_Gas_grade;
        }else if(gas == m_Gas_grade && v != m_FueltankCapacity){
            cout << "Error: FueltankCapacity: " << m_FueltankCapacity << " but fuel up: " << v << endl;
            cout << "fuel_up: " << m_FueltankCapacity << " Gas_grade: " << m_Gas_grade;
        }else if(gas != m_Gas_grade && v != m_FueltankCapacity){
            cout << "Error: FueltankCapacity: " << m_FueltankCapacity << " but fuel up: " << v << endl;
            cout << "Error: Gas_grade: " << gas << " Correct Gas_grade: " << m_Gas_grade;
        }
        return 0;
    }//;
    int set_Gas_grade(int Gas_grade){
        m_Gas_grade = Gas_grade;
        cout << "Set Gas_grade: " << m_Gas_grade << endl;
        return m_Gas_grade;
    }//ok
    int get_Gas_grade(){
        return m_Gas_grade;
    }//;ok
};

class Audi_Car {
    private:
    Fueltank m_Fueltank;
    int m_MaxSeating;
    string m_brand = "Audi";//車子類別
    string m_model;//型號
    int m_year;
    
    public:
    Audi_Car(string x, int y, int z){
        m_model = x;
        m_year = y;
        m_MaxSeating = z;
    }//ok
    int get_MaxSeating(){
        return m_MaxSeating;
    }//ok
    string get_brand(){
        return m_brand;
    }//ok
    int get_Gas_grade(){
        return m_Fueltank.get_Gas_grade();
    }//ok
    int set_Gas_grade(int gas){
        return m_Fueltank.set_Gas_grade(gas);
    }//ok
    int fuel_up(int v, int gas){
        return m_Fueltank.fuel_up(v, gas);
    }//ok
};

int main(){
    Audi_Car car_2("A1", 2021, 2);
    cout << car_2.get_brand() << " : Gas_grad = " << car_2.get_Gas_grade() << endl;
    car_2.set_Gas_grade(95);
    cout << car_2.get_brand() << " : Gas_grad = " << car_2.get_Gas_grade() << endl;
    car_2.fuel_up(300,95);
    return 0;
}
