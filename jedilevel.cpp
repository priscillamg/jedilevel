// Priscilla Garza
// Prelab 8 Assignment 
// Move the indicated code into functions.

#include <iostream>
using namespace std;

double calculate_Jedilvl();
void JediResults();

int main()
{
    
 
    JediResults();
    cout << "Your Jedi Level is : " << calculate_Jedilvl();
    return 0;
    
}


void JediResults()
{
    cout << "Welcome to my fabulous Jedi power level calculator!" << endl
    << "This program will take your age, weight, and" << endl
    << "midichlorean count and return your Jedi power level!"
    << endl << endl;
    
    }

double calculate_Jedilvl()
    {
        double jedi_level;
        int age;
        int weight;
        int mcc;
        
    
    cout << "please enter your age : ";
    cin >> age;
    cout << "please enter your weight : ";
    cin >> weight;
    cout << "please enter your midicholrean count : ";
    cin >> mcc;
    jedi_level = static_cast <double>(mcc * age) / (weight * weight);
    return jedi_level;
    
   }


