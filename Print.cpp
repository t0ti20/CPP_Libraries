/*******************************************************************
 *  FILE DESCRIPTION
-----------------------
 *  Author: Khaled El-Sayed @t0ti20
 *  File: ./Print.cpp
 *  Date: November 30, 2023
 *  Description: This Is Default Test File For CPP Generator
 *  Class Name: Print
 *  (C) 2023 "@t0ti20". All rights reserved.
*******************************************************************/
/*****************************************
-----------     INCLUDES     -------------
*****************************************/
#include "Print.hpp"
/*****************************************
----------    GLOBAL DATA     ------------
*****************************************/
namespace print
{
     using namespace std;
     Print::Print()
     {    
          for(size_t Counter=0;Counter<11;Counter++)
          {
               cout << Welcome_Message << endl;
          }
     }
     Print::~Print()
     {
          cout << "Goodbye" << endl;
     }
}
/********************************************************************
 *  END OF FILE:  ./Print.cpp
********************************************************************/
