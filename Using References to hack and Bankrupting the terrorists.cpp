// Using References to hack and Bankrupting the terrorists.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
double sammy_bank = 69.42;
double terror_bank = 450;
//3=joey, terror=5
void regalarmoney(int j) {
    double& regalar_sammy = sammy_bank;
    double& regalar_bobby = terror_bank;
   if (j == 3) {
       //prints the change in the sammy's back account
        cout << "Hello Sammy, your balance is $" << regalar_sammy << endl;
   }
    else {
       //prints the change in the terror's  back account
       cout << "hello Bobby, your balance is $" << regalar_bobby<<" million"<< endl;
    }

}
void chandedmoney(int n) {
    double& chanded_sammy =terror_bank; //refence for sammy's account change 
    double& chanded_bobby = sammy_bank; //refence for terror's account change
    if (n == 3) {
    
        //prints the change in the sammy's hacked back account
        cout << "Hello Sammy, your balance is $" << chanded_sammy << " million" << endl;
    }
    else {
        //prints the change in the terror's hacked back account
        cout << "hello Bobby, your balance is $" << chanded_bobby<< endl;
    }

}
int main()
{//runs the reglalrmoney void
    regalarmoney(3);
    regalarmoney(5);
    //runs the chandedmoney void
    chandedmoney(3);
    chandedmoney(5);
}
/*Once the program is working have tested it a few times, create a new repository in your GitHub account for your program.
Add your solution and files to your new Repository on GitHub.
Take a screenshot of this project in GitHub.
Take a screenshot of the program working.*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
