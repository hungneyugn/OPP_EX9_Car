#include<iostream>
#include<string>
using namespace std;
typedef enum{
    RED,
    WHITE,
    BLACK
}color;
typedef enum{
    Gasoline,
    Diesel,
    Hybrid,
    Electric,
    ICE,
    ECE
}typeEngine;
class car{
    private:
        color carColor;
        typeEngine type;
        float odo;
    public:
        car(color carColor,typeEngine type, float odo);
        void calcFeeMaintenance();
        void checkOdo();
        string getColor();
        string getEngine();
        void display();
};

string car::getColor(){
    if(this->carColor == RED)return "Red";
    else if(this->carColor == WHITE) return "White";
    else return "Black";
}

string car::getEngine(){
    if(this->type == Gasoline) return "Gasoline";
    else if(this->type == Diesel) return "Diesel";
    else if(this->type == Hybrid) return "Hybrid";
    else if(this->type == Electric) return "Electric";
    else if(this->type == ICE) return "ICE";
    else return "ECE";
}
car::car(color carColor,typeEngine type, float odo){
    this->carColor = carColor;
    this->type = type;
    this->odo = odo;
}
void car::calcFeeMaintenance(){
    int money;
    switch (this->type)
    {
    case Gasoline:
        money = this->odo *100;
        break;
    case Diesel:
        money = this->odo *150;
        break;
    case Hybrid:
        money = this->odo *200;
        break;
    case Electric:
        money = this->odo *250;
        break;
    case ICE:
        money = this->odo *300;
        break; 
    case ECE:
        money = this->odo *350;
        break;               
    default:
        break;
    }
   cout<<"Fee Maintenance: "<<money<<"(vnd)"<<endl;
}

void car::checkOdo()
{
    cout<<"Odo: "<<this->odo<<endl;
}
void car::display(){
    cout<<"---------------------"<<endl;
    cout<<"Informations Of Car: "<<endl;
    cout<<"Color: "<<this->getColor()<<endl;
    cout<<"Engine: "<<this->getEngine()<<endl;
    cout<<"Odo: "<<this->odo<<endl;
}
int main(){
    car Vinfast(WHITE, Electric, 1000);
    Vinfast.checkOdo();
    Vinfast.calcFeeMaintenance();
    Vinfast.display();
    return 0;
}