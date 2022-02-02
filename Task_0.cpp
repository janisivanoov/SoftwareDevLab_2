#include <iostream>

using namespace std;

const int PI = 3.14;

double sumToNumbers(double num1, double num2);
double areaOfCircle(double radius);
double circumferenceOfCircle(double radius);
double priceIncludingVAT(double price, int vat);

void menu();

int main(){

    int choiser;

    menu();

    cin>>choiser;

    switch (choiser)
    {
    case 1:
        double num1, num2;

        cout<<"Enter number 1: ";
        cin>>num1;

        cout<<"Enter number 2: ";
        cin>>num2;

        sumToNumbers(num1, num2);

        break;
    case 2:
        double radius;

        cout<<"Enter the radius: ";
        cin>>radius;

        areaOfCircle(radius);

        break;
    case 3:
        double radius1;

        cout<<"Enter the radius: ";
        cin>>radius;

        circumferenceOfCircle(radius1);

        break;

    case 4:
        double price;
        int vat;

        cout<<"Enter the price without VAT: ";
        cin>>price;

        cout<<"Enter the %: ";
        cin>>vat;

        priceIncludingVAT(price, vat);

        break;

    case 5:

        exit(1);

        break;

    default:

        cout<<"Sorry, I don't know it! Try again!"<<endl;
        
        break;
    }
}

double sumToNumbers(double num1, double num2){
    cout<<"Sum is: "<<num1 + num2<<endl;
}

double areaOfCircle(double radius){
    if(radius < 0){
        cout<<"An error!";
    }
    cout<<"Area is "<<PI * radius * radius<<endl;
}

double circumferenceOfCircle(double radius){
    cout<<"Circumference of a circle is "<<PI * (radius + radius);
}

double priceIncludingVAT(double price, int vat){
    cout<<"Price including the vat (given as %): "<< price + (price * vat / 100);
}

void menu(){
    cout<<"Select: "<<endl;
    cout<<"1) Sum two numbers"<<endl;
    cout<<"2) Calculate area of a circle"<<endl;
    cout<<"3) Calculate circumference of a circle"<<endl;
    cout<<"4) Calculate price with VAT"<<endl;
    cout<<"5) Exit"<<endl;
    cout<<"Enter your choise: ";
}