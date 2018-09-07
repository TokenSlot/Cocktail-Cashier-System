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
