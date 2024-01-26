#include<iostream>
#include<cmath>
#include "chess.h"

using namespace std;

Queen::Queen()//Default Constructor for Queen
{
     x = 6;
     y = 0;
}

int Queen::get_Queen_Y() //Structure: type class :: function
{
     return y;
}

int Queen::get_Queen_X()
{
     return x;
}

void Queen::move(int newXQueen, int newYQueen) //This Will print out the statement for the queen.
{
   if((newXQueen >= 0 )&& (newXQueen <= 9) && (newYQueen >= 0 ) && (newYQueen <= 9))
   {
        
          x = newXQueen;
          y = newYQueen;


   }
   else
   {
        cout <<"This is an invalid move!!!!!"<< endl;

   }
}



Bishop::Bishop()//Default Constructor for Bishop
{
     x = 5;
     y = 0;
}

void Bishop::move(int newXBishop , int newYBishop)
{
     if(((newYBishop - y) / (newXBishop - x) == 1) || ((newYBishop - y) / (newXBishop - x) == -1) && (newXBishop >= 0 ) && (newXBishop <= 9) && (newYBishop >= 0 ) && (newYBishop <= 9))
     {
          x = newXBishop;
          y = newYBishop;
     }
     else
     {
          cout <<"This is an invalid move!!!!!"<< endl;
     }
}

int Bishop::get_Bishop_X()
{
     return x;
}

int Bishop::get_Bishop_Y()
{
     return y;
}






Rook::Rook()//Default Constructor for Rook
{
     x = 4;
     y = 0;
}

void Rook::move(int newXRook, int newYRook)
{
    if((newXRook == x ) || (newYRook == y) && (newXRook >= 0) &&(newXRook <= 9) && (newYRook >= 0) && (newYRook <= 9))
    {
          x = newXRook;
          y = newYRook;
    }
    else
    {
          cout << "This is an invalid move!!!!!" << endl;
    }
}

int Rook::get_Rook_X()
{
     return x;
}

int Rook::get_Rook_Y()
{
     return y;
}


Knight::Knight()//Default Constructor for Knight
{
     x = 3;
     y = 0;
}

void Knight::move(int newXKnight, int newYKnight)
{
     if((x - newXKnight == 2) || (x - newXKnight == - 2) && (y - newYKnight == 1) || (y - newYKnight == -1) && (newXKnight >= 0) &&(newXKnight <= 9) && (newYKnight >= 0) && (newYKnight <= 9))
     {
               x = newXKnight;
               y = newYKnight;
     }
     else
     {
          cout <<"This is an invalid move!!!!!"<<endl;
     }
}
int Knight::get_Knight_X()
{
     return x;
}

int Knight::get_Knight_Y()
{
     return y;
}
