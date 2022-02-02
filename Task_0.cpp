#include <iostream>

using namespace std;

const int PI = 3.14; //setting the PI as a constant

double sumToNumbers(double num1, double num2); // Returns the sum of the two numbers
double areaOfCircle(double radius); // Returns the area of a circle given the radius
double circumferenceOfCircle(double radius); // Returns the circumference of a circle given the radius
double priceIncludingVAT(double price, int vat); // Returns the price including the vat (given as %)

void menu();

int main(){

    int choiser;
    do{
    menu(); // applying the menu function

    cin>>choiser;

    //Using switch to handle with unexpected input from the person via default part
    switch (choiser)
    {

    //1st choise
    case 1:
        double num1, num2;

        cout<<"Enter number 1: ";
        cin>>num1;

        cout<<"Enter number 2: ";
        cin>>num2;

        sumToNumbers(num1, num2); //applying sum function

        break;

    //2nd choise    
    case 2:
        double radius;

        cout<<"Enter the radius: ";
        cin>>radius;

        areaOfCircle(radius); //applying area of circle founder function

        break;

    //3rd choise
    case 3:
        double radius1;

        cout<<"Enter the radius: ";
        cin>>radius;

        circumferenceOfCircle(radius1); //applying calculation the price with vat function

        break;

    //4th choise
    case 4:
        double price;
        int vat;

        cout<<"Enter the price without VAT: ";
        cin>>price;

        cout<<"Enter the %: ";
        cin>>vat;

        priceIncludingVAT(price, vat); //applying calculation the price with vat function

        break;

    case 5:
        break;

    //Catching incorrect or unknown input
    default:

        cout<<"Sorry, I don't know it!"<<endl;

        break;
    } 

    }while(choiser != 5);
}

//Sum function
double sumToNumbers(double num1, double num2){
    cout<<"Sum is: "<<num1 + num2<<endl;
}

//Area of circle founder function
double areaOfCircle(double radius){
    if(radius < 0){
        cout<<"An error input!"<<endl;
    }
    cout<<"Area is "<<PI * radius * radius<<endl;
}

//Circuference of circle founder function
double circumferenceOfCircle(double radius){
    cout<<"Circumference of a circle is "<<PI * (radius + radius)<<endl;
}

//Calculation the price with vat function
double priceIncludingVAT(double price, int vat){
    cout<<"Price including the vat (given as %): "<< price + (price * vat / 100)<<endl;
}

//Menu which we use in the beginning to make main function cleaner
void menu(){
    cout<<"Select: "<<endl;
    cout<<"1) Sum two numbers"<<endl;
    cout<<"2) Calculate area of a circle"<<endl;
    cout<<"3) Calculate circumference of a circle"<<endl;
    cout<<"4) Calculate price with VAT"<<endl;
    cout<<"5) Exit"<<endl;
    cout<<"Enter your choise: ";
}