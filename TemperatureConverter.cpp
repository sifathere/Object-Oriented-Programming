#include<iostream>
using namespace std;
class TemConvert{
private:
    float celcious;
public:
    float convert(float c){
        celcious=c;
    float f;
    float k;
    f=9*celcious/5+32;
    k=celcious+273;
    if(celcious<=273){
        cout<<"The farenheid value is "<<f<<endl;
        cout<<"The kelvin value is "<<k<<endl;
    }
    else
        cout<<"Invalid temperature";
    }
};
int main(){
int choice;
float temp;
TemConvert t;
do{
    cout<<"\n\nWhat you want?"<<endl;
    cout<<"1.Convert temperature from celcious."<<endl;
    cout<<"2.Exit from the code."<<endl;
    cout<<"Please enter your choice "<<endl;
    cin>>choice;

    switch(choice){

case 1:
    cout<<"Enter the temperature"<<endl;
    cin>>temp;
    t.convert(temp);
    break;
case 2:
    cout<<"Thank you for stay with me"<<endl;
    break;
    default:
    cout<<"You entered wrong option, please enter correct option"<<endl;
    continue;
    }

    }while(choice!=2);

}
