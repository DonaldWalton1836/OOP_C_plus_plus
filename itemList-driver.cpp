#include<iostream>
#include<string>
#include<iomanip>

#include "itemList.h"
using namespace std;

int main()
{
    bool finished = false;

    int counter = 0; 
    int l = 0;
    string itemName;
    double itemPrice;
    char letterChoice;
    double sum =0;
    int number;
    bool keepGoing = true;

 
    GroceryItem* GroceryList = new GroceryItem[3]; //This starts the grocery that points to an array of Items in the heap.


    while(keepGoing == true)
    {
        cout<<"A is to add an item"<<endl;
        cout<<"R is to remove and item"<<endl;
        cout<<"L is to list all the items in your cart"<<endl;
        cout<<"C is to checkout"<<endl;
        cin >> letterChoice;
        switch(letterChoice)
        {

            
            case 'A':
            case 'a':
                    //This is to add the item into the grocery list.
                    cout << "Enter the item you want to enter: "<<endl;
                    cin >> itemName;
                    cout<<"Enter the price for the item: "<<endl;
                    cin >> itemPrice;
                    GroceryList[counter] = GroceryItem(itemName, itemPrice);

                    
			counter++;
	
                    if(counter % 3 == 0)
                    {
                        GroceryItem * temp = new GroceryItem[counter+3]; //this is the first step

                        for(int i = 0; i < counter;i++) //This is the second step
                        {
                            temp[i] = GroceryList[i];
                        }

                        delete [] GroceryList; //This is the third step

                        GroceryList = temp;  //This is the fourth step
                    }

			
                    
                    break;
			
            case 'R':
            case 'r':
			if(keepGoing == true)
			{
                        GroceryItem * tempTwo =new GroceryItem[counter];
                        cout<<"Which item would you like to remove? choose a number from 0  to "<< counter - 1<<"."<<endl;

			cin >> number;
                        for(int i = 0; i < counter; i++)
                        {
                            if(i < number)
                            {
                                tempTwo[i]=GroceryList[i];
                            }
                            if(i > number)
                            {
                                tempTwo[i - 1] = GroceryList[i];
                            }
                            
                        } 
 
                        delete [] GroceryList;
                        GroceryList = tempTwo;
                        counter--;
			}
                        break;
                    

     
            case 'L':
            case 'l':
                    //This is to list the items of the current grocery list.
                    cout<<"Current Grocery List:"<<endl;
                    for(int i = 0; i < counter; i++)
                    {
                        //I need the inssertion operator overload to list then out.
                        cout <<GroceryList[i]<<endl;
                    }
                    break;
			
            case 'C':
            case 'c':
                    cout<<"Cashier: I hope you found everything okay today"<<endl;
                    keepGoing = false;
                    break;
            default:
                    cout<<"You have entered an invalid answer choice!"<<endl;

		

        }

	

    }

    for(int i = 0; i < counter;i++)
    {
        sum = sum + GroceryList[i].getPrice();
    }
        sum = (sum * 0.07) + sum;
	cout<<"your total is: "<<"$"<<sum<<endl;
    cout<<endl;
    cout<<"Thank you for shopping at Walmart. I hope you come again soon."<<endl;

    delete [] GroceryList;
    return 0;
}
