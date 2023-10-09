#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
void printHeader();
void condition1(int option);
void condition2(int option);
void condition3(int option);
void condition4(int option);
void condition5(int option);
void pricelist(int option);
void menu();
string name1,name2,name3;
float rollno1,rollno2,rollno3,rollno4,room1,room2,room3;
int option;
int days,expense;
int main()
{   while(true)
    {printHeader();
    menu();
    cout<<"Select your Option: ";
    cin>>option;
    system("cls");
    condition1(option);
    condition2(option);
    condition3(option);
    condition4(option);
    condition5(option);
    pricelist(option);
    cout<<"Press any key to Continue..";
    getch();
    system("cls");
    }
    return 0;
}
void printHeader()
{
    cout<<"###################################################################################################"<<endl;
    cout<<" _   _           _       _   __  __                                                   _             "<<endl;
    cout<<"| | | | ___  ___| |_ ___| | |  \\/  | __ _ _ __   __ _  __ _  ___ _ __ ___   ___ _ __ | |_           "<<endl;
    cout<<"| |_| |/ _ \\/ __| __/ _ | | | |\\/| |/ _` | '_ \\ / _` |/ _` |/ _ | '_ ` _ \\ / _ | '_ \\| __|          "<<endl;
    cout<<"|  _  | (_) \\__ | ||  __| | | |  | | (_| | | | | (_| | (_| |  __| | | | | |  __| | | | |_           "<<endl;
    cout<<"|_| |_|\\___/|___/\\__\\___|_| |_|  |_|\\__,_|_| |_|\\__,_|\\__, |\\___|_| |_| |_|\\___|_| |_|\\__|          "<<endl;
    cout<<"                                                      |___/                                         "<<endl;      
    cout<<"                     ____            _                                                              "<<endl;
    cout<<"                    / ___| _   _ ___| |_ ___ _ __ ___                                               "<<endl;
    cout<<"                    \\___ \\| | | / __| __/ _ | '_ ` _ \\                                              "<<endl;
    cout<<"                     ___) | |_| \\__ | ||  __| | | | | |                                             "<<endl;
    cout<<"                    |____/ \\__, |___/\\__\\___|_| |_| |_|                                             "<<endl;
    cout<<"                           |___/                                                                    "<<endl;
     cout<<"###################################################################################################"<<endl;
}
void menu()
{
    cout<<"Select one of the following options"<<endl;

    cout<<"1.Add Student 1"<<endl;
    cout<<"2.Add Student 2"<<endl;
    cout<<"3.Add Student 3"<<endl;
    cout<<"4.Show list of Mess Shedule." <<endl;
    cout<<"5.Show monthly dues."<<endl;
    cout<<"6.Show price list."<<endl;
    
}
void condition1(int option)
{
    if(option == 1)
    {   cout<<"Enter student name: ";
        cin>>name1;
        cout<<"Roll number: ";
        cin>>rollno1;
        cout<<"Room number: ";
        cin>>room1;
        cout<<"Student Information"<<endl;
        cout<<"Name: "<<name1<<endl;
        cout<<"Rollno: "<<rollno1<<endl;
        cout<<"Roomnumber: "<<room1<<endl;
        
    }

}
void condition2(int option)
{
    if(option == 2)
    { cout<<"Enter student name: ";
        cin>>name2;
        cout<<"Roll number: ";
        cin>>rollno2;
        cout<<"Room number: ";
        cin>>room2;
        cout<<"Student Information"<<endl;
        cout<<"Name: "<<name2<<endl;
        cout<<"Rollno: "<<rollno2<<endl;
        cout<<"Roomnumber: "<<room2<<endl;
    }
    
}
void condition3(int option)
{
    if(option == 3)
    { cout<<"Enter student name: ";
        cin>>name3;
        cout<<"Roll number: ";
        cin>>rollno1;
        cout<<"Room number: ";
        cin>>room3;
        cout<<"Student Information"<<endl;
        cout<<"Name: "<<name3<<endl;
        cout<<"Rollno: "<<rollno3<<endl;
        cout<<"Roomnumber: "<<room3<<endl;
        
    }
    
}
void condition4(int option)
{
    if(option==4)
    {
    cout<<"      Day            |       Lunch        |      Dinner          "<<endl;
    cout<<"     MONDAY          |     Biryani        |      Chicken Kabab   "<<endl;
    cout<<"     TUESDAY         |     Pulao          |      Ghobi           "<<endl;
    cout<<"     WEDNESDAY       |     Nihari         |      Allu Anday      "<<endl;
    cout<<"     THURSDAY        |     Beef           |      Allu gajar      "<<endl;
    cout<<"     FRIDAY          |     Mutton         |      kher mix        "<<endl;
    cout<<"     SATURDAY        |     Sindhi Biryani |      Palak           "<<endl;
    cout<<"     SUNDAY          |     kabab          |      Chicken         "<<endl;
     }
}
void condition5(int option)
{
    if(option==5)
    {   cout<<"Per day Fee: 500 Rs."<<endl;
        cout<<"Number of days you lived in hostel: ";
        cin>>days;
        expense = 500 * days;
        cout<<"Your Hostel dues are "<<expense<<" Rs "<<endl; 
    }
}
void pricelist(int option)
{if (option==6)
   {
      cout << "Mess Rate list:"<<endl;
      cout << "     Chicken                 170       " << endl;
      cout << "     Pulao                   150       " << endl;
      cout << "     Bryaini                 180       " << endl;
      cout << "     Nihari                  170       " << endl;
      cout << "     Beef                    180       " << endl;
      cout << "     Mutton                  140       " << endl;
      cout << "     Sindhi Biryani          170       " << endl;
      cout << "     kabab                   140       " << endl;
      cout << "     Palak                   140       " << endl;
      cout << "     Kher mix                150       " << endl;
      cout << "     Allu Gajar              200       " << endl;
      cout << "     Palak                   130       " << endl;
      cout << "     koftay                  140       " << endl;
      cout << "     Aloo anda               120       " << endl;
   }
}