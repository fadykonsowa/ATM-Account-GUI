#include <iostream>
using namespace std;

//**** Variable ****//
double balance = 1000;
int deposit = 0;
int withDraw = 0;
int passWord = 1234;
int choice = 0;
//**** End of The Variable ****//

// Show is function to display the menu of ATM
void show()
{
    cout << "****** Menu ******\n";
    cout << "1:balance" << endl;
    cout << "2:withDraw" << endl;
    cout << "3:deposit" << endl;
    cout << "4:Exit" << endl;
    cout << "*******************\n";
}

void process()
{
    cout << "Enter Your PassWord = 0000: ";
    cin >> passWord;

    do
    {
        if (passWord == 0000)
        {
            cout << "Enter Your choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                cout << "Your balance is " << balance << endl;
                break;
            case 2:
                cout << "Note : Your balance is " << balance << endl;
                cout << "Enter your WithDraw Amount: ";
                cin >> withDraw;

                if (withDraw > balance)
                {
                    cout << "Sorry you can't WithDraw this Amount " << endl;
                }
                else
                {
                    balance = balance - withDraw;
                    cout << "Now : your balance is " << balance << endl;
                }
                break;
            case 3:
                cout << "Your current balance is " << balance << endl;
                cout << "Enter Your deposit money: ";
                cin >> deposit;

                balance = balance + deposit;
                cout << "Your new Balance is " << balance << endl;

                break;
            case 4:
                cout << "**** Thank you ****" << endl;
                break;
            default:
                break;
            } // End of switch
        } // End of if
        else
        {
            char option = 'o';
            cout << "Password is incorrect,\n"
                 << "Do you want to Try Again ?\n"
                 << "Enter [Y] of Yes or [N] for No: ";
            cin >> option;
            if (option == 'Y' || option == 'y')
            {
                cout << "enter your password: ";
                cin >> passWord;
            }else{
                choice = 4;
            }
        }
    } while (choice < 4);
} // End of Process

int main()
{
    show();
    process();

   // system("pause");
    return 0;
}