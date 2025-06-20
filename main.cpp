#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

struct customer
{
    // string name;
    // long long int phone_no;
    string order;
};

void menuDisplay()
{
    cout << ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
             "\nWelcome to Restaurant Menu Ordering System!\n\n"
             "Choose one option:\n"
             "1. Display Menu\n"
             "2. Add Items in Menu\n"
             "3. Update Medicine\n"
             "4. Search For Medicine\n"
             "5. Delete Items\n"
             "6. Exit\n"
             "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
}

void order(){
    cout<<"\nPlease select one item to place your order: \n\n";
}

int main()
{

    while (1)
    {
        menuDisplay();
        int user_choice;
        printf("Select the option: ");
        scanf("%d", &user_choice);

        if (user_choice == 1)
        {
            ifstream infile;
            infile.open("menu.txt");
            char c;
            c=infile.get();
            while(!infile.eof()){
                cout<<c;
                c=infile.get();
            }
            infile.close();
            
            string place_order;
            cout<<"\nWould you like to place your order? (Yes/No)\n";
            cin>>place_order;
            if(place_order=="Yes"||place_order=="YES"||place_order=="yes"){
                order();
                return 0;
            }
            else if(place_order=="No"||place_order=="NO"||place_order=="no"){
                continue;
            }


        }
        else if (user_choice == 2)
        {
            
        }
        else if (user_choice == 3){
       
        }

        else if (user_choice == 4){
       
        }

        else if (user_choice == 5){
       
        }

        else if (user_choice == 6)
        {
            cout << "Thanks for using the system!\n Exiting...";
            break;
        }

        else
        {
            cout << "\nInvalid option! Please enter valid option.\n";
            cout << "Enter option again: ";
            cin >> user_choice;
        }
    }

    return 0;
}
