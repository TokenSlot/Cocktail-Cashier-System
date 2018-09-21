//Project ITE 001
//Paltera, Fonseca, Paragas
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <sstream>

using namespace std;

//Converts numerical value into string
template <typename T>string tostr(const T& t) {
	ostringstream os;
	os<<t;
	return os.str();
}

//Generates a random number
int randNum(int min, int max) {
	return rand() % max + min;
}

main() {
	//Declarations
	time_t now = time(0);
	char* dt = ctime(&now);
	
	vector<string> vChoice;
	vector<float> vPrice;
	
	vector<string> vGin;
	vGin.push_back("Artillery Cocktail");
	vGin.push_back("Earthquake");
	vGin.push_back("Flying Dutchman");
	vGin.push_back("Gibson");
	vGin.push_back("Gin and it");
	vGin.push_back("Long Drink");
	vGin.push_back("St. Germain Martini");
	vGin.push_back("Barrel Choke");
	vGin.push_back("Caruso #1");
	vGin.push_back("Cafe de Paris Cocktail");
	vGin.push_back("Fifty-Fifty");
	vGin.push_back("Hula-hula");
	vGin.push_back("Fare Thee Well Martini");
	vGin.push_back("Hearts on Fire");
	
	vector<float> vGinPrice;
	vGinPrice.push_back(127.51);
	vGinPrice.push_back(130.52);
	vGinPrice.push_back(135.40);
	vGinPrice.push_back(175.75);
	vGinPrice.push_back(150);
	vGinPrice.push_back(199.99);
	vGinPrice.push_back(101.90);
	vGinPrice.push_back(111.11);
	vGinPrice.push_back(123.45);
	vGinPrice.push_back(143.66);
	vGinPrice.push_back(150.50);
	vGinPrice.push_back(142);
	vGinPrice.push_back(144.47);
	vGinPrice.push_back(143.69);
	
	vector<string> vWhiskey;
	vWhiskey.push_back("T.N.T");
	vWhiskey.push_back("Barracuda");
	vWhiskey.push_back("Black Forest Cake");
	vWhiskey.push_back("Fire-wall");
	vWhiskey.push_back("Full Metal Jacket");
	vWhiskey.push_back("The Obama");
	vWhiskey.push_back("The Heim Lick");
	vWhiskey.push_back("Purgatory");
	vWhiskey.push_back("The Three Amigos");
	vWhiskey.push_back("Fatigue");
	vWhiskey.push_back("Final straw");
	vWhiskey.push_back("I See Dead People");
	vWhiskey.push_back("Prosecutor");
	vWhiskey.push_back("Pear Noel");
	
	vector<float> vWhiskeyPrice;
	vWhiskeyPrice.push_back(227.51);
	vWhiskeyPrice.push_back(330.52);
	vWhiskeyPrice.push_back(235.40);
	vWhiskeyPrice.push_back(375.75);
	vWhiskeyPrice.push_back(350.20);
	vWhiskeyPrice.push_back(299.99);
	vWhiskeyPrice.push_back(201.90);
	vWhiskeyPrice.push_back(221.11);
	vWhiskeyPrice.push_back(323.45);
	vWhiskeyPrice.push_back(243.66);
	vWhiskeyPrice.push_back(250.50);
	vWhiskeyPrice.push_back(242.44);
	vWhiskeyPrice.push_back(344.47);
	vWhiskeyPrice.push_back(369.69);
	
	vector<string> vVodka;
	vVodka.push_back("Bullshot");
	vVodka.push_back("Appletini");
	vVodka.push_back("Apple Bomb");
	vVodka.push_back("Black Russian");
	vVodka.push_back("Death Rattle");
	vVodka.push_back("Hole in One");
	vVodka.push_back("Kamikaze");
	vVodka.push_back("Pukie Goop");
	vVodka.push_back("Sun burn");
	vVodka.push_back("Corkscrew");
	vVodka.push_back("Cobra");
	vVodka.push_back("Kiss of an angel");
	vVodka.push_back("Mom's Milk");
	vVodka.push_back("I see nothing");
	vVodka.push_back("Mother-in-law");
	
	vector<float> vVodkaPrice;
	vVodkaPrice.push_back(127.56);
	vVodkaPrice.push_back(130.52);
	vVodkaPrice.push_back(135.40);
	vVodkaPrice.push_back(175.75);
	vVodkaPrice.push_back(150.32);
	vVodkaPrice.push_back(199.99);
	vVodkaPrice.push_back(101.90);
	vVodkaPrice.push_back(111.11);
	vVodkaPrice.push_back(123.45);
	vVodkaPrice.push_back(143.66);
	vVodkaPrice.push_back(150.50);
	vVodkaPrice.push_back(142.54);
	vVodkaPrice.push_back(144.47);
	vVodkaPrice.push_back(143.69);
	
	vector<string> vRum;
	vRum.push_back("Broken ankle");
	vRum.push_back("Quicky");
	vRum.push_back("Belly");
	vRum.push_back("Dragon's Mouth");
	vRum.push_back("Davy Jones' Locker");
	vRum.push_back("Jaguar");
	vRum.push_back("Martinique");
	vRum.push_back("My Sharona");
	vRum.push_back("Midnight Mass");
	vRum.push_back("Suffering Bastard");
	vRum.push_back("Stroll Through The Woods");
	vRum.push_back("BeBe");
	vRum.push_back("You can't catch me");
	vRum.push_back("Run, Run as fast as you can");
	
	vector<float> vRumPrice;
	vRumPrice.push_back(127.51);
	vRumPrice.push_back(130.52);
	vRumPrice.push_back(135.40);
	vRumPrice.push_back(175.75);
	vRumPrice.push_back(150.21);
	vRumPrice.push_back(199.99);
	vRumPrice.push_back(101.90);
	vRumPrice.push_back(111.11);
	vRumPrice.push_back(123.45);
	vRumPrice.push_back(143.66);
	vRumPrice.push_back(150.50);
	vRumPrice.push_back(142.65);
	vRumPrice.push_back(144.47);
	vRumPrice.push_back(143.69);
	
	vector<string> vTequilla;
	vTequilla.push_back("BTC");
	vTequilla.push_back("Black Cat");
	vTequilla.push_back("The Raging Bull");
	vTequilla.push_back("Easy Tiger");
	vTequilla.push_back("High Noon");
	vTequilla.push_back("Paloma");
	vTequilla.push_back("Sweet dreams");
	vTequilla.push_back("Del Rio");
	vTequilla.push_back("East of Eden");
	vTequilla.push_back("El Santo");
	vTequilla.push_back("Siesta");
	vTequilla.push_back("Untitled");
	vTequilla.push_back("Coup De Grace");
	vTequilla.push_back("Rio Grande");
	vTequilla.push_back("Uno, Dos, Tres");
	
	vector<float> vTequillaPrice;
	vTequillaPrice.push_back(127.51);
	vTequillaPrice.push_back(130.52);
	vTequillaPrice.push_back(135.40);
	vTequillaPrice.push_back(175.75);
	vTequillaPrice.push_back(150.05);
	vTequillaPrice.push_back(199.99);
	vTequillaPrice.push_back(101.90);
	vTequillaPrice.push_back(111.11);
	vTequillaPrice.push_back(123.45);
	vTequillaPrice.push_back(143.66);
	vTequillaPrice.push_back(150.50);
	vTequillaPrice.push_back(142.99);
	vTequillaPrice.push_back(144.47);
	vTequillaPrice.push_back(143.69);
	
//	vector<string> vMix;
//	vMix.push_back("Egg");
//	vMix.push_back("Beef Broth");
//	vMix.push_back("Hot Sauce");
//	vMix.push_back("Beer");
//	vMix.push_back("Maggi Sauce");
//	vMix.push_back("Moonshine");
//	vMix.push_back("Orange Juice");
//	vMix.push_back("Limes");
//	vMix.push_back("Squid Ink");
//	vMix.push_back("Brandy");
//	vMix.push_back("Avocado");
//	vMix.push_back("Matcha Powder");
//	vMix.push_back("Lemon");
//	vMix.push_back("Coffee");
//	vMix.push_back("Apple cider");
//	vMix.push_back("Pineapple juice");
//	vMix.push_back("Iced tea");
//	vMix.push_back("Watermelon");
	

	int input = 3, index, choose;
	int priceLen, itemLen, totalLen, payLen, changeLen, dashMax = 50, dashCount, i, myRand;
	float price, total = 0, payment, change;
	char another, upper = 'Y';
	string main, strPrice, strTotal, strPay, strChange;
	
	do {
		do {
			cout<<"----- Welcome to the Space Bar -----"<<endl;
			cout<<endl;
			cout<<"Choose the main ingredient"<<endl;
			cout<<"[0] Exit"<<endl;
			cout<<"[1] Gin"<<endl;
			cout<<"[2] Whiskey"<<endl;
			cout<<"[3] Vodka"<<endl;
			cout<<"[4] Rum"<<endl;
			cout<<"[5] Tequilla"<<endl;
			//cout<<"[6] Mix your own"<<endl<<endl; Not yet done!
			if (input < 1 || input> 5) {
				cout<<"Enter 1 to 5 only"<<endl;
			}
			cout<<"Input: ";
			cin>>input;
			
			switch(input) {
				case 1: main = "Gin"; break;
				case 2: main = "Whiskey"; break;
				case 3: main = "Vodka"; break;
				case 4: main = "Rum"; break;
				case 5: main = "Tequilla"; break;
			}
			system("cls");
			
			if (main == "Gin") {
				for (index = 0; index < vGin.size(); index++) {
					cout<<"["<<index+1<<"] "<<vGin[index]<<endl;
				}
				cout<<endl<<"[0] Back"<<endl<<endl;
				cout<<"Enter the Number of your choice: ";
				cin>>choose;
				vChoice.push_back(vGin[choose-1]);
				vPrice.push_back(vGinPrice[choose-1]);
			} else if (main == "Whiskey") {
				for (index = 0; index < vWhiskey.size(); index++) {
					cout<<"["<<index+1<<"] "<<vWhiskey[index]<<endl;
				}
				cout<<endl<<"[0] Back"<<endl<<endl;
				cout<<"Enter the Number of your choice: ";
				cin>>choose;
				vChoice.push_back(vWhiskey[choose-1]);
				vPrice.push_back(vWhiskeyPrice[choose-1]);
			} else if (main == "Vodka") {
				for (index = 0; index < vVodka.size(); index++) {
					cout<<"["<<index+1<<"] "<<vVodka[index]<<endl;
				}
				cout<<endl<<"[0] Back"<<endl<<endl;
				cout<<"Enter the Number of your choice: ";
				cin>>choose;
				vChoice.push_back(vVodka[choose-1]);
				vPrice.push_back(vVodkaPrice[choose-1]);
			} else if (main == "Rum") {
				for (index = 0; index < vRum.size(); index++) {
					cout<<"["<<index+1<<"] "<<vRum[index]<<endl;
				}
				cout<<endl<<"[0] Back"<<endl<<endl;
				cout<<"Enter the Number of your choice: ";
				cin>>choose;
				vChoice.push_back(vRum[choose-1]);
				vPrice.push_back(vRumPrice[choose-1]);
			} else if (main == "Tequilla") {
				for (index = 0; index < vTequilla.size(); index++) {
					cout<<"["<<index+1<<"] "<<vTequilla[index]<<endl;
				}
				cout<<endl<<"[0] Back"<<endl<<endl;
				cout<<"Enter the Number of your choice: ";
				cin>>choose;
				vChoice.push_back(vTequilla[choose-1]);
				vPrice.push_back(vTequillaPrice[choose-1]);
			}
			
			if (choose == 0) {
				input = 6;
			}
		} while(input < 1 || input > 5);
		
		cout<<"Buy another? (Y/N) ";
		cin>>another;
		upper = toupper(another);
		system("cls");
		total += vPrice.back();
	} while(upper == 'Y');
	
	payment = total + 1;
	srand(time(0));
	
	//Payment
	do {
		myRand = randNum(1,7);
		if (payment < total) {
			switch (myRand) {
				case 1: cout<<"More pa bes, more pa!"<<endl; break;
				case 2: cout<<"Kulang!"<<endl; break;
				case 3: cout<<"Woy! Lasing ka na! Kulang bayad mo!"<<endl; break;
				case 4: cout<<"Kulang to!"<<endl; break;
				case 5: cout<<"Insufficient balance."<<endl; break;
				case 6: cout<<"ISA PA SIGE! MAKULET KA AH!"<<endl; break;
				case 7: cout<<"hmmmmmmm..."<<endl; break;
				
			}
			
		}
		cout<<"Total: "<<total<<endl;
		cout<<"Payment: ";
		cin>>payment;
		system("cls");
	} while(payment < total);
	
	//Receipt
	cout<<"----------------------Receipt----------------------"<<endl<<endl;
	cout<<"PPF EVIL, INC."<<endl;
	cout<<"Space Bar"<<endl;
	cout<<"Tri-state Area"<<endl<<endl;
	cout<<"Trans Date: "<<dt<<endl<<endl;
	
	//Display Payment
	strPay = "P" + tostr(payment);
	payLen = strPay.length();
	cout<<endl<<"Payment";
	dashCount = dashMax - (7 + payLen);
	for(i = 1; i <= dashCount; i++) {
			cout<<"-";
		}
	cout<<strPay<<endl<<endl;
	for (index = 0; index < vChoice.size(); index++) {
		strPrice = "P" + tostr(vPrice[index]);
		itemLen = vChoice[index].length();
		priceLen = strPrice.length();
		dashCount = dashMax - (itemLen + priceLen);
		cout<<vChoice[index];
		for(i = 1; i <= dashCount; i++) {
			cout<<"-";
		}
		cout<<strPrice<<endl;
	}
	
	cout<<endl;
	
	//Display Total
	for(i = 1; i <= 50; i++) {
			cout<<"-";
	}
	strTotal = "P" + tostr(total);
	totalLen = strTotal.length();
	cout<<endl<<"Total";
	dashCount = dashMax - (5 + totalLen);
	for(i = 1; i <= dashCount; i++) {
			cout<<"-";
		}
	cout<<strTotal<<endl;
	
	//Display Change
	change = payment - total;
	strChange = "P" + tostr(change);
	changeLen = strChange.length();
	cout<<"Change";
	dashCount = dashMax - (6 + changeLen);
	for(i = 1; i <= dashCount; i++) {
			cout<<"-";
		}
	cout<<strChange<<endl;
	
	
	cout<<endl<<"Thank you for purchasing. Enjoy!"<<endl;
	
}
