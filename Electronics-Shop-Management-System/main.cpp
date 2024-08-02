#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <cstring>
#include <string>
using namespace std;

////functions responsible to manage the functionality of products file.
void writeProducts();////this function writes the pre-defined Products into the Products file.
void printAllProducts();///this function displays all the Products that are available in the Shop.
void addNewProduct();////this function comes into action when we add the new stock ito the Shop.
void searchProduct();////this function is to search a particular product in the available stock.
void editProduct();////this function is resposible to edit the product.
void deleteProduct();////this function deletes the product from the Shop.

////functions responsible to manage the functionality of sales file.
void writeSales();///this function writes the pre-defined sales into the Sales file.
void printSales();///this function displays all the Sales in the Shop
void addNewSale();///this function comes into action when a sale of product is done.
void searchSales();///this function is responsible to search for a particular search.
void editSales();///this function is resposible to edit the sales.
void deleteSales();///this function is responsible to delete the sales.

int main() {
    cout << endl;
    cout << " ~:((==================================================================)):~ " << endl;
    cout << "       ~:((CFP PROJECT FOR THE ELECTRONICS SHOP MANAGEMENT SYSTEM)):~ " << endl;
    cout << endl;
    cout << "                   MALIK ELECTRONICS SHOP" << endl;
    cout << "             A NAME OF TRUST, SINCE 1980s, 24/7 SERVICE" << endl;
    cout << "                   Contact No. 042-37293945" << endl;
    cout << "                      FREE HOME DELIVERY" << endl;
    cout << " ~:((=================================================================)):~  " << endl;
    cout << endl;

    string correctPassword = "life is amazing";
    string enteredPassword;
    bool loggedIn = false;

    while (!loggedIn) {
        cout << "Enter the Password to Login In: ";
        getline(cin,enteredPassword );

        if (enteredPassword == correctPassword) {
	        loggedIn = true;
        	system("clear");
        	cout <<"Password entry was successful ..... " <<endl;
        	char choice;
        	while (true) {
        		cout << endl;
        		cout << "  ~:((==============================================================)):~  " << endl;
        		cout << "  Please, select the required option from below: " << endl;
        		cout << "                   E\t: To Exit the Program." << endl;
        		cout << "                   P\t: To Enter into the Products File." << endl;
        		cout << "                   S\t: To Enter into the Sales File." << endl;
        		cout << "  ~:((=============================================================)):~ " << endl;
        		cin >> choice;
        		system("clear");

        		if (choice == 'P' || choice == 'p') {
        			int option1;
        			while (true) {
        				cout << endl;
        				cout << "  ~:((==============================================================)):~  " << endl;
        				cout << "  Please, select the required option from below: " << endl;
        				cout << "                   0\t: To Return to the Main Menu." << endl;
        				cout << "                   1\t: To Write Products in the File." << endl;
        				cout << "                   2\t: To Display All Available Products." << endl;
        				cout << "                   3\t: To Add New Products." << endl;
        				cout << "                   4\t: To Search a Product." << endl;
        				cout << "                   5\t: To Edit a Product." << endl;
        				cout << "                   6\t: To Delete a Product." << endl;
        				cout << "  ~:((=============================================================)):~ " << endl;
        				cin >> option1;
        				system("clear");

        				if (option1 == 1) {
        					writeProducts();
        				}
        				else if (option1 == 2) {
        					printAllProducts();
        				}
        				else if (option1 == 3) {
        					addNewProduct();
        				}
        				else if (option1 == 4) {
        					searchProduct();
        				}
        				else if (option1 == 5) {
        					editProduct();
        				}
        				else if (option1 == 6) {
        					deleteProduct();
        				}
        				else if (option1 == 0) {
        					cout << "Returning to the Previous Menu ...... " << endl;
        					break;
        				}
        				else {
        					cout << "Invalid input. Try again." << endl;
        				}
        			}
        		}
        		else if (choice == 'S' || choice == 's') {
        			int option2;
        			while (true) {
        				cout << endl;
        				cout << "  ~:((==============================================================)):~  " << endl;
        				cout << "  Please, select the required option from below: " << endl;
        				cout << "                   0\t: To Return to the Main Menu." << endl;
        				cout << "                   1\t: To Write Sales in the File." << endl;
        				cout << "                   2\t: To Display All Sales." << endl;
        				cout << "                   3\t: To Add New Sale." << endl;
        				cout << "                   4\t: To Search for a Sale." << endl;
        				cout << "                   5\t: To Edit a Sale." << endl;
        				cout << "                   6\t: To Delete a Sale." << endl;
        				cout << "  ~:((=============================================================)):~ " << endl;
        				cin >> option2;
        				system("clear");

        				if (option2 == 1) {
        					writeSales();
        				}
        				else if (option2 == 2) {
        					printSales();
        				}
        				else if (option2 == 3) {
        					addNewSale();
        				}
        				else if (option2 == 4) {
        					 searchSales();
        				}
        				else if (option2 == 5) {
        					 editSales();
        				}
        				else if (option2 == 6) {
        					//deleteSales();
        				}
        				else if (option2 == 0) {
        					cout << "Returning to the Previous Menu ...... " << endl;
        					break;
        				}
        				else {
        					cout << "Invalid input. Try again." << endl;
        				}
        			}
        		}
        		else if (choice == 'E' || choice == 'e') {
        			cout << "Exiting the System ..... " << endl;
        			return 0;
        		}
        		else {
        			cout << "Invalid input. Try again." << endl;
        		}
        	}
        }
        else {
        	cout << "Incorrect password. Try again." << endl;
        }
    }
}

void writeProducts() {
	ofstream f1;
	f1.open("Products.txt");

	f1 << setw(8) << left << "Sr No.";
	f1 << setw(20) << left << "Product Name";
	f1 << setw(8) << left << "Price";
	f1 << setw(12) << left << "Brand";
	f1 << setw(8) << left << "Stock";
	f1 << setw(12) << left << "Warranty";
	f1 << setw(11) << left << "Discount(%)" << endl;

	f1 << setw(8) << left << "1";
	f1 << setw(20) << left << "Refrigerator";
	f1 << setw(8) << left << "50000";
	f1 << setw(12) << left << "DAWLANCE";
	f1 << setw(8) << left << "12";
	f1 << setw(12) << left << "2 years";
	f1 << setw(11) << left << "15" << endl;

	f1 << setw(8) << left << "2";
	f1 << setw(20) << left << "Air Conditioner";
	f1 << setw(8) << left << "80000";
	f1 << setw(12) << left << "GREE";
	f1 << setw(8) << left << "10";
	f1 << setw(12) << left << "1 years";
	f1 << setw(11) << left << "20" << endl;

	f1 << setw(8) << left << "3";
	f1 << setw(20) << left << "Microwave Oven";
	f1 << setw(8) << left << "15000";
	f1 << setw(12) << left << "WAVES";
	f1 << setw(8) << left << "15";
	f1 << setw(12) << left << "3 years";
	f1 << setw(11) << left << "25" << endl;

	f1 << setw(8) << left << "4";
	f1 << setw(20) << left << "Washing Machine";
	f1 << setw(8) << left << "25000";
	f1 << setw(12) << left << "HAIER";
	f1 << setw(8) << left << "20";
	f1 << setw(12) << left << "2 years";
	f1 << setw(11) << left << "15" << endl;

	f1 << setw(8) << left << "5";
	f1 << setw(20) << left << "Dryer Machine";
	f1 << setw(8) << left << "15000";
	f1 << setw(12) << left << "HAIER";
	f1 << setw(8) << left << "15";
	f1 << setw(12) << left << "3 years";
	f1 << setw(11) << left << "20" << endl;

	f1 << setw(8) << left << "6";
	f1 << setw(20) << left << "Television";
	f1 << setw(8) << left << "15000";
	f1 << setw(12) << left << "NOBEL";
	f1 << setw(8) << left << "30";
	f1 << setw(12) << left << "5 years";
	f1 << setw(11) << left << "12" << endl;

	f1 << setw(8) << left << "7";
	f1 << setw(20) << left << "Air Cooler";
	f1 << setw(8) << left << "20000";
	f1 << setw(12) << left << "NATIONAL";
	f1 << setw(8) << left << "12";
	f1 << setw(12) << left << "2 years";
	f1 << setw(11) << left << "15" << endl;

	f1 << setw(8) << left << "8";
	f1 << setw(20) << left << "Ceiling Fan";
	f1 << setw(8) << left << "8000";
	f1 << setw(12) << left << "NATIONAL";
	f1 << setw(8) << left << "25";
	f1 << setw(12) << left << "5 years";
	f1 << setw(11) << left << "20" << endl;

	f1 << setw(8) << left << "9";
	f1 << setw(20) << left << "Electric Fan";
	f1 << setw(8) << left << "5000";
	f1 << setw(12) << left << "NATIONAL";
	f1 << setw(8) << left << "40";
	f1 << setw(12) << left << "5 years";
	f1 << setw(11) << left << "34" << endl;

	f1 << setw(8) << left << "10";
	f1 << setw(20) << left << "Iron";
	f1 << setw(8) << left << "8000";
	f1 << setw(12) << left << "ORIENT";
	f1 << setw(8) << left << "50";
	f1 << setw(12) << left << "2 years";
	f1 << setw(11) << left << "15" << endl;

	f1 << setw(8) << left << "11";
	f1 << setw(20) << left << "Toaster";
	f1 << setw(8) << left << "7000";
	f1 << setw(12) << left << "WAVES";
	f1 << setw(8) << left << "30";
	f1 << setw(12) << left << "4 years";
	f1 << setw(11) << left << "30" << endl;

	f1 << setw(8) << left << "12";
	f1 << setw(20) << left << "Dish Washer";
	f1 << setw(8) << left << "30000";
	f1 << setw(12) << left << "PEL";
	f1 << setw(8) << left << "15";
	f1 << setw(12) << left << "2 years";
	f1 << setw(11) << left << "12" << endl;

	f1 << setw(8) << left << "13";
	f1 << setw(20) << left << "Roti Maker";
	f1 << setw(8) << left << "5000";
	f1 << setw(12) << left << "DAWLANCE";
	f1 << setw(8) << left << "20";
	f1 << setw(12) << left << "3 years";
	f1 << setw(11) << left << "10" << endl;

	f1 << setw(8) << left << "14";
	f1 << setw(20) << left << "Coffee Machine";
	f1 << setw(8) << left << "10000";
	f1 << setw(12) << left << "PEL";
	f1 << setw(8) << left << "12";
	f1 << setw(12) << left << "2 years";
	f1 << setw(11) << left << "15" << endl;

	f1 << setw(8) << left << "15";
	f1 << setw(20) << left << "Blender";
	f1 << setw(8) << left << "6000";
	f1 << setw(12) << left << "NATIONAL";
	f1 << setw(8) << left << "25";
	f1 << setw(12) << left << "4 years";
	f1 << setw(11) << left << "20" << endl;

	f1 << setw(8) << left << "16";
	f1 << setw(20) << left << "Charger";
	f1 << setw(8) << left << "5500";
	f1 << setw(12) << left << "HUAWEI";
	f1 << setw(8) << left << "20";
	f1 << setw(12) << left << "1 years";
	f1 << setw(11) << left << "10" << endl;

	f1 << setw(8) << left << "17";
	f1 << setw(20) << left << "Hair Dryer";
	f1 << setw(8) << left << "4500";
	f1 << setw(12) << left << "DELL";
	f1 << setw(8) << left << "10";
	f1 << setw(12) << left << "2 years";
	f1 << setw(11) << left << "30" << endl;

	f1 << setw(8) << left << "18";
	f1 << setw(20) << left << "Electric Kettle";
	f1 << setw(8) << left << "6500";
	f1 << setw(12) << left << "IZONE";
	f1 << setw(8) << left << "5";
	f1 << setw(12) << left << "2 years";
	f1 << setw(11) << left << "10" << endl;

	f1 << setw(8) << left << "19";
	f1 << setw(20) << left << "Headphones";
	f1 << setw(8) << left << "1500";
	f1 << setw(12) << left << "INFINIX";
	f1 << setw(8) << left << "12";
	f1 << setw(12) << left << "1 years";
	f1 << setw(11) << left << "13" << endl;

	f1 << setw(8) << left << "20";
	f1 << setw(20) << left << "Gaming Console";
	f1 << setw(8) << left << "4000";
	f1 << setw(12) << left << "SAMSUNG";
	f1 << setw(8) << left << "9";
	f1 << setw(12) << left << "2 years";
	f1 << setw(11) << left << "15" << endl;

	f1 << setw(8) << left << "21";
	f1 << setw(20) << left << "Soundbar";
	f1 << setw(8) << left << "9000";
	f1 << setw(12) << left << "SAMSUNG";
	f1 << setw(8) << left << "8";
	f1 << setw(12) << left << "1 years";
	f1 << setw(11) << left << "11" << endl;

	f1 << setw(8) << left << "22";
	f1 << setw(20) << left << "Electric Toothbrush";
	f1 << setw(8) << left << "20000";
	f1 << setw(12) << left << "NATIONAL";
	f1 << setw(8) << left << "6";
	f1 << setw(12) << left << "1 years";
	f1 << setw(11) << left << "10" << endl;

	f1 << setw(8) << left << "23";
	f1 << setw(20) << left << "Power Bank";
	f1 << setw(8) << left << "4000";
	f1 << setw(12) << left << "PELL";
	f1 << setw(8) << left << "4";
	f1 << setw(12) << left << "3 years";
	f1 << setw(11) << left << "25" << endl;

	f1 << setw(8) << left << "24";
	f1 << setw(20) << left << "Projector";
	f1 << setw(8) << left << "8000";
	f1 << setw(12) << left << "SAMSUNG";
	f1 << setw(8) << left << "6";
	f1 << setw(12) << left << "1 years";
	f1 << setw(11) << left << "7" << endl;

	f1 << setw(8) << left << "25";
	f1 << setw(20) << left << "Drone";
	f1 << setw(8) << left << "30000";
	f1 << setw(12) << left << "APPLE";
	f1 << setw(8) << left << "5";
	f1 << setw(12) << left << "2 years";
	f1 << setw(11) << left << "12" << endl;

	f1 << setw(8) << left << "26";
	f1 << setw(20) << left << "Smart Light Bulb";
	f1 << setw(8) << left << "50000";
	f1 << setw(12) << left << "SAMSUNG";
	f1 << setw(8) << left << "4";
	f1 << setw(12) << left << "2 years";
	f1 << setw(11) << left << "5" << endl;

	f1 << setw(8) << left << "27";
	f1 << setw(20) << left << "Security Camera";
	f1 << setw(8) << left << "10000";
	f1 << setw(12) << left << "KIA";
	f1 << setw(8) << left << "5";
	f1 << setw(12) << left << "2 years";
	f1 << setw(11) << left << "12" << endl;

	f1 << setw(8) << left << "28";
	f1 << setw(20) << left << "Electric Scooter";
	f1 << setw(8) << left << "40000";
	f1 << setw(12) << left << "HONDA";
	f1 << setw(8) << left << "6";
	f1 << setw(12) << left << "2 years";
	f1 << setw(11) << left << "15" << endl;

	f1 << setw(8) << left << "29";
	f1 << setw(20) << left << "Smart Lock";
	f1 << setw(8) << left << "6000";
	f1 << setw(12) << left << "SUPER";
	f1 << setw(8) << left << "10";
	f1 << setw(12) << left << "2 years";
	f1 << setw(11) << left << "15" << endl;

	f1 << setw(8) << left << "30";
	f1 << setw(20) << left << "Electric Shaver";
	f1 << setw(8) << left << "7000";
	f1 << setw(12) << left << "GILLETTE";
	f1 << setw(8) << left << "12";
	f1 << setw(12) << left << "3 years";
	f1 << setw(11) << left << "20" << endl;

	f1.close();
	cout <<"Products written successfully ..... "<<endl;
}

void writeSales() {
	ofstream f2;
	f2.open("Sales.txt");
	f2 << setw(8) << left << "Sr No." ;
	f2 << setw(20) << left << "Product Name" ;
	f2 << setw(8) << left << "Price" ;
	f2 << setw(12) << left << "Brand" ;
	f2 << setw(8) << left << "Stock";
	f2 << setw(12) << left << "Warranty";
	f2 << setw(11) << left << "Discount(%)" << endl;

	f2 << setw(8) << left << "1" ;
	f2 << setw(20) << left << "Refrigerator" ;
	f2 << setw(8) << left << "50000";
	f2 << setw(12) << left << "DAWLANCE" ;
	f2 << setw(8) << left << "1" ;
	f2 << setw(12) << left << "2 years";
	f2 << setw(11) << left << "15" << endl;

	f2 << setw(8) << left << "2";
	f2 << setw(20) << left << "Air Conditioner" ;
	f2 << setw(8) << left << "80000" ;
	f2 << setw(12) << left << "GREE";
	f2 << setw(8) << left << "1" ;
	f2 << setw(12) << left << "1 years";
	f2 << setw(11) << left << "20" << endl;

	f2 << setw(8) << left << "3";
	f2 << setw(20) << left << "Washing Machine" ;
	f2 << setw(8) << left << "25000";
	f2 << setw(12) << left << "HAIER" ;
	f2 << setw(8) << left << "1" ;
	f2 << setw(12) << left << "2 years";
	f2 << setw(11) << left << "15" << endl;

	f2 << setw(8) << left << "4";
	f2 << setw(20) << left << "Dryer Machine" ;
	f2 << setw(8) << left << "15000" ;
	f2 << setw(12) << left << "HAIER";
	f2 << setw(8) << left << "1";
	f2 << setw(12) << left << "3 years";
	f2 << setw(11) << left << "20" << endl;

	f2 << setw(8) << left << "5";
	f2 << setw(20) << left << "Ceiling Fan";
	f2 << setw(8) << left << "8000";
	f2 << setw(12) << left << "NATIONAL";
	f2 << setw(8) << left << "1";
	f2 << setw(12) << left << "5 years";
	f2 << setw(11) << left << "20" << endl;

	f2 << setw(8) << left << "6";
	f2 << setw(20) << left << "Electric Fan";
	f2 << setw(8) << left << "5000";
	f2 << setw(12) << left << "NATIONAL" ;
	f2 << setw(8) << left << "1";
	f2 << setw(12) << left << "5 years";
	f2 << setw(11) << left << "34" << endl;

	f2 << setw(8) << left << "7";
	f2 << setw(20) << left << "Iron";
	f2 << setw(8) << left << "8000";
	f2 << setw(12) << left << "ORIENT";
	f2 << setw(8) << left << "1";
	f2 << setw(12) << left << "2 years";
	f2 << setw(11) << left << "15" << endl;

	f2 << setw(8) << left << "8";
	f2 << setw(20) << left << "Toaster";
	f2 << setw(8) << left << "7000";
	f2 << setw(12) << left << "WAVES";
	f2 << setw(8) << left << "1";
	f2 << setw(12) << left << "4 years";
	f2 << setw(11) << left << "30" << endl;

	f2 << setw(8) << left << "9";
	f2 << setw(20) << left << "Dish Washer";
	f2 << setw(8) << left << "30000";
	f2 << setw(12) << left << "PEL";
	f2 << setw(8) << left << "1" ;
	f2 << setw(12) << left << "2 years";
	f2 << setw(11) << left << "12" << endl;

	f2 << setw(8) << left << "10";
	f2 << setw(20) << left << "Roti Maker";
	f2 << setw(8) << left << "5000";
	f2 << setw(12) << left << "DAWLANCE";
	f2 << setw(8) << left << "1";
	f2 << setw(12) << left << "3 years";
	f2 << setw(11) << left << "10" << endl;

	f2 << setw(8) << left << "11";
	f2 << setw(20) << left << "Power Bank";
	f2 << setw(8) << left << "6000";
	f2 << setw(12) << left << "INFINIX";
	f2 << setw(8) << left << "1";
	f2 << setw(12) << left << "2 years";
	f2 << setw(11) << left << "10" << endl;

	f2 << setw(8) << left << "12";
	f2 << setw(20) << left << "Fitness Tracker";
	f2 << setw(8) << left << "5000";
	f2 << setw(12) << left << "APPLE";
	f2 << setw(8) << left << "2";
	f2 << setw(12) << left << "1 years";
	f2 << setw(11) << left << "10" << endl;

	f2 << setw(8) << left << "13";
	f2 << setw(20) << left << "Smart Thermostat";
	f2 << setw(8) << left << "7000";
	f2 << setw(12) << left << "DAWLANCE";
	f2 << setw(8) << left << "1";
	f2 << setw(12) << left << "2 years";
	f2 << setw(11) << left << "8" << endl;

	f2 << setw(8) << left << "14";
	f2 << setw(20) << left << "External HDD";
	f2 << setw(8) << left << "5500";
	f2 << setw(12) << left << "GREE";
	f2 << setw(8) << left << "1";
	f2 << setw(12) << left << "2 years";
	f2 << setw(11) << left << "12" << endl;

	f2 << setw(8) << left << "15";
	f2 << setw(20) << left << "DVD Player";
	f2 << setw(8) << left << "7000";
	f2 << setw(12) << left << "SUPER ASIA";
	f2 << setw(8) << left << "1";
	f2 << setw(12) << left << "2 years";
	f2 << setw(11) << left << "10" << endl;

	f2 << setw(8) << left << "16";
	f2 << setw(20) << left << "Microwave Oven";
	f2 << setw(8) << left << "12000";
	f2 << setw(12) << left << "LG";
	f2 << setw(8) << left << "1";
	f2 << setw(12) << left << "2 years";
	f2 << setw(11) << left << "15" << endl;

	f2 << setw(8) << left << "17";
	f2 << setw(20) << left << "Electric Kettle";
	f2 << setw(8) << left << "3000";
	f2 << setw(12) << left << "PHILIPS";
	f2 << setw(8) << left << "1";
	f2 << setw(12) << left << "1 years";
	f2 << setw(11) << left << "10" << endl;

	f2 << setw(8) << left << "18";
	f2 << setw(20) << left << "Smartphone";
	f2 << setw(8) << left << "50000";
	f2 << setw(12) << left << "SAMSUNG";
	f2 << setw(8) << left << "1";
	f2 << setw(12) << left << "1 years";
	f2 << setw(11) << left << "10" << endl;

	f2 << setw(8) << left << "19";
	f2 << setw(20) << left << "Tablet";
	f2 << setw(8) << left << "40000";
	f2 << setw(12) << left << "LENOVO";
	f2 << setw(8) << left << "1";
	f2 << setw(12) << left << "1 years";
	f2 << setw(11) << left << "12" << endl;

	f2 << setw(8) << left << "20";
	f2 << setw(20) << left << "Smart Watch";
	f2 << setw(8) << left << "15000";
	f2 << setw(12) << left << "APPLE";
	f2 << setw(8) << left << "1";
	f2 << setw(12) << left << "1 years";
	f2 << setw(11) << left << "8" << endl;

	f2.close();
	cout << "Sales written successfully ..... " <<endl;
}

void printAllProducts()
{
	ifstream fin("Products.txt");
	if (!fin) {
		cout << "\nUnable to open file because no pre-defined Products ... " << endl;
		return;
	}
	char Data[100];
	while (!fin.eof())
	{
		fin.getline(Data, 81);
		cout << Data << endl;
	}
	fin.close();
}

void printSales() {
	ifstream fin("Sales.txt");
	if (!fin) {
		cout << "\nUnable to open file because no pre-defined Sales ... " << endl;
		return;
	}
	char Data[100];
	while (!fin.eof())
	{
		fin.getline(Data, 81);
		cout << Data << endl;
	}
	fin.close();
}

void addNewProduct()
{
	printAllProducts();
	char Name[20], Warranty[12], Brand[12];
	int Price, SrN, Stock, Discount;
	cout << " ~:((=================================================================)):~  " << endl;
	cout << "Please, Enter the Serial No of the Product: ";
	cin >> SrN;

	cout << "Please, Enter the Name of the New Product: ";
	cin.ignore();
	cin.getline(Name, 20);

	cout << "Please, Enter the Price of the Product: ";
	cin >> Price;

	cout << "Please, Enter the Brand of Product: ";
	cin.ignore();
	cin.getline(Brand, 12);

	cout << "Please, Enter the Stock of the Product: ";
	cin >> Stock;

	cout << "Please, Enter the Warranty of the Product: ";
	cin.ignore();
	cin.getline(Warranty, 12);

	cout << "Please, Enter the Discount for the Product: ";
	cin >> Discount;
	cout << " ~:((=================================================================)):~  " << endl;

	ofstream f("Products.txt", ios::out | ios::app);

	f << setw(8) << left << SrN
	  << setw(20) << left << Name
	  << setw(8) << left << Price
	  << setw(12) << left << Brand
	  << setw(8) << left << Stock
	  << setw(12) << left << Warranty
	  << setw(11) << left << Discount << endl;
	cout << "Product Added Successfully :) " << endl;
	f.close();
}

void addNewSale() {
	printSales();
	char Name[20], Warranty[12], Brand[12];
	int Price, SrN, Stock, Discount;
	cout << " ~:((=================================================================)):~  " << endl;
	cout << "Please, Enter the Serial No. of Product: ";
	cin >> SrN;

	cout << "Please, Enter the Name of Product: ";
	cin.ignore();
	cin.getline(Name, 20);

	cout << "Please, Enter the Price of Product: ";
	cin >> Price;

	cout << "Please, Enter the Brand of Product: ";
	cin.ignore();
	cin.getline(Brand, 12);

	cout << "Please, Enter the Quantity of Product: ";
	cin >> Stock;

	cout << "Please, Enter the Warranty of Product: ";
	cin.ignore();
	cin.getline(Warranty, 12);

	cout << "Please, Enter the Discount for Product: ";
	cin >> Discount;
	cout << " ~:((=================================================================)):~  " << endl;

	ofstream f("Sales.txt", ios::out | ios::app);

	f << setw(8) << left << SrN
	  << setw(20) << left << Name
	  << setw(8) << left << Price
	  << setw(12) << left << Brand
	  << setw(8) << left << Stock
	  << setw(12) << left << Warranty
	  << setw(11) << left << Discount << endl;
	cout << "Sale Added Successfully :) " << endl;
	f.close();
}

void searchProduct()
{
	printAllProducts();
	char searchstring[20];
	cout << " ~:((=================================================================)):~  " << endl;
	cout << "\nPlease, Enter the name of the Product to be Searched: ";
	cin.ignore();
	cin.getline(searchstring, 20);
	cout << "\n ~:((=================================================================)):~  " << endl;

	ifstream fin("Products.txt");
	if (!fin) {
		cout << "Unable to open file!" << endl;
		return;
	}

	char Data[100];
	int count = 0;
	while (!fin.eof())
	{
		fin.getline(Data, 82);
		if (strncmp(&Data[8], searchstring, strlen(searchstring)) == 0)
		{
			cout << "\n" << Data << endl;
			count++;
		}
	}

	fin.close();
	if (count == 0)
	{
		cout << "\nOops, No Record Found ...... " << endl;
	}
	else
	{
		cout << "\nYess, the Record is found ... " <<  endl;
	}
}

void searchSales() {
	printSales();
	char searchstring[20];
	cout << " ~:((=================================================================)):~  " << endl;
	cout << "\nPlease, Enter the name of the product to be Searched: ";
	cin.ignore();
	cin.getline(searchstring, 20);
	cout << "\n ~:((=================================================================)):~  " << endl;

	ifstream fin("Sales.txt");
	if (!fin) {
		cout << "Unable to open file!" << endl;
		return;
	}

	char Data[100];
	int count = 0;
	while (!fin.eof())
	{
		fin.getline(Data, 82);
		if (strncmp(&Data[8], searchstring, strlen(searchstring)) == 0)
		{
			cout << "\n" << Data << endl;
			count++;
		}
	}

	fin.close();
	if (count == 0)
	{
		cout << "\nOops, No Record Found ...... " << endl;
	}
	else
	{
		cout << "\nYess, the Record is found ... " <<  endl;
	}
}

void editProduct() {
    printAllProducts();
    int SrN, Price, Stock, Discount;
    char Name[20], Warranty[12], Brand[12];

    cout << " ~:((=================================================================)):~  " << endl;
    cout << "Please, Enter the Serial Number of the Product to be Edited: ";
    cin >> SrN;

    cout << "Please, Enter the Name for the New Product: ";
    cin.ignore();
    cin.getline(Name, 20);

    cout << "Please, Enter the Price of the New Product: ";
    cin >> Price;

    cout << "Please, Enter the Brand of the New Product: ";
    cin.ignore();
    cin.getline(Brand, 12);

    cout << "Please, Enter the Stock of the New Product: ";
    cin >> Stock;

    cout << "Please, Enter the Warranty of the New Product: ";
    cin.ignore();
    cin.getline(Warranty, 12);

    cout << "Please, Enter the Discount of the New Product: ";
    cin >> Discount;
    cout << " ~:((=================================================================)):~  " << endl;

    ifstream inFile("Products.txt");
    ofstream outFile("temp.txt");

    if (!inFile || !outFile) {
        cout << "File could not be opened!" << endl;
        return;
    }

    string line;
    bool found = false;
    while (getline(inFile, line)) {
        istringstream iss(line);
        int currentSrN;
        iss >> currentSrN;

        if (currentSrN == SrN) {
            outFile << setw(8) << left << SrN
                    << setw(20) << left << Name
                    << setw(8) << left << Price
                    << setw(12) << left << Brand
                    << setw(8) << left << Stock
                    << setw(12) << left << Warranty
                    << setw(11) << left << Discount << endl;
            found = true;
        } else {
            outFile << line << endl;
        }
    }

    inFile.close();
    outFile.close();

    if (found) {
        remove("Products.txt");
        rename("temp.txt", "Products.txt");
        cout << "Product Edited successfully :) " << endl;
    } else {
        cout << "Product with Serial Number " << SrN << " not found." << endl;
        remove("temp.txt");
    }
}

void editSales() {
	printSales();
    int SrN, Price, Stock, Discount;
    char Name[20], Warranty[12], Brand[12];

    cout << " ~:((=================================================================)):~  " << endl;
    cout << "\nPlease, Enter the Serial Number of the Sale to be Edited: ";
    cin >> SrN;

    cout << "Please, Enter the Name for the New Product: ";
    cin.ignore();
    cin.getline(Name, 20);

    cout << "Please, Enter the Price of the New Product: ";
    cin >> Price;

    cout << "Please, Enter the Brand of the New Product: ";
    cin.ignore();
    cin.getline(Brand, 12);

    cout << "Please, Enter the Stock of the New Product: ";
    cin >> Stock;

    cout << "Please, Enter the Warranty of the New Product: ";
    cin.ignore();
    cin.getline(Warranty, 12);

    cout << "Please, Enter the Discount of the New Product: ";
    cin >> Discount;
    cout << " ~:((=================================================================)):~  " << endl;

    ifstream inFile("Sales.txt");
    ofstream outFile("temp.txt");

    if (!inFile || !outFile) {
        cout << "File could not be opened!" << endl;
        return;
    }

    string line;
    bool found = false;
    while (getline(inFile, line)) {
        istringstream iss(line);
        int currentSrN;
        iss >> currentSrN;

        if (currentSrN == SrN) {
            outFile << setw(8) << left << SrN
                    << setw(20) << left << Name
                    << setw(8) << left << Price
                    << setw(12) << left << Brand
                    << setw(8) << left << Stock
                    << setw(12) << left << Warranty
                    << setw(11) << left << Discount << endl;
            found = true;
        } else {
            outFile << line << endl;
        }
    }

    inFile.close();
    outFile.close();

    if (found) {
        remove("Sales.txt");
        rename("temp.txt", "Sales.txt");
        cout << "Sale Edited successfully :) " << endl;
    } else {
        cout << "Sale with Serial Number " << SrN << " not found." << endl;
        remove("temp.txt");
    }
}

void deleteProduct() {
	printAllProducts();
	ifstream inFile("Products.txt");
	ofstream outFile("temp.txt");

	int SrN;
	cout << " ~:((=================================================================)):~  " << endl;
	cout << "\nPlease, Enter the Serial Number of the Product to be deleted: ";
	cin >> SrN;
	cout << "\n ~:((=================================================================)):~  " << endl;

	if (!inFile || !outFile) {
		cout << "File could not be opened!" << endl;
		return;
	}

	string line;
	bool found = false;

	while (getline(inFile, line)) {
		istringstream iss(line);
		int currentSrN;
		iss >> currentSrN;

		if (currentSrN != SrN) {
			outFile << line << endl;
		} else {
			found = true;
		}
	}

	inFile.close();
	outFile.close();

	if (found) {
		remove("Products.txt");
		rename("temp.txt", "Products.txt");
		cout << "\nProduct Deleted Successfully :)" << endl;
	} else {
		cout << "\nProduct with Serial Number " << SrN << " not found." << endl;
		remove("temp.txt");
	}
}

void deleteSales() {
	printSales();
	ifstream inFile("Sales.txt");
	ofstream outFile("temp.txt");

	int SrN;
	cout << " ~:((=================================================================)):~  " << endl;
	cout << "\nPlease, Enter the Serial Number of the Sale to be deleted: ";
	cin >> SrN;
	cout << "\n ~:((=================================================================)):~  " << endl;

	if (!inFile || !outFile) {
		cout << "File could not be opened!" << endl;
		return;
	}

	string line;
	bool found = false;

	while (getline(inFile, line)) {
		istringstream iss(line);
		int currentSrN;
		iss >> currentSrN;

		if (currentSrN != SrN) {
			outFile << line << endl;
		} else {
			found = true;
		}
	}

	inFile.close();
	outFile.close();

	if (found) {
		remove("Sales.txt");
		rename("temp.txt", "Sales.txt");
		cout << "\nSale Deleted Successfully :)" << endl;
	} else {
		cout << "\nSale with Serial Number " << SrN << " not found." << endl;
		remove("temp.txt");
	}
}