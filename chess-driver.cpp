#include<iostream>
#include "chess.h"

using namespace std;


int main()
{
    Queen q;
    Bishop b;
    Rook r;
    Knight k;

    char ans;
    int rounds = 1;

    int xValQueen, yValQueen;
    int xValBishop, yValBishop;
    int xValRook, yValRook;
    int xValKnight, yValKnight;


    cout <<"Welcome!"<<endl;

    do{
        //This is where I checked all the conditions for the Knight.
        cout<<"Enter the coordinates for the Knight: ";
        cin >> xValKnight;
        cin >> yValKnight;

        if((xValKnight == q.get_Queen_X()) && (yValKnight== q.get_Queen_Y()))
        {
          cout << "This is an invalid move! The Queen is at this location! " << endl;
        }
        else
        {
          if((xValKnight == k.get_Knight_X()) && (yValKnight == k.get_Knight_Y()))
          {
            cout << "This is an invalid move! The Knight is at this location!" << endl;
          }
          else
          {
            if((xValKnight == r.get_Rook_X()) && (yValKnight == r.get_Rook_Y()))
            {
              cout <<"This is an invalid move! The Rook is at this location!"<< endl;
            }
            else
            {
              if((xValKnight == b.get_Bishop_X()) && (yValKnight == b.get_Bishop_Y()))
              {
                cout <<"This is an invalid move! The Bishop is at this location"<< endl;
              }
              else
              {
                k.move(xValKnight, yValKnight);
              }
            }
          }
        }
        


        //This is where I checked all the conditions for the Rook.
        cout << "Enter the coodinates for the Rook: ";
        cin >> xValRook;
        cin >> yValRook;

        if(( xValRook == q.get_Queen_X()) && ( yValRook == q.get_Queen_Y()))
        {
          cout << "This is an invalid move! The Queen is at this location!" << endl;
        }
        else
        {
          if(( xValRook == k.get_Knight_X()) && (yValRook == k.get_Knight_Y()))
          {
            cout << "This is an invalid move! The Knight is atthis location!"<< endl;
          }
          else
          {
            if((xValRook == r.get_Rook_X()) && (yValRook == r.get_Rook_Y()))
            {
              cout <<"This is an invalid move! The Rook is at this location!" << endl;
            }
            else
            {
              if((xValRook == b.get_Bishop_X()) && (yValRook == b.get_Bishop_Y()))
              {
                cout <<"This is an invalid move! The Bishop is at this location!" << endl;
              }
              else
              {
                r.move(xValRook, yValRook);
              }
            }
          }
        }

      

        //This is where I checked all the conditions for the Bishop piece.
        cout << "Enter the coordniates for Bishop: ";
        cin >> xValBishop;
        cin >> yValBishop;

        if((xValBishop == q.get_Queen_X()) && (yValBishop == q.get_Queen_Y()))
        {
          cout << "This is an invalid move! The Queen is at this location!" << endl;
        }
        else
        {
          if((xValBishop == k.get_Knight_X()) && (yValBishop == k.get_Knight_Y()))
          {
            cout << "This is an invalid move! The Knight is at this location!"<< endl;
          }
          else
          {
            if((xValBishop == r.get_Rook_X()) && (yValBishop == r.get_Rook_Y()))
            {
              cout <<"This is an invalid move! The Rook is at this location! "<< endl;
            }
            else
            {
              if((xValBishop == b.get_Bishop_X()) && (yValBishop == b.get_Bishop_Y()))
              {
                cout <<"This is an invalid move! The Bishop is at this location!" << endl;
              }
              else
              {
                b.move( xValBishop, yValBishop);
              }
            }
          }
        }
        
        

        //This here will checked all the conditions for the queen piece.

        cout << "Enter the coordinates for the Queen: ";
        cin >> xValQueen;
        cin >> yValQueen;
        
        if((xValQueen == q.get_Queen_X()) && (yValQueen == q.get_Queen_Y()))
        {
          cout << "This is an invalid move! The Queen is at this location" << endl;
        }
        else
        {
          if((xValQueen == k.get_Knight_X()) && (yValQueen == k.get_Knight_Y()))
          {
            cout << "This is an invalid move! The Knight is at this location!"<< endl;
          }
          else
          {
            if((xValQueen == r.get_Rook_X()) && yValQueen == r.get_Rook_Y())
            {
              cout <<"This is an invalid move! The Rook is at this location!"<< endl;
            }
            else
            {
              if((xValQueen == b.get_Bishop_X() && yValQueen == b.get_Bishop_Y()))
              {
                cout <<"This is an invalid move! The Bishop is at this location!"<< endl;
              }
              else
              {
                q.move(xValQueen, yValQueen);
              }
            }
          }
        }




        cout << "These are the current locations of your pieces after round "<< rounds << ":" << endl;

        cout << "Knight: "<< "("<< k.get_Knight_X()<<","<< k.get_Knight_Y()<<")"<< endl;
        cout << "Rook: "<< "(" <<r.get_Rook_X()<<","<< r.get_Rook_Y()<< ")"<< endl;
        cout << "Bishop: "<< "(" << b.get_Bishop_X() <<","<<b.get_Bishop_Y()<<")"<<endl;
        cout << "Queen: "<< "("<<q.get_Queen_X()<<","<< q.get_Queen_Y()<<")"<<endl;

    rounds++;
    cout << "Do you want to continue the program? Enter 'Y' for yes or 'N' for No: ";
    cin >> ans;
  }while( ans == 'Y');
  
 cout <<"Thank you for playing the game! I hope you will play again."<< endl;
    

    
    
    


return 0;
}
