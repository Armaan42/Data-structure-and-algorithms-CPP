// Question: Write a program that takes the cost price and selling price of a product as input and 
// determines whether the seller has made a profit, incurred a loss, or neither. 
// The program should then output the amount of profit or loss.

#include<iostream>
using namespace std;

int main(){

    double cost_price, selling_price;
    cout << "Enter the cost price of the product: ";
    cin >> cost_price;

    cout << "Enter the selling price of the product: ";
    cin >> selling_price;

    if (cost_price > selling_price){
        cout << "The seller has incurred a loss of: " << cost_price - selling_price << endl;
    }else if (cost_price < selling_price){
        cout << "The seller has made a profit of: " << selling_price - cost_price << endl;
    }else{
        cout << "The seller has not made any profit or loss." << endl;
    }
    
    return 0;


}