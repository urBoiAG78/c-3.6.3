/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: agonzalez
 *
 * Created on September 15, 2017, 12:59 PM
 */

#include <iostream>

using namespace std;
 
// Insert your function here
void increment(int &var)
{
    var++;
   
}
void increment(int &var, int expression)
{
    var = var + expression;
    
}
int main(void) {
int var = 0;

for(int i = 0; i < 10; i++)
if(i % 2) 
    increment(var);
else
increment(var,i);
cout << var << endl; return 0;
}

