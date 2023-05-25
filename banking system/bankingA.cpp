#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string name;
    string nicNo;
    string year;
    string Month;
    string gender;
    string secondName;
    string secondInitial;
    string firstInitial;
    string surname;
    int Day{};
    int depositAmount = 0;
    int deposit = 0;
    int withdraw = 0;
    double savingsInterest;
    int selection;
    int repeatLoop;
    int complete;

    cout << "Do you wish to continue? Then input 1 " << endl;
    cin >> repeatLoop;
    while (repeatLoop == 1) {

        //menu to display the selection
        do
        {
            cout << "    Welcome to the bank of UCL   " << endl;
            cout << " select         " << endl;
            cout << " 1) Open savings Account" << endl;
            cout << " 2) deposit money " << endl;
            cout << " 3) withdraw money " << endl;
            cout << " 4) Open loan account " << endl;
            cout << " 5) Exit              " << endl;
            cout << "     " << endl;
            cout << "    Enter your selection    " << endl;


            cin >> complete;

            //putting a must to create a savings account to continue
            if (complete  != 1)
            {
                cout << "          you should create a savings account to continue      " << endl;
                cout << "  re-enter your selection" << endl;
                cin >> selection;
            }






            // if the selection equals to one continue to create savings account process
            if (selection == 1)
            {

                //getting name by filtering the initials
                cout << " Enter first name:                " << endl;
                cin >> name;

                cout << " Enter second name:               " << endl;
                cin >> secondName;

                cout << " Enter surname:                   " << endl;
                cin >> surname;

                //selecting first letter of both first name and the second name
                firstInitial = name.substr(0, 1);
                secondInitial = secondName.substr(0, 1);




                cout << " Enter your NIC Number" << endl;
                //getting national identity card number
                cin >> nicNo;

                //condition validating the number of characters entered in the input for nic number
                if (nicNo.size() < 12)
                {

                    cout << " Enter valid NIC Number!!" << endl;
                    cin >> nicNo;

                }
                else if (nicNo.size() > 12)
                {
                    cout << " Enter valid NIC Number!!" << endl;
                    cin >> nicNo;

                }

                else if (nicNo.size() == 12)
                {
                    //selecting the first four number's of the nic number and identifying the birth year
                    year = nicNo.substr(0, 4);
                    nicNo = nicNo.substr(4, 3);
                }



                istringstream(nicNo) >> Day;
                //condition to obtain the birth month using the variable "day" obtained by the nic number
                if (Day > 500)
                {
                    gender = "female";
                    Day = Day - 500;
                }

                else
                {
                    gender = "male";
                }

                if (Day > 335)
                {
                    Day = Day - 335;
                    Month = "12";

                }

                else if (Day > 305)
                {
                    Day = Day - 305;
                    Month = "11";

                }

                else if (Day > 274)
                {
                    Day = Day - 274;
                    Month = "10";
                }

                else if (Day > 244)
                {
                    Day = Day - 244;
                    Month = "09";
                }

                else if (Day > 213)
                {
                    Day = Day - 213;
                    Month = "08";
                }

                else if (Day > 182)
                {
                    Day = Day - 182;
                    Month = "07";
                }

                else if (Day > 152)
                {
                    Day = Day - 152;
                    Month = "06";
                }

                else if (Day > 121)
                {
                    Day = Day - 121;
                    Month = "05";
                }

                else if (Day > 91)
                {
                    Day = Day - 91;
                    Month = "04";
                }

                else if (Day > 60)
                {
                    Day = Day - 60;
                    Month = "03";
                }

                else if (Day < 32)
                {
                    Month = "01";
                }

                else if (Day > 31)
                {
                    Day = Day - 31;
                    Month = "02";
                }

                cout << " Enter Initial deposit amount:" << endl;
                //getting the amount user want's to deposit
                cin >> depositAmount;

                //validates the deposit amount that should be greater than 1000
                while (depositAmount < 1000)
                {
                    cout << " deposit should be greater than 1000" << endl;
                    cin >> depositAmount;
                }




                //getting the savings interest rate
                cout << "Enter Savings Interest Rate" << endl;
                cin >> savingsInterest;

                cout << "           congratulations you have sucessfully created your savings account!!!        " << endl;
                cout << "                                                                                       " << endl;
                cout << "                                                                                       " << endl;
                //displaying the menu
                cout << "    select        " << endl;
                cout << " 1) Open savings Account" << endl;
                cout << " 2) deposit money " << endl;
                cout << " 3) withdraw money " << endl;
                cout << " 4) Open loan account " << endl;
                cout << " 5) Exit              " << endl;
                cout << "    Enter your selection    " << endl;

                cin >> selection;
            }

            // if the selection equals to 2 continue to deposit process
            if (selection == 2)

            {
                // enter deposit amount
                cout << " deposit " << endl;
                cin >> deposit;




                // display records with the addition of the deposit
                cout << "                                        " << endl;
                cout << "                                        " << endl;
                cout << "          ++++++++++++++++++++++++++++++" << endl;
                cout << "          ++" << "  Account Number: S001    " << endl;
                cout << "          ++++++++++++++++++++++++++++++" << endl;
                cout << "          ++" << "   Name            :  " << firstInitial << " " << secondInitial << " " << surname << endl;
                cout << "          ++" << "   Date of Birth   :  " << Day << "-" << Month << "-" << year << endl;
                cout << "          ++" << "   Account Balance :  " << depositAmount + deposit << "LKR" << endl;
                cout << "          ++" << "   Gender          :  " << gender << endl;
                cout << "          ++++++++++++++++++++++++++++++" << endl;


                cout << "                                                                                       " << endl;
                cout << "                                                                                       " << endl;
                cout << "                                                                                       " << endl;
                //display menu

                cout << "    select        " << endl;
                cout << " 1) Open savings Account" << endl;
                cout << " 2) deposit money " << endl;
                cout << " 3) withdraw money " << endl;
                cout << " 4) Open loan account " << endl;
                cout << " 5) Exit              " << endl;
                cout << "                  " << endl;
                cout << " Enter your selection          " << endl;

                cin >> selection;

            }
            // if the selectione equals to three allow  withdraw process
            if (selection == 3)
            {


                cout << "                      " << endl;
                cout << " Enter withdraw amount" << endl;
                //getting the amount user want's to withdraw
                cin >> withdraw;

                //displaying report with the withdraw amount
                cout << "                                        " << endl;
                cout << "                                        " << endl;
                cout << "          ++++++++++++++++++++++++++++++" << endl;
                cout << "          ++" << "  Account Number: S001    " << endl;
                cout << "          ++++++++++++++++++++++++++++++" << endl;
                cout << "          ++" << "   Name            :  " << firstInitial << " " << secondInitial << " " << surname << endl;
                cout << "          ++" << "   Date of Birth   :  " << Day << "-" << Month << "-" << year << endl;
                cout << "          ++" << "   Account Balance :  " << depositAmount + deposit - withdraw << "LKR" << endl;
                cout << "          ++" << "   Gender          :  " << gender << endl;
                cout << "          ++++++++++++++++++++++++++++++" << endl;


                //display final amount after withdrawal
                cout << "              " << endl;
                cout << " current balance :  " << depositAmount + deposit - withdraw << "LKR" << endl;

                cout << "                  " << endl;
                cout << "                  " << endl;
                cout << "                  " << endl;
                cout << "    select        " << endl;
                cout << " 1) Open savings Account" << endl;
                cout << " 2) deposit money " << endl;
                cout << " 3) withdraw money " << endl;
                cout << " 4) Open loan account " << endl;
                cout << " 5) Exit              " << endl;
                cout << "                  " << endl;
                cout << " Enter your selection          " << endl;
                cin >> selection;
            }

            // start of personal loan report


            int loanAmt;
            int repaymentPeriod;
            double loanInterest;
            int yearInterest;
            int monthInterest;
            int totalInterestTopay;
            int monthlyInstallment;



            // if selection equals to four continue laon process
            if (selection == 4)
            {
                cout << "                 " << endl;
                cout << " Input Loan Amount" << endl;
                cin >> loanAmt;

                //condition to stop exceeding loan amount
                if (loanAmt > 1000000)
                {
                    cout << "You Have Exceeded The Loan Amount!!" << endl;
                }
                else
                {
                    //get repayment period
                    cout << " Repayment Period in months " << endl;
                    cin >> repaymentPeriod;

                }


                //condition to stop exceeding minimum repayment period
                if (repaymentPeriod > 60)
                {
                    cout << " Repayment Period Should Be Less Than 60 Months!! " << endl;
                }

                else if (repaymentPeriod < 60)
                {
                    //get interest rate
                    cout << " Enter Interest rate" << endl;
                    cin >> loanInterest;

                    //calculate yearly interest
                    yearInterest = loanAmt * loanInterest / 100;

                    //calculate monthly interest
                    monthInterest = yearInterest / 12;

                    //calculate total interest to pay
                    totalInterestTopay = monthInterest * repaymentPeriod;

                    //calculate no of monthly installments
                    monthlyInstallment = (loanAmt + totalInterestTopay) / repaymentPeriod;

                }
                //display loan details
                cout << "                                        " << endl;
                cout << "                                        " << endl;
                cout << "          ++++++++++++++++++++++++++++++" << endl;
                cout << "          ++" << "  Account Number: L001    " << endl;
                cout << "          ++++++++++++++++++++++++++++++" << endl;
                cout << "          ++" << "   Name            :  " << firstInitial << " " << secondInitial << " " << surname << endl;
                cout << "          ++" << "   Period          :  " << repaymentPeriod << " months" << endl;
                cout << "          ++" << "   Amount          :  " << loanAmt << "LKR" << endl;
                cout << "          ++" << "   Installment     :  " << monthlyInstallment << "LKR" << endl;
                cout << "          ++++++++++++++++++++++++++++++" << endl;






            } while (selection > 5 || selection < 1);




        } while (selection > 5 || selection < 1);
        cout << "Do you wish to continue? Then input 1 " << endl;
        cin >> repeatLoop;
    }
    return 0;
}
