//Project ITE 001
//Paltera, Fonseca, Peragas
#include <iostream>
#include <ctime>

using namespace std;

main() {
	//Declarations
	time_t now = time(0);
	char* dt = ctime(&now); 
	
	int input = 3;
	float price;
	string main;
	
	//do {
		do {
			cout<<"----- Welcome to the Space Bar -----"<<endl;
			cout<<endl;
			cout<<"Choose the main ingredient"<<endl;
			cout<<"[1] Gin"<<endl;
			cout<<"[2] Whiskey"<<endl;
			cout<<"[3] Vodka"<<endl;
			cout<<"[4] Rum"<<endl;
			cout<<"[5] Tequila"<<endl;
			cout<<"[6] Mix your own"<<endl<<endl;
			if (input < 1 || input> 6) {
				cout<<"Enter 1 to 6 only"<<endl;
			}
			cout<<"Input: ";
			cin>>input;
			
			switch(input) {
				case 1: main = "Gin"; break;
				case 2: main = "Whiskey"; break;
				case 3: main = "Vodka"; break;
				case 4: main = "Rum"; break;
				case 5: main = "Tequila"; break;
			}
			system("cls");
		} while(input < 1 || input > 6);
		
	//} while();
	
	
	price = 10.75;
	//Receipt
	cout<<"----- Receipt ------"<<endl<<endl;
	cout<<"Space Bar Transaction"<<endl<<endl;
	cout<<"Date: "<<dt<<endl;
	cout<<main<<" ---------------- P"<<price<<endl;
}
//Project ITE 001
//Paltera, Fonseca, Paragas
#include <iostream>
#include <vector>
#include <ctime>
 
using namespace std;
 
int main() {
	//Declarations
	time_t now = time(0);
	char* dt = ctime(&now);
	
	vector<string> vItem;
	vector<float> vPrice;
	
	int input = 3;
	float price;
	string main;
	
	//do {
		do {
			cout<<"----- Welcome to the Space Bar -----"<<endl;
			cout<<endl;
			cout<<"Choose the main ingredient"<<endl;
			cout<<"[1] Gin (Php 15)"<<endl;
			cout<<"[2] Whiskey (Php 13)"<<endl;
			cout<<"[3] Vodka (Php 69)"<<endl;
			cout<<"[4] Rum (Php 5)"<<endl;
			cout<<"[5] Tequila (Php 25)"<<endl;
			cout<<"[6] Mix your own"<<endl<<endl;
			if (input < 1 || input> 6) {
				cout<<"Enter 1 to 6 only"<<endl;
			}
			cout<<"Input: ";
			cin>>input;
			
			switch(input) {
				case 1: 
					main = "Gin";
					price = 15;
					break;
				case 2: 
					main = "Whiskey";
					price = 13;
				break;
				case 3: 
					main = "Vodka";
					price = 69;
					break;
				case 4: 
					main = "Rum"; 
					price = 5;
					break;
				case 5: 
					main = "Tequila";
					price = 25;
					break;
			}
			
			vItem.push_back(main);
			vPrice.push_back(price);
			
			system("cls");
		} while(input < 1 || input > 6);
		
	//} while();


	//Receipt
	cout<<"----- Receipt ------"<<endl<<endl;
	cout<<"Space Bar Transaction"<<endl<<endl;
	cout<<"Date: "<<dt<<endl;
	cout<<vItem[0]<<"----------------P"<<vPrice[0]<<endl;
}
