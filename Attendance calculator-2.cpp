#include <iostream>
using namespace std;

// Function to calculate current attendance percentage
double currentPercentage(int total_classes, int classes_attended)
{
    double percentage = (static_cast<double>(classes_attended) / total_classes) * 100;
    return percentage;
}

// Function to calculate required attendance based on desired percentage
int reqAtt(int total_classes, int req_att)
{
    int more_classes = (req_att * total_classes) / 100;
    return more_classes;
}

int main()
{
    int choice;
    int total_classes;
    int classes_attended;
    int req_att;
    double percentage;
    int more_classes; 

    cout << "Choose what you want to do: "<<endl<<"1. How many more classes you should attend to reach a requires percentage"<<endl<<"2. Calculate your current attendance percentage"<<endl<<"Choice:";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter the total number of classes: ";
        cin >> total_classes;
        cout << "Enter your required attendance percentage: ";
        cin >> req_att;
        more_classes = reqAtt(total_classes, req_att);
        cout << "You should attend approximately: " << more_classes << " more classes." << endl;
        break;

    case 2:
    	cout << "Enter the total number of classes: ";
        cin >> total_classes;
        cout << "Enter the number of classes attended: ";
        cin >> classes_attended;
        percentage = currentPercentage(total_classes, classes_attended);
        cout << "Current attendance percentage is: " << percentage << "%" << endl;
        break;
        
    default:
        cout << "Invalid choice!!!" << endl;
        break;
    }

    return 0;
}

