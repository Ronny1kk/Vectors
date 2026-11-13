#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
//global variables
string userinput;
int userinputinteger;

vector<vector<int>> scores = {
    {10, 20, 30},
    {40, 50, 60},
    {70, 80, 90}
};
//function to display the vector
void display(){
for ( int row = 0; row<scores.size();row++)
    {
          cout << "row" << "(" <<  row  << ")"<<  ":\n ";
          
        for ( int col = 0; col < scores[row].size();col++)
        {
            cout << setw(1) << "Column" << "(" << col << ")" << ":";
          cout << setw(2) << scores[row][col]  << " " << setw(10) << "\n" << ""; 
        }
        cout << endl;
    }
}
//function if user wants to see vector
void displayfunction()
{
cout << " would you like to see the vector? (yes/no)" << endl;
cin >> userinput;
//if-else statement to check if user wants to see vector
    if ( userinput == "yes" || userinput == "Yes")
    {
       display();
    }
    else if( userinput == "no" || userinput == "No")
    {
        cout << " okay, have a nice day!" << endl;
    }
    else
    {
        cout << " enter a valid input" << endl;
    }
    }
    
//function to store user input in the vector
void userfunction()
        {
    cout << " enter a number to store in the vector" << endl;
    cin >> userinputinteger;
            
             // sorting
             if (userinputinteger <= 30)
             {
                    
                    scores[0].push_back(userinputinteger);
                    sort(scores[0].begin(), scores[0].end());
                    cout << " stored in row 0" << endl;
             }
             else if ( userinputinteger <= 70)
             {
                    scores[1].push_back(userinputinteger);
                    sort(scores[1].begin(), scores[1].end());
                    cout << " stored in row 1" << endl;
             }
             else if ( userinputinteger <= 100)
             {
                    scores[2].push_back(userinputinteger);
                    sort(scores[2].begin(), scores[2].end());
                    cout << " stored in row 2" << endl;
             }
             else
             {
                 cout << " number is not in the range of the vector" << endl;
             }
            
        }
int main()
{
    //dynamic resize
   
//function calls
displayfunction();
userfunction();
//updated
 cout << "updated vector is:" << " \n";
display();
return 0;
    }
        



         
        
    
       
    

