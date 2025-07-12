//unit converion projcet using c++

#include<iostream>
#include<iomanip>
using namespace std;

void lengthConverter(){  //for length conversion
	int choice;
	double value,converted;
	
	cout<<"Options of Length Conversion:\n";
	cout<<"1. Meters to Kilometers\n";
	cout<<"2. Kilometers to Miles\n";
	cout<<"3. Feet to Meters\n";
	cout<<"Enter your choice: ";
	cin>>choice;
	
	cout<<"Enter the value to convert: ";
	cin>>value;
	
	switch(choice){
		case 1:
			converted=value/1000; // meter to kilometers
			cout<<value<<" meters= "<<fixed<<setprecision(4)<<converted<< " Kilometers.\n";
			break;
		case 2:
			converted=value*0.621371; //kilometers to miles
			cout<<value<<" Kilometers= "<<fixed<<setprecision(4)<<converted<< " Miles.\n";
			break;
		case 3:
			converted=value/1000; //feet to meters
			cout<<value<<" Feet= "<<fixed<<setprecision(4)<<converted<< " meters.\n";
			break;
		default:
			cout<<"Invalid choice!\n";
				
	}
	
}

void temperatureConverter(){ //for temperature conversion
	int choice;
	double value,converted;
	
	cout<<"Options of Temperature Conversion:\n";
	cout<<"1. Celsius to Fahrenheit\n";
	cout<<"2. Fahrenheit to Celsius\n";
	cout<<"3. Celsius to Kelvin\n";
	cout<<"Enter your choice: ";
	cin>>choice;
	
	cout<<" Enter the Temperature to Convert: ";
	cin>>value;
	
	switch(choice){
		case 1:
			converted=(value*9/5)+32; //celsius to fahrenhiet
			cout<<value<<"°C = "<<fixed<<setprecision(2)<<converted<<" °F.\n";
			break;
		case 2:
			converted=(value-32)*5/9; //fahrenhiet to celsius
			cout<<value<<"°F = "<<fixed<<setprecision(2)<<converted<<" °C.\n";
			break;
		case 3:
			converted=value+273.15;// celsius to kelvin
			cout<<value<<"°C = "<<fixed<<setprecision(2)<<converted<<" K.\n";
			break;
		default:
			cout<<"Invalid choice!\n";
		
	}
}

void weightConverter(){ // for weight conversion
	int choice;
	double value,converted;
	
	cout<<"Options of Weight Converter:\n";
	cout<<"1. Kilograms to Pounds\n";
	cout<<"2. Pounds to Kilograms\n";
	cout<<"3. Grams to Ounces\n";
	cout<<"Enter your choice: ";
	cin>>choice;
	
	cout<<"Enter the Weight to convert: ";
	cin>>value;
	
	switch(choice){
		case 1:
			converted=value*2.20462; //1kg=2.20462 pounds
			cout<<value<<" Kg = "<<fixed<<setprecision(4)<<converted<<" lbs.\n";
			break;
		case 2:
			converted=value/2.20462;//1pound=0.453592 kg
			cout<<value<<" lbs = "<<fixed<<setprecision(4)<<converted<<" Kg.\n";
			break;
		case 3:
			converted=value*0.035274; //1gram=0.035274 kg
			cout<<value<<" g = "<<fixed<<setprecision(4)<<converted<<" oz.\n";
			break;
		default:
			cout<<"Invalid Choice!\n";
	}
	
}

void timeConverter(){ //for time converter
	int choice;
	double value,converted;
	
	cout<<"Options of Time Converter:\n";
	cout<<"1. Seconds to Minutes\n";
	cout<<"2. Minutes to Hours\n";
	cout<<"3. Hours to Second\n";
	cout<<"Enter your choice: ";
	cin>>choice;
	
	cout<<"Enter the time value to convert: ";
	cin>>value;
	
	switch(choice){
		case 1:
			converted=value/60; // 1 minute=60 seconds
			cout<<value<<" Seconds = "<<fixed<<setprecision(2)<<converted<<" minutes.\n";
			break;
		case 2:
			converted=value/60; // 1 hour=60 minutes
			cout<<value<<" minutes = "<<fixed<<setprecision(2)<<converted<<" hours.\n";
			break;
		case 3:
			converted=value*3600; // 1hour=3600 seconds
			cout<<value<<" hours = "<<fixed<<setprecision(2)<<converted<<" seconds.\n";
			break;
		default:
			cout<<"Invalid Choice!\n";
	}
}

int main(){
	int choice;
	
	do{
		cout<<"Unit Converter Menu:\n";
		cout<<"1. Length Conversion\n";
		cout<<"2. Temperature Conversion\n";
		cout<<"3. Weight Conversion\n";
		cout<<"4. Time Conversion\n";
		cout<<"5. Exit\n";
		cout<<"Enter your choice: ";
		cin>>choice;
		
		switch(choice){
			case 1:
				lengthConverter();
				break;
			case 2:
				temperatureConverter();
				break;
			case 3:
				weightConverter();
				break;
			case 4:
				timeConverter();
				break;
			case 5:
				cout<<"Exiting...\n";
				break;
			default:
				cout<<"Invalid choice! Please try again.\n";				
		}
			cout<< "--------------------\n";
	}while(choice!=5);
	return 0;
}