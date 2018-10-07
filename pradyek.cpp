//Project ITE 001
//Paltera, Fonseca, Paragas
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <sstream>
#include <limits>

using namespace std;

//Receipt Responsive Dashes
void dasher(string str, float price);

//For Remove Menu
void removeMenu(int index, string str, float price);

//Menu Responsive Dots
void dotter(string str, float price);

//Returns Choose (x) and Displays List of chosen main ingredient
int getList(int choose, vector<string> &itemList, vector<float> &itemPrice, vector<string> &itemChoice, vector<float> &itemChoicePrice);

//Input Choose (for getlist function)
int getChoose(int &choose);

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
	vGinPrice.push_back(127.51); //Artillery Cocktail
	vGinPrice.push_back(242.45); //Earthquake
	vGinPrice.push_back(132.27); //Flying Dutchman
	vGinPrice.push_back(196.78); //Gibson
	vGinPrice.push_back(235.27); //Gin and it
	vGinPrice.push_back(217.45); //Long Drink
	vGinPrice.push_back(672.2); //St. Germain Martini
	vGinPrice.push_back(195.7); //Barrel Choke
	vGinPrice.push_back(403.32); //Caruso #1
	vGinPrice.push_back(132.81); //Cafe de Paris Cocktail
	vGinPrice.push_back(245.03); //Fifty-Fifty
	vGinPrice.push_back(177.76); //Hula-hula
	vGinPrice.push_back(172.39); //Fare Thee Well Martini
	vGinPrice.push_back(226.06); //Hearts on Fire
	
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
	vWhiskeyPrice.push_back(227.51); //T.N.T
	vWhiskeyPrice.push_back(330.52); //Barracuda
	vWhiskeyPrice.push_back(235.40); //Black Forest Cake
	vWhiskeyPrice.push_back(375.75); //Fire-wall
	vWhiskeyPrice.push_back(350.20); //Full Metal Jacket
	vWhiskeyPrice.push_back(299.99); //The Obama
	vWhiskeyPrice.push_back(201.90); //The Heim Lick
	vWhiskeyPrice.push_back(221.11); //Purgatory
	vWhiskeyPrice.push_back(323.45); //The Three Amigos
	vWhiskeyPrice.push_back(243.66); //Fatigue
	vWhiskeyPrice.push_back(250.50); //Final Straw
	vWhiskeyPrice.push_back(242.44); //I See Dead People
	vWhiskeyPrice.push_back(344.47); //Prosecutor
	vWhiskeyPrice.push_back(369.69); //Pear Noel
	
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
	vVodkaPrice.push_back(127.56); //Bullshot
	vVodkaPrice.push_back(130.52); //Appletini
	vVodkaPrice.push_back(135.40); //Apple Bomb
	vVodkaPrice.push_back(175.75); //Black Russian
	vVodkaPrice.push_back(150.32); //Death Rattle
	vVodkaPrice.push_back(199.99); //Hole in One
	vVodkaPrice.push_back(101.90); //Kamikaze
	vVodkaPrice.push_back(111.11); //Pukie Goop
	vVodkaPrice.push_back(123.45); //Sun burn
	vVodkaPrice.push_back(143.66); //Corkscrew
	vVodkaPrice.push_back(150.50); //Cobra
	vVodkaPrice.push_back(142.54); //Kiss of an angel
	vVodkaPrice.push_back(144.47); //Mom's Milk
	vVodkaPrice.push_back(143.69); //I see nothing
	vVodkaPrice.push_back(143.69); //Mother-in-law
	
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
	vRumPrice.push_back(127.51); //Broken ankle
	vRumPrice.push_back(130.52); //Quicky
	vRumPrice.push_back(135.40); //Belly
	vRumPrice.push_back(175.75); //Dragon's Mouth
	vRumPrice.push_back(150.21); //Davy Jones' Locker
	vRumPrice.push_back(199.99); //Jaguar
	vRumPrice.push_back(101.90); //Martinique
	vRumPrice.push_back(111.11); //My Sharona
	vRumPrice.push_back(123.45); //Midnight Mass
	vRumPrice.push_back(143.66); //Suffering Bastard
	vRumPrice.push_back(150.50); //Stroll Through The Woods
	vRumPrice.push_back(142.65); //BeBe
	vRumPrice.push_back(144.47); //You can't catch me
	vRumPrice.push_back(143.69); //Run, Run as fast as you can
	
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
	vTequillaPrice.push_back(127.51); //BTC
	vTequillaPrice.push_back(130.52); //Black Cat
	vTequillaPrice.push_back(135.40); //The Raging Bull
	vTequillaPrice.push_back(175.75); //Easy Tiger
	vTequillaPrice.push_back(150.05); //Hign Noon
	vTequillaPrice.push_back(199.99); //Paloma
	vTequillaPrice.push_back(101.90); //Sweet Dreams
	vTequillaPrice.push_back(111.11); //Del Rio
	vTequillaPrice.push_back(123.45); //East of Eden
	vTequillaPrice.push_back(143.66); //EL Santo
	vTequillaPrice.push_back(150.50); //Siesta
	vTequillaPrice.push_back(142.99); //Untitled
	vTequillaPrice.push_back(144.47); //Coup De Grace
	vTequillaPrice.push_back(143.69); //Rio Grande
	vTequillaPrice.push_back(144.47); //Uno, Dos, Tres
	
	vector<string> vMix;
	vMix.push_back("Egg");
	vMix.push_back("Beef Broth");
	vMix.push_back("Hot Sauce");
	vMix.push_back("Beer");
	vMix.push_back("Maggi Sauce");
	vMix.push_back("Moonshine");
	vMix.push_back("Orange Juice");
	vMix.push_back("Limes");
	vMix.push_back("Squid Ink");
	vMix.push_back("Brandy");
	vMix.push_back("Avocado");
	vMix.push_back("Matcha Powder");
	vMix.push_back("Lemon");
	vMix.push_back("Coffee");
	vMix.push_back("Apple cider");
	vMix.push_back("Pineapple juice");
	vMix.push_back("Iced tea");
	vMix.push_back("Watermelon");
	
	vector<float> vMixPrice;
	vMixPrice.push_back(6); //Egg
	vMixPrice.push_back(35); //Beef Broth
	vMixPrice.push_back(25); //Hot Sauce
	vMixPrice.push_back(50); //Beer
	vMixPrice.push_back(15); //Maggi Sauce
	vMixPrice.push_back(55); //Moonshine
	vMixPrice.push_back(12); //Orange Juice
	vMixPrice.push_back(20); //Limes
	vMixPrice.push_back(25); //Squid Ink
	vMixPrice.push_back(55); //Brandy
	vMixPrice.push_back(31); //Avocado
	vMixPrice.push_back(18); //Matcha Powder
	vMixPrice.push_back(22); //Lemon
	vMixPrice.push_back(11); //Coffee
	vMixPrice.push_back(12.75); //Apple cide
	vMixPrice.push_back(17); //Pineapple juice
	vMixPrice.push_back(20); //Iced Tea
	vMixPrice.push_back(30); //Watermelon
	
	//Variables
	int input = 3, index, choose, remove, limit = 0;
	int i, myRand;
	float price, tempTotal = 0, total = 0, payment, change;
	char another, check, upper = 'Y';
	string main;
	
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
			if (input < 0 || input> 6) {
				cout<<"Enter 0 to 6 only"<<endl;
			}
			cout<<"Input: ";
			cin>>input;
			
			switch(input) {
				case 0: cout<<endl<<"--Transaction Cancelled--"; exit(0); break;
				case 1: main = "Gin"; break;
				case 2: main = "Whiskey"; break;
				case 3: main = "Vodka"; break;
				case 4: main = "Rum"; break;
				case 5: main = "Tequilla"; break;
				case 6: main = "Mix"; break;
			}
			system("cls");
			
			cout<<"[0] Back"<<endl;
			if (main == "Gin") {
				choose = getList(choose, vGin, vGinPrice, vChoice, vPrice);
			} else if (main == "Whiskey") {
				choose = getList(choose, vWhiskey, vWhiskeyPrice, vChoice, vPrice);
			} else if (main == "Vodka") {
				choose = getList(choose, vVodka, vVodkaPrice, vChoice, vPrice);
			} else if (main == "Rum") {
				choose = getList(choose, vRum, vRumPrice, vChoice, vPrice);
			} else if (main == "Tequilla") {
				choose = getList(choose, vTequilla, vTequillaPrice, vChoice, vPrice);
			} else {
				choose = getList(choose, vMix, vMixPrice, vChoice, vPrice);
			}
			system("cls");
		} while(input < 1 || input > 6 || choose== 0);
		
		do {	
			tempTotal = 0;
			if (!vChoice.empty()) {
				cout<<"Current Purchases:"<<endl;
				for (index = 0; index < vChoice.size(); index++) {
					dasher(vChoice[index], vPrice[index]);
					tempTotal += vPrice[index];
				}
				cout<<"\nTotal: "<<tempTotal;
				cout<<endl<<endl;
			}
			cout<<"[Y] Buy Another"<<endl;
			cout<<"[N] Check Out"<<endl;
			cout<<"[R] Remove Purchase"<<endl;
			cout<<"[C] Cancel"<<endl; 
			cout<<endl<<"Press other keys to go back."<<endl;
			cout<<"Input: ";
			cin>>another;
			upper = toupper(another);
			if (upper == 'Y') {
				cout<<"\nAre you sure? "<<endl;
				cout<<"[O] Yes"<<endl;
				cout<<"[X] No"<<endl;
				cout<<"Input: ";
				cin>>another;
				check = toupper(another);
				if (check == 'O') {
					upper = 'Y';
				} else {
					upper = 'X';
				}
			} else if (upper == 'N') {
				cout<<"\nAre you sure? "<<endl;
				cout<<"[O] Yes"<<endl;
				cout<<"[X] No"<<endl;
				cout<<"Input: ";
				cin>>another;
				check = toupper(another);
				if (check == 'X') {
					upper = 'X';
				}
			} else if (upper == 'C') {
				cout<<endl<<"--Transaction Cancelled--"; 
				exit(0);
			} else if (upper == 'R') {
				do {
					system("cls");
					if (vChoice.size() == 1) {
						cout<<"Are you sure you want to remove "<<vChoice[0]<<"?"<<endl;
						cout<<"[O] Yes"<<endl;
						cout<<"[X] No"<<endl;
						cout<<"Input: ";
						cin>>another;
						upper = toupper(another);
						if (upper == 'O') {
							vChoice.erase(vChoice.begin());
							vPrice.erase(vPrice.begin());
						}
						upper = 'X';
					} else if (vChoice.size() > 1) {
						remove = 1;
						do {
							system("cls");
							tempTotal = 0;
							if (remove < 0 || remove > vChoice.size()) {
								cout<<"Enter 0 to "<<vChoice.size()<<" only"<<endl;
							}
 							cout<<"Choose item to remove: "<<endl;
 							cout<<"[0] Back"<<endl;
							for (index = 0; index < vChoice.size(); index++) {
								removeMenu(index + 1, vChoice[index], vPrice[index]);
								tempTotal += vPrice[index];
							}
							cout<<"\nTotal: "<<tempTotal;
							cout<<endl;
							cout<<"Input: ";
							cin>>remove;
							if (remove != 0) {
								cout<<endl<<"Are you sure you want to remove "<<vChoice[remove-1]<<"?"<<endl;
								cout<<"[O] Yes"<<endl;
								cout<<"[X] No"<<endl;
								cout<<"Input: ";
								cin>>another;
								upper = toupper(another);
								if (upper == 'O') {
									vChoice.erase(vChoice.begin() + (remove-1));
									vPrice.erase(vPrice.begin() + (remove-1));
								}
								remove = 0;
								upper = 'O';
							} else {
								upper = 'X';
							}
						} while (remove < 0 || remove > vChoice.size());
					} else {
						cout<<"There are no items to remove..."<<endl;
						cout<<"Press any button to continue.";
						cin.get();
						upper = 'Y';
					}
				} while (upper == 'O');
			} else {
				upper = 'Y';
			}
			system("cls");
		} while (upper == 'X');
	} while(upper == 'Y');
	
	srand(time(0));
	for (index = 0; index < vPrice.size(); index++) {
		total += vPrice[index];
	}
	payment = total + 1;
	
	//Payment
	do {
		myRand = randNum(1,4);
		if (payment < total) {
			switch (myRand) {
				case 1: cout<<"Add more"<<endl; break;
				case 2: cout<<"Insufficient balance."<<endl; break;
				case 3: cout<<"Not enough cash"<<endl; break;
				case 4: cout<<"You don't have enough money"<<endl; break;
			}
			
		}
		cout<<"Purchases:"<<endl;
		for (index = 0; index < vChoice.size(); index++) {
			dasher(vChoice[index], vPrice[index]);
		}
		cout<<endl;
		cout<<"Total: "<<total<<endl;
		cout<<"Payment: ";
		cin>>payment;
		system("cls");
	} while(payment < total);
	
	//Receipt
	cout<<"----------------------Receipt----------------------"<<endl<<endl;
	cout<<"PPF'S EVIL, INC."<<endl;
	cout<<"The Space Bar"<<endl;
	cout<<"Technological Institute of Technology QC"<<endl<<endl;
	cout<<"Trans Date: "<<dt<<endl<<endl;
	
	//Display Payment
	dasher("Payment", payment);
	cout<<endl;
	
	//Display Purchases
	cout<<"Purchases:"<<endl;
	for (index = 0; index < vChoice.size(); index++) {
		dasher(vChoice[index], vPrice[index]);
	}
	
	//Display Total
	for(i = 1; i <= 50; i++) {
			cout<<"-";
	}
	cout<<endl;
	dasher("Total",total);
	
	//Display Change
	change = payment - total;
	dasher("Change", change);
	cout<<endl<<"Thank you for purchasing. Enjoy!"<<endl;
}

//Receipt Responsive Dashes
void dasher(string str, float price) {
	string strPrice;
	int i, dashCount, dashMax = 50, len;
	strPrice = "P" + tostr(price);
	len = strPrice.length();
	cout<<str;
	dashCount = dashMax - (str.length() + len);
	for (i =1; i <= dashCount; i++) {
		cout<<"-";
	}
	cout<<strPrice<<endl;
}

//For Remove Menu
void removeMenu(int index, string str, float price) {
	string strPrice;
	strPrice = "P" + tostr(price);
	cout<<"["<<index<<"] "<<str;
	cout<<" - "<<strPrice<<endl;
}

//Menu Responsive Dots
void dotter(string str, float price) {
	string strPrice;
	int i, dashCount, dashMax = 35, len;
	strPrice = "P" + tostr(price);
	len = strPrice.length();
	cout<<str;
	dashCount = dashMax - (str.length() + len);
	for (i =1; i <= dashCount; i++) {
		cout<<".";
	}
	cout<<strPrice<<endl;
}

//Returns Choose (x) and Displays List of chosen main ingredient
int getList(int choose, vector<string> &itemList, vector<float> &itemPrice, vector<string> &itemChoice, vector<float> &itemChoicePrice){
	int index, x, q = 1;
	for (index = 0; index < itemList.size(); index++) {
		cout<<"["<<index+1<<"] ";
		dotter(itemList[index], itemPrice[index]);
	}
	cout<<endl;
	cout<<"Enter the Number of your choice: ";
	x = getChoose(choose);
	if (x != 0) {
		do {
			if (q == 0) {
				cout<<"You can't enter zero (0) as a quantity"<<endl;
			}
			cout<<"Enter quantity: ";
			cin>>q;
			if (q == 0) {
				system("cls");
			}
		} while (q == 0);
		itemChoice.push_back(itemList[x-1]);
		itemChoicePrice.push_back(itemPrice[x-1]*q);
	}
	return x;
}

//Input Choose (for getlist function)
int getChoose(int &choose) {
	cin >> choose;
	if (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		return 0;
	} else {
		return choose;
	}
}
