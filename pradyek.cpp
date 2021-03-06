//Project ITE 001
//Paltera, Fonseca, Paragas
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <sstream>
#include <limits>
#include <algorithm>

using namespace std;

//Receipt Responsive Dashes
void dasher(string str, float price, int mul);

//For Remove Menu
void removeMenu(int index, string str, float price, int mul);

//Menu Responsive Dots
void dotter(string str, float price);

//Returns Choose (x) and Displays List of chosen main ingredient
int getList(string name, int choose, vector<string> &itemList, vector<float> &itemPrice, vector<string> &itemChoice, vector<float> &itemChoicePrice, vector<int> &multiplier);

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

//Clear Input
void clearInput() {
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

main() {
	//Declarations
	time_t now = time(0);
	char* dt = ctime(&now);
	
	vector<string> vChoice;
	vector<float> vPrice;
	vector<int> vMul;
	
	vector<string> vMixer;
	vector<float> vMixerPrice;
	vector<int> vMixerMul;
	
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

	
	//Declaration of Variables
	int input = 3, userInput = 1, index, clearMix = 0, loop = 0 , choose, remove = 1, removeQuantity = 1, removePrice = 0, temp, mixCount = 0;
	int i, myRand, q;
	float price, tempTotal = 0, total = 0, payment, change, mainMix, mixPrice = 0, mixTempPrice = 0;
	char another, check, upper = 'Y', userConfirm;
	string main, mixName;
	
	string mainItems[5] = {"Gin", "Whiskey", "Vodka", "Rum", "Tequilla"};
	float mainPrices[5] = {56.21, 52.97, 42.16, 40, 48};
	
	do { 
		do {
			do {
				system("cls");
				cout<<"----- Welcome to the Space Bar -----"<<endl;
				cout<<endl;
				cout<<" --- Main Menu ---"<<endl<<endl;
				cout<<"[0] Exit"<<endl;
				cout<<" --------------------- "<<endl;
				for (index = 0; index < 5; index++) {
					cout<<"["<<index+1<<"] "<<mainItems[index]<<endl;
				}
				cout<<"[6] Mix your own"<<endl<<endl;
				if (input < 0 || input> 6) {
					cout<<"Enter 0 to 6 only"<<endl;
				}
				cout<<"Input: ";
				cin>>input;
				if (cin.fail()) {
					input = -1;
				}
				clearInput();
			} while (input < 0 || input > 6);
			switch(input) {
				case 0: cout<<endl<<"--Transaction Cancelled--"; exit(0); break;
				case 1: main = "Gin"; break;
				case 2: main = "Whiskey"; break;
				case 3: main = "Vodka"; break;
				case 4: main = "Rum"; break;
				case 5: main = "Tequilla"; break;

			}
			system("cls");
			if (main == "Gin") {
				choose = getList(main, choose, vGin, vGinPrice, vChoice, vPrice, vMul);
			} else if (main == "Whiskey") {
				choose = getList(main, choose, vWhiskey, vWhiskeyPrice, vChoice, vPrice, vMul);
			} else if (main == "Vodka") {
				choose = getList(main, choose, vVodka, vVodkaPrice, vChoice, vPrice, vMul);
			} else if (main == "Rum") {
				choose = getList(main, choose, vRum, vRumPrice, vChoice, vPrice, vMul);
			} else if (main == "Tequilla") {
				choose = getList(main, choose, vTequilla, vTequillaPrice, vChoice, vPrice, vMul);
			}
			system("cls");
		} while(choose == 0);
		
		do {
			//USER CART MENU
			tempTotal = 0;
			if (!vChoice.empty()) {
				cout<<"Current Purchases:"<<endl;
				for (index = 0; index < vChoice.size(); index++) {
					dasher(vChoice[index], vPrice[index], vMul[index]);
					tempTotal += vPrice[index]*vMul[index];
				}
				cout<<"\nTotal: P"<<tempTotal;
				cout<<endl<<endl;
			} else {
				cout<<"Cart Empty..."<<endl<<endl;
			}
			cout<<"[Y] Buy Another"<<endl;
			cout<<"[N] Check Out"<<endl;
			cout<<"[R] Remove Purchase"<<endl;
			cout<<"[C] Cancel Transaction"<<endl; 
			cout<<endl;
			if (upper == 'p') {
				cout<<"Invalid Input"<<endl;
			}
			cout<<"Input: ";
			cin>>another;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			upper = toupper(another);
			if (upper == 'Y') {
				cout<<endl<<"Are you sure you want to buy another?"<<endl;
				cout<<"[O] Yes"<<endl;
				cout<<"[X] No"<<endl;
				cout<<"Input: ";
				cin>>another;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				check = toupper(another);
				if (check == 'O') {
					upper = 'Y';
				} else if (check == 'X') {
					upper = 'X';
				} else {
					upper = 'p';
				}
			} else if (upper == 'N') {
				if (vChoice.empty() == 0) {
					cout<<endl<<"Are you sure you want to check out?"<<endl;
					cout<<"[O] Yes"<<endl;
					cout<<"[X] No"<<endl;
					cout<<"Input: ";
					cin>>another;
					check = toupper(another);
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					if (check == 'X') {
						upper = 'X';
					} else if (check != 'O' && check != 'X') {
						upper = 'p';
					}
				} else {
					cout<<"You can't check out an empty cart..."<<endl;
					cout<<"Press any button to go back."<<endl;
					cin.get();
					upper = 'X';
				}
			} else if (upper == 'C') {
				cout<<endl<<"--Transaction Cancelled--"; 
				exit(0);
			} else if (upper == 'R') {
				//REMOVE MENU
				do {
					system("cls");
					if (vChoice.size() > 0) { //Checks if vChoice is empty
						do {
							system("cls");
							tempTotal = 0;
 							cout<<"Choose an item to remove: "<<endl;
 							cout<<"[0] Back"<<endl;
 							cout<<" --------------------- "<<endl;
							for (index = 0; index < vChoice.size(); index++) {
								removeMenu(index + 1, vChoice[index], vPrice[index], vMul[index]);
								tempTotal += vPrice[index]*vMul[index];
							}
							cout<<"\nTotal: P"<<tempTotal;
							cout<<endl;
							if (remove < 0 || remove > vChoice.size()) {
								cout<<"Enter 0 to "<<vChoice.size()<<" only"<<endl;
							}
							cout<<"Input: ";
							cin>>remove;
							if (cin.fail()) {
								remove = -1;
							}
							cin.clear();
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
						} while (remove < 0 || remove > vChoice.size());
						if (remove != 0) {
							if (vMul[remove-1] > 1) { //Removing an item with 2 or more quantity
								do {
									system("cls");
									cout<<"You currently have "<<vMul[remove-1]<<" "<<vChoice[remove-1]<<endl;
									cout<<"How many do you want to remove?"<<endl;
									cout<<"(Enter Zero (0) to Cancel)"<<endl<<endl;
									if (removeQuantity < 0 || removeQuantity > vMul[remove-1]) {
										cout<<"Invalid Input"<<endl;
									}
									cout<<"Input: ";
									cin>>removeQuantity;
									if (cin.fail()) {
										remove = -1;
									}
									cin.clear();
									cin.ignore(numeric_limits<streamsize>::max(), '\n');
								} while (removeQuantity < 0 || removeQuantity > vMul[remove-1]);
							}
							upper = 'O';
							do {
								system("cls");
								cout<<"Are you sure you want to remove "<<vMul[remove-1]<<" "<<vChoice[remove-1]<<"?"<<endl;
								if (vMul[remove-1] == 1) {
									removeQuantity = 1;
								}
								cout<<"[O] Yes"<<endl;
								cout<<"[X] No"<<endl;
								if (upper != 'O' && upper != 'X') {
									cout<<"Invalid Input"<<endl;
								}
								cout<<"Input: ";
								cin>>another;
								upper = toupper(another);
								cin.clear();
								cin.ignore(numeric_limits<streamsize>::max(), '\n');
							} while (upper != 'O' && upper != 'X');
							if (upper == 'O') {
							vMul[remove-1] -= removeQuantity;
							if (vMul[remove-1] == 0) {
								vChoice.erase(vChoice.begin() + (remove-1));
								vPrice.erase(vPrice.begin() + (remove-1));
								vMul.erase(vMul.begin() + (remove-1));
								}
							}
							remove = 0;
							upper = 'O'; //Loop
						} else {
							upper = 'X'; //End Loop (user's choice)
						}
					} else {
						cout<<"There are no items to remove..."<<endl;
						cout<<"Press any button to go back."<<endl;
						cin.get();
						upper = 'X'; //End Loop of Remove Menu
					}
				} while (upper == 'O'); //Loop Remove Menu until user chooses to go back
			} else {
				//Invalid Input
				upper = 'p';
			}
			system("cls");
		} while (upper == 'X' || upper == 'p');
	} while(upper == 'Y');
	
	srand(time(0));
	//Get Total Price
	for (index = 0; index < vPrice.size(); index++) {
		total += vPrice[index]*vMul[index];
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
			dasher(vChoice[index], vPrice[index], vMul[index]);
		}
		cout<<endl;
		cout<<"Total: P"<<total<<endl;
		cout<<"Enter Payment: ";
		cin>>payment;
		if (cin.fail()) {
			payment = -1;
		}
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		system("cls");
	} while(payment < total);
	
	//Receipt
	cout<<"----------------------Receipt----------------------"<<endl<<endl;
	cout<<"PPF'S EVIL, INC."<<endl;
	cout<<"The Space Bar"<<endl;
	cout<<"Technological Institute of Technology QC"<<endl<<endl;
	cout<<"Trans Date: "<<dt<<endl<<endl;
	
	//Display Payment
	dasher("Payment", payment, 1);
	cout<<endl;
	
	//Display Purchases
	cout<<"Purchases:"<<endl;
	for (index = 0; index < vChoice.size(); index++) {
		dasher(vChoice[index], vPrice[index], vMul[index]);
	}
	
	//Display Total
	for(i = 1; i <= 50; i++) {
			cout<<"-";
	}
	cout<<endl;
	dasher("Total",total, 1);
	
	//Display Change
	change = payment - total;
	dasher("Change", change, 1);
	cout<<endl<<"Thank you for purchasing. Enjoy!"<<endl;
}

//Receipt Responsive Dashes
void dasher(string str, float price, int mul) {
	string strPrice, strName, strMul;
	int i, dashCount, dashMax = 50, len;
	strPrice = "P" + tostr(price*mul);
	strMul = "x" + tostr(mul);
	len = strPrice.length();
	if (mul > 1) {
		strName = strMul + " " + str;
	} else {
		strName = str;
	}
	cout<<strName;
	dashCount = dashMax - (strName.length() + len);
	for (i =1; i <= dashCount; i++) {
		cout<<"-";
	}
	cout<<strPrice<<endl;
}

//For Remove Menu
void removeMenu(int index, string str, float price, int mul) {
	string strPrice, strName, strMul;
	strPrice = "P" + tostr(price*mul);
	strMul = "x" + tostr(mul);
	if (mul > 1) {
		strName = strMul + " " + str;
	} else {
		strName = str;
	}
	cout<<"["<<index<<"] "<<strName;
	cout<<" - "<<strPrice<<endl;
}

//Menu Responsive Dots
void dotter(string str, float price) {
	string strPrice, strName;
	int i, dotCount, dotMax = 35, len;
	strPrice = "P" + tostr(price);
	len = strPrice.length();
	cout<<str;
	dotCount = dotMax - (str.length() + len);
	for (i =1; i <= dotCount; i++) {
		cout<<".";
	}
	cout<<strPrice<<endl;
}

//Returns Choose (x) and Displays List of chosen main ingredient
int getList(string main, int choose, vector<string> &itemList, vector<float> &itemPrice, vector<string> &itemChoice, vector<float> &itemChoicePrice, vector<int> &multiplier){
	int index, x = 1, q = 1;
	do {
		system("cls");
		cout<<"--- You chosed "<<main<<" ---"<<endl<<endl;
		cout<<"[0] Back"<<endl;
		cout<<" --------------------- "<<endl;
		for (index = 0; index < itemList.size(); index++) {
			cout<<"["<<index+1<<"] ";
			dotter(itemList[index], itemPrice[index]);
		}
		cout<<endl;
		if (x < 1 || x > itemList.size()) {
			cout<<"Enter 0 to "<<itemList.size()<<" only"<<endl;
		}
		cout<<"Enter the Number of your choice: ";
		x = getChoose(choose);
	} while (x < 0 || x > itemList.size());
	if (x != 0) {
		do {
			if (q < 1) {
				cout<<"You can't enter zero (0) or negative as a quantity"<<endl;
			}
			cout<<"Enter quantity: ";
			cin>>q;
			if (cin.fail()) {
				q = -1;
			}
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			if (q == 0) {
				system("cls");
			}
		} while (q < 1);
		if (find(itemChoice.begin(), itemChoice.end(), itemList[x-1]) != itemChoice.end()) { //check if choice already exist
			ptrdiff_t pos = find(itemChoice.begin(), itemChoice.end(), itemList[x-1]) - itemChoice.begin();
			multiplier[pos] += q;
		} else {
			itemChoice.push_back(itemList[x-1]);
			multiplier.push_back(q);
			itemChoicePrice.push_back(itemPrice[x-1]);
		}
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
