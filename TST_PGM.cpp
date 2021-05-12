#include <iostream>
#include <cmath>

using namespace std;

//explains program to user and directs them to enter appropriate values.
void input(double& meters);

//makes converson from metric to English units
void convert(int& feet, double& inches, double meters);

//it will make use of the following global constants
const double METERS_PER_FOOT = 0.3048;
const double INCHES_PER_FOOT = 12.0;

//handles the output as shown in the sample script below
void output(int feet, double inches, double meters);

int main()
{
        int feet;
        double meters, inches;
        char choice;
        do
        {

                input(meters);
                cout.setf(ios::fixed);
                cout.setf(ios::showpoint);
                cout.precision(2);

                convert(feet, inches, meters);
                output(feet, inches, meters);



                cout << endl;
                cout << "Y/y continues, any other quits" << endl;
                cin >> choice;
                cout << endl;

         } while(( choice == 'y') || (choice == 'Y'));

        return 0;
}


void input(double& meters)
{
        cout << "Enter a number as a double" << endl;
        cin >> meters;
}


void convert(int& feet, double& inches, double meters)
{


        feet = (meters)/METERS_PER_FOOT;  // this part is giving me the error

}


void output(int feet, double inches, double meters)
{
        cout << endl;
        cout << "The value of meters, centimeters " << meters << " meters converted to English is " << feet << " feet, " << endl;
}
