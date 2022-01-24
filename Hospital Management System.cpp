#include<iostream>
using namespace std;
int main()
{

 cout<<"**********************************************************************************"<<endl;
 cout<<"***                        Hospital Management System                          ***"<<endl;
 cout<<"**********************************************************************************"<<endl;

 int opt;
 string username1,password1;
 string username2,password2;
 string username3,password3;
 string username4,password4;
 string username5,password5;
 string username6,password6;
 string name1,email1,status1,gender1,age1;
 string name2,email2,status2,gender2,age2;
 string name3,email3,status3,gender3,age3;
 string name4,email4,status4,gender4,age4;
 string name5,email5,status5,gender5,age5;
 string name6,email6,status6,gender6,age6;


 // *** Admin has been done hardcore *** //


 username1="Admin*123";
 password1="password_123";
 name1="Abdul Mannan";
 email1="manan2492@gmail.com";
 status1="Admin";
 gender1="Male";
 age1="18";



 
 cout<<"Main Menu"<<endl;
 cout<<"------------------------------------"<<endl;
 cout<<"1-Admin Module"<<endl;
 cout<<"2-Doctot Module"<<endl;
 cout<<"3-Patient Module"<<endl;
 cout<<"4-Receptionist Module"<<endl;
 cout<<"5-Pharmacist Module"<<endl;
 cout<<"6-Accountant Module"<<endl;
 cout<<"7-Exit"<<endl;

 cout<<"Please enter your option"<<endl;
 cin>>opt;

 system("cls");

    if (opt<7)
    {
        string back_opt;
        string date,time;
        string date_admitted,diagnosis,medical_history,current_condition,prescription;
        string medicine1,medicine2,medicine3,inventory1,inventory2,inventory3;
        int medicine_amount,laboratory_amount,room_charges;
        int total_bill;
        
        
        if ( opt == 1 )
        {
            int admin_opt;
            int removing_option;



            cout<<"Main Menu>Admin Module"<<endl;
            cout<<"------------------------------------"<<endl;
            cout<<"Enter your Username"<<endl;
            cin>>username1;
            cout<<"Enter your Password"<<endl;
            cin>>password1;
            system("cls");

            if ( username1 == "Admin*123" && password1 == "password_123"  )    
            {

                cout<<"Main Menu>Admin Module"<<endl;
                cout<<"----------------------------------------"<<endl;
                cout<<"1-Dashboard"<<endl;
                cout<<"2-Add user"<<endl;
                cout<<"3-Remove user"<<endl;
                cout<<"4-View Staff info"<<endl;
                
                cout<<"Please enter your option"<<endl;
                cin>>admin_opt;
                system("cls");


                if ( admin_opt == 1 ) 
                {
                    
                    cout<<" ***** Viewing Dashboard ***** "<<endl;
                    cout<<"----------------------------------------"<<endl;
                    cout<<"Name: "<<name1<<endl;
                    cout<<"Gender: "<<gender1<<endl;
                    cout<<"Age: "<<age1<<endl;
                    cout<<"Status: "<<status1<<endl;
                    cout<<"Email: "<<email1<<endl;
                    cout<<"Type back to return to admin module "<<endl;
                    cin>>back_opt;
                    system("cls");

                    
                }

                cout<<"Main Menu>Admin Module"<<endl;
                cout<<"----------------------------------------"<<endl;
                cout<<"1-Dashboard"<<endl;
                cout<<"2-Add user"<<endl;
                cout<<"3-Remove user"<<endl;
                cout<<"4-View Staff info"<<endl;
                cout<<"Please enter your option"<<endl;
                cin>>admin_opt;
                system("cls");

                if ( admin_opt == 2 ) 
                {
                    cout<<" ***** Adding User ***** "<<endl;
                    cout<<"----------------------------------------"<<endl;
                    
                   
                    //   *** creating Doctor ***  //
                    cout<<"Creating user Doctor"<<endl;
                    cout<<" Create username for user doctor "<<endl;
                    cin>>username2;
                    cout<<" Create password for user doctor "<<endl;
                    cin>>password2;
                    cout<<" Enter actor name "<<endl;
                    cin>>name2;
                    cout<<" Enter actor gender "<<endl;
                    cin>>gender2;
                    cout<<" Enter actor age "<<endl;
                    cin>>age2;
                    cout<<" Enter actor status "<<endl;
                    cin>>status2;
                    cout<<" Enter actor email "<<endl;
                    cin>>email2;
                    cout<<"------------------------------------"<<endl;
                    //   *** creating Patient ***  //
                    cout<<"Creating user Patient"<<endl;
                    cout<<" Create username for user patient "<<endl;
                    cin>>username3;
                    cout<<" Create password for user patient "<<endl;
                    cin>>password3;
                    cout<<" Enter actor name "<<endl;
                    cin>>name3;
                    cout<<" Enter actor gender "<<endl;
                    cin>>gender3;
                    cout<<" Enter actor age "<<endl;
                    cin>>age3;
                    cout<<" Enter actor status "<<endl;
                    cin>>status3;
                    cout<<" Enter actor email "<<endl;
                    cin>>email3;
                    cout<<"------------------------------------"<<endl;
                    //   *** creating Receptionist ***  //
                    cout<<"Creating user Receptionist"<<endl;
                    cout<<" Create username for user receptionist "<<endl;
                    cin>>username4;
                    cout<<" Create password for user receptionist "<<endl;
                    cin>>password4;
                    cout<<" Enter actor name "<<endl;
                    cin>>name4;
                    cout<<" Enter actor gender "<<endl;
                    cin>>gender4;
                    cout<<" Enter actor age "<<endl;
                    cin>>age4;
                    cout<<" Enter actor status "<<endl;
                    cin>>status4;
                    cout<<" Enter actor email "<<endl;
                    cin>>email4;
                    cout<<"------------------------------------"<<endl;
                    //   *** creating Pharmacist ***  //
                    cout<<"Creating user Pharmacist"<<endl;
                    cout<<" Create username for user pharmacist "<<endl;
                    cin>>username5;
                    cout<<" Create password for user pharmacist "<<endl;
                    cin>>password5;
                    cout<<" Enter actor name "<<endl;
                    cin>>name5;
                    cout<<" Enter actor gender "<<endl;
                    cin>>gender5;
                    cout<<" Enter actor age "<<endl;
                    cin>>age5;
                    cout<<" Enter actor status "<<endl;
                    cin>>status5;
                    cout<<" Enter actor email "<<endl;
                    cin>>email5;
                    cout<<"------------------------------------"<<endl;
                    //   *** creating Accountant ***  //
                    cout<<"Creating user Accountant"<<endl;
                    cout<<" Create username for user accountant "<<endl;
                    cin>>username6;
                    cout<<" Create password for user accountant "<<endl;
                    cin>>password6;
                    cout<<" Enter actor name "<<endl;
                    cin>>name6;
                    cout<<" Enter actor gender "<<endl;
                    cin>>gender6;
                    cout<<" Enter actor age "<<endl;
                    cin>>age6;
                    cout<<" Enter actor status "<<endl;
                    cin>>status6;
                    cout<<" Enter actor email "<<endl;
                    cin>>email6;
                    cout<<"------------------------------------"<<endl;
                    cout<<"Type back to return to admin module "<<endl;
                    cin>>back_opt;
                    system("cls");                        
                }

                    cout<<"Main Menu>Admin Module"<<endl;
                    cout<<"----------------------------------------"<<endl;
                    cout<<"1-Dashboard"<<endl;
                    cout<<"2-Add user"<<endl;
                    cout<<"3-Remove user"<<endl;
                    cout<<"4-View Staff info"<<endl;
                    cout<<"Please enter your option"<<endl;
                    cin>>admin_opt;
                    system("cls");


                if ( admin_opt == 3 )
                {
                    
                    cout<<" ***** Removing User ***** "<<endl;
                    cout<<"----------------------------------------"<<endl;
                    cout<<"Enter User which you want to remove"<<endl;
                    cout<<"1-Doctot "<<endl;
                    cout<<"2-Patient "<<endl;
                    cout<<"3-Receptionist "<<endl;
                    cout<<"4-Pharmacist "<<endl;
                    cout<<"5-Accountant "<<endl;    
                    cin>>removing_option;
                    system("cls");

                    if ( removing_option == 1 )
                    {

                        username2 = "";
                        password2 = "";
                        name2 = "";
                        email2 = "";
                        status2 = "";
                        gender2 = "";
                        age2 = "";
                    }
                    if ( removing_option == 2 )
                    {
                        username3 = "";
                        password3 = "";
                        name3 = "";
                        email3 = "";
                        status3 = "";
                        gender3 = "";
                        age3 = "";
                    }
                    if ( removing_option == 3 )
                    {
                        username4 = "";
                        password4 = "";
                        name4 = "";
                        email4 = "";
                        status4 = "";
                        gender4 = "";
                        age4 = "";
                    }
                    
                    if ( removing_option == 4 )
                    {
                        username5 = "";
                        password5 = "";
                        name5 = "";
                        email5 = "";
                        status5 = "";
                        gender5 = "";
                        age5 = "";
                    }

                    if ( removing_option == 5 )
                    {
                        username6 = "";
                        password6 = "";
                        name6 = "";
                        email6 = "";
                        status6 = "";
                        gender6 = "";
                        age6 = "";
                    }

                }
                    cout<<"Main Menu>Admin Module"<<endl;
                    cout<<"----------------------------------------"<<endl;
                    cout<<"1-Dashboard"<<endl;
                    cout<<"2-Add user"<<endl;
                    cout<<"3-Remove user"<<endl;
                    cout<<"4-View Staff info"<<endl;
                    cout<<"Please enter your option"<<endl;
                    cin>>admin_opt;
                    system("cls");


                if ( admin_opt == 4)
                {
                    cout<<"***    Viewing staff info    ***"<<endl;
                    cout<<"----------------------------------------"<<endl;
                    cout<<"Doctor info"<<endl;
                    cout<<"Name: "<<name2<<endl;
                    cout<<"Gender: "<<gender2<<endl;
                    cout<<"Age: "<<age2<<endl;
                    cout<<"Status: "<<status2<<endl;
                    cout<<"Email: "<<email2<<endl;
                    cout<<"------------------------------------"<<endl;
                    cout<<"Patient info"<<endl;
                    cout<<"Name: "<<name3<<endl;
                    cout<<"Gender: "<<gender3<<endl;
                    cout<<"Age: "<<age3<<endl;
                    cout<<"Status: "<<status3<<endl;
                    cout<<"Email: "<<email3<<endl;
                    cout<<"------------------------------------"<<endl;
                    cout<<"Receptionist info"<<endl;
                    cout<<"Name: "<<name4<<endl;
                    cout<<"Gender: "<<gender4<<endl;
                    cout<<"Age: "<<age4<<endl;
                    cout<<"Status: "<<status4<<endl;
                    cout<<"Email: "<<email4<<endl;
                    cout<<"------------------------------------"<<endl;
                    cout<<"Pharmacist info"<<endl;
                    cout<<"Name: "<<name4<<endl;
                    cout<<"Gender: "<<gender4<<endl;
                    cout<<"Age: "<<age4<<endl;
                    cout<<"Status: "<<status4<<endl;
                    cout<<"Email: "<<email4<<endl;
                    cout<<"------------------------------------"<<endl;
                    cout<<"Accountant info"<<endl;
                    cout<<"Name: "<<name4<<endl;
                    cout<<"Gender: "<<gender4<<endl;
                    cout<<"Age: "<<age4<<endl;
                    cout<<"Status: "<<status4<<endl;
                    cout<<"Email: "<<email4<<endl;
                    cout<<"------------------------------------"<<endl;
                    cout<<"Type back to return to main menu "<<endl;
                    cin>>back_opt; 
                    system("cls");
                    

                }
            
                    cout<<"Main Menu"<<endl;
                    cout<<"------------------------------------"<<endl;
                    cout<<"1-Admin Module"<<endl;
                    cout<<"2-Doctot Module"<<endl;
                    cout<<"3-Patient Module"<<endl;
                    cout<<"4-Receptionist Module"<<endl;
                    cout<<"5-Pharmacist Module"<<endl;
                    cout<<"6-Accountant Module"<<endl;
                    cout<<"7-Exit"<<endl;
            }
            else 
            {
                cout<<"Please enter correct credentials"<<endl;
            }
            
        }
        if  (opt == 2 )
        {
            int doctor_opt;
            

            cout<<"Main Menu>Doctor Module"<<endl;
            cout<<"------------------------------------"<<endl;
            cout<<"Enter your Username"<<endl;
            cin>>username2;
            cout<<"Enter your Password"<<endl;
            cin>>password2;
            system("cls");

            if ( username2 == "Doctor*123" && password2 == "password_123"  )
            {
                cout<<"Main Menu>Doctor Module"<<endl;
                cout<<"----------------------------------------"<<endl;
                cout<<"1-Dashboard"<<endl;
                cout<<"2-View appointments"<<endl;
                cout<<"3-Generate medical report"<<endl;
                cout<<"4-View medical report"<<endl;
                
                
                cout<<"Please enter your option"<<endl;
                cin>>doctor_opt;
                system("cls");

                if ( doctor_opt == 1 ) 
                {
                    
                    cout<<" ***** Viewing Dashboard ***** "<<endl;
                    cout<<"----------------------------------------"<<endl;
                    cout<<"Name: "<<name2<<endl;
                    cout<<"Gender: "<<gender2<<endl;
                    cout<<"Age: "<<age2<<endl;
                    cout<<"Status: "<<status2<<endl;
                    cout<<"Email: "<<email2<<endl;
                    cout<<"Type back to return to doctor module "<<endl;
                    cin>>back_opt;
                    system("cls");                    
                }
                if ( doctor_opt == 2 )
                {
                    cout<<" ***** Viewing appointment ***** "<<endl;
                    cout<<"----------------------------------------"<<endl;
                    cout<<" Patient information "<<endl;
                    cout<<"Name: "<<name3<<endl;
                    cout<<"Gender: "<<gender3<<endl;
                    cout<<"Age: "<<age3<<endl;
                    cout<<" Appointment information "<<endl;
                    cout<<"Date: "<<date<<endl;
                    cout<<"Time: "<<time<<endl;
                }
                if ( doctor_opt == 3 )
                {
                    //***    Generating Medical Report    ***//
                    cout<<"***    Generating Medical Report    ***"<<endl;
                    cout<<"----------------------------------------"<<endl;
                    cout<<"Enter patient name"<<endl;
                    cin>>name3;
                    cout<<"Enter patient gender"<<endl;
                    cin>>gender3;
                    cout<<"Enter patient age"<<endl;
                    cin>>age3;
                    cout<<"Enter date when patient is admitted to hospital"<<endl;
                    cin>>date_admitted;
                    cout<<"Enter medical diagnosis of patient "<<endl;
                    cin>>diagnosis;
                    cout<<"Enter medical history of patient (if known) "<<endl;
                    cin>>medical_history;
                    cout<<"Enter current clinical condition"<<endl;
                    cin>>current_condition;
                    cout<<"Enter prescription for patient"<<endl;
                    cin>>prescription;

                }
                if ( doctor_opt == 4 )
                {
                    cout<<" ***** Viewing Medical Report ***** "<<endl;
                    cout<<"----------------------------------------"<<endl;
                    cout<<"Name: "<<name3<<endl;
                    cout<<"Gender: "<<gender3<<endl;
                    cout<<"Age: "<<age3<<endl;
                    cout<<"Date admitted in hospital: "<<date_admitted<<endl;
                    cout<<"Medical diagnosis: "<<diagnosis<<endl;
                    cout<<"Medical history: "<<medical_history<<endl;
                    cout<<"Current clinical condition: "<<current_condition<<endl;
                    cout<<"Prescription for patient:"<<prescription<<endl;
                    
                }
                



            }
            else 
            {
                cout<<"Please enter correct credentials"<<endl;
            }




        }        
        if  ( opt == 3 )
        {
            int patient_opt;


            cout<<"Main Menu>Patient Module"<<endl;
            cout<<"------------------------------------"<<endl;
            cout<<"Enter your Username"<<endl;
            cin>>username3;
            cout<<"Enter your Password"<<endl;
            cin>>password3;
            system("cls");



            if ( username3 == "Patient*123" && password3 == "password_123"  )
            {
                cout<<"Main Menu>Patient Module"<<endl;
                cout<<"----------------------------------------"<<endl;
                cout<<"1-Dashboard"<<endl;
                cout<<"2-View appointment"<<endl;
                cout<<"3-View medical expenditure"<<endl;
                cout<<"4-View medical report"<<endl;
                
                
                cout<<"Please enter your option"<<endl;
                cin>>patient_opt;
                system("cls");

                if ( patient_opt == 1 ) 
                {
                    
                    cout<<" ***** Viewing Dashboard ***** "<<endl;
                    cout<<"----------------------------------------"<<endl;
                    cout<<"Name: "<<name3<<endl;
                    cout<<"Gender: "<<gender3<<endl;
                    cout<<"Age: "<<age3<<endl;
                    cout<<"Status: "<<status3<<endl;
                    cout<<"Email: "<<email3<<endl;
                    cout<<"Type back to return to patient module "<<endl;
                    cin>>back_opt;
                    system("cls");                    
                }
                if ( patient_opt == 2 ) 
                {
                    cout<<" ***** Viewing appointment ***** "<<endl;
                    cout<<"----------------------------------------"<<endl;
                    cout<<" Appointment information "<<endl;
                    cout<<"Date: "<<date<<endl;
                    cout<<"Time: "<<time<<endl;
                    cout<<"Available physician name: "<<name2<<endl;
                }
                if ( patient_opt == 3 ) 
                {
                    cout<<" ***** Viewing Bill ***** "<<endl;
                    cout<<"----------------------------------------"<<endl;
                    cout<<"Room charges: "<<room_charges<<endl;
                    cout<<"Medicine bill: "<<medicine_amount<<endl;
                    cout<<"Laboratory bill: "<<laboratory_amount<<endl;
                    cout<<"Total bill: "<<total_bill<<endl;
                    
                }
                if ( patient_opt == 4 ) 
                {
                    cout<<" ***** Viewing Medical Report ***** "<<endl;
                    cout<<"----------------------------------------"<<endl;
                    cout<<"Name: "<<name3<<endl;
                    cout<<"Gender: "<<gender3<<endl;
                    cout<<"Age: "<<age3<<endl;
                    cout<<"Date admitted in hospital: "<<date_admitted<<endl;
                    cout<<"Medical diagnosis: "<<diagnosis<<endl;
                    cout<<"Medical history: "<<medical_history<<endl;
                    cout<<"Current clinical condition: "<<current_condition<<endl;
                    cout<<"Prescription for patient: "<<prescription<<endl;
                }
            }
            else
            {
                cout<<"Please enter correct credentials"<<endl;

            }
        }
        if  ( opt == 4 )
        {
            int receptionist_opt;
            

            cout<<"Main Menu>Receptionist Module"<<endl;
            cout<<"------------------------------------"<<endl;
            cout<<"Enter your Username"<<endl;
            cin>>username4;
            cout<<"Enter your Password"<<endl;
            cin>>password4;
            system("cls");

            if ( username4 == "Receptionist*123" && password4 == "password_123"  )
            {
                cout<<"Main Menu>Receptionist Module"<<endl;
                cout<<"----------------------------------------"<<endl;
                cout<<"1-Dashboard"<<endl;
                cout<<"2-Arrange appointment"<<endl;
                cout<<"3-View record of patient admitted"<<endl;
                

                cout<<"Please enter your option"<<endl;
                cin>>receptionist_opt;
                system("cls");

            
                if ( receptionist_opt == 1 ) 
                {

                    cout<<" ***** Viewing Dashboard ***** "<<endl;
                    cout<<"----------------------------------------"<<endl;
                    cout<<"Name: "<<name4<<endl;
                    cout<<"Gender: "<<gender4<<endl;
                    cout<<"Age: "<<age4<<endl;
                    cout<<"Status: "<<status4<<endl;
                    cout<<"Email: "<<email4<<endl;
                    cout<<"Type back to return to receptionist module "<<endl;
                    cin>>back_opt;
                    system("cls");                    
                }
                if ( receptionist_opt == 2 )
                {
                    cout<<" ***** Arranging appointment ***** "<<endl;
                    cout<<"----------------------------------------"<<endl;
                    cout<<" Patient information "<<endl;
                    cout<<"Name: "<<name3<<endl;
                    cout<<"Gender: "<<gender3<<endl;
                    cout<<"Age: "<<age3<<endl;
                    cout<<" Appointment information "<<endl;
                    cout<<" Enter the date of appointment "<<endl;
                    cin>>date;
                    cout<<" Enter the time of appointment "<<endl;
                    cin>>time;
                    cout<<"Available physician name: "<<name2<<endl;
                }
                if ( receptionist_opt == 3 )
                {
                    cout<<" ***** Viewing Patient Record ***** "<<endl;
                    cout<<"----------------------------------------"<<endl;
                    cout<<"Name: "<<name3<<endl;
                    cout<<"Gender: "<<gender3<<endl;
                    cout<<"Age: "<<age3<<endl;
                    cout<<"Prescription for patient:"<<prescription<<endl;
                    cout<<"Medical diagnosis: "<<diagnosis<<endl;
                    cout<<"Type back to return to receptionist module "<<endl;
                    cin>>back_opt;
                    system("cls");                     
                }
            }
            else 
            {
                cout<<"Please enter correct credentials"<<endl;
            }
        }
        if  ( opt == 5 )
        {
            int pharmacist_opt;
            int removing_option;


            cout<<"Main Menu>Pharmacist Module"<<endl;
            cout<<"------------------------------------"<<endl;
            cout<<"Enter your Username"<<endl;
            cin>>username5;
            cout<<"Enter your Password"<<endl;
            cin>>password5;
            system("cls");

            if ( username5 == "Pharmacist*123" && password5 == "password_123"  )
            {
                cout<<"Main Menu>Pharmacist Module"<<endl;
                cout<<"----------------------------------------"<<endl;
                cout<<"1-Dashboard"<<endl;
                cout<<"2-Add medicine and inventory"<<endl;
                cout<<"3-Remove medicine and inventory"<<endl;
                cout<<"4-View available stock"<<endl;
                

                cout<<"Please enter your option"<<endl;
                cin>>pharmacist_opt;
                system("cls");


                if ( pharmacist_opt == 1 ) 
                {

                    cout<<" ***** Viewing Dashboard ***** "<<endl;
                    cout<<"----------------------------------------"<<endl;
                    cout<<"Name: "<<name5<<endl;
                    cout<<"Gender: "<<gender5<<endl;
                    cout<<"Age: "<<age5<<endl;
                    cout<<"Status: "<<status5<<endl;
                    cout<<"Email: "<<email5<<endl;
                    cout<<"Type back to return to pharmacist module "<<endl;
                    cin>>back_opt;
                    system("cls");                       
                }
                if ( pharmacist_opt == 2 )
                {
                    cout<<" ***** Adding medicine and inventory ***** "<<endl;
                    cout<<"----------------------------------------"<<endl;
                    cout<<"Enter three medicine and three inventory "<<endl;
                    cout<<"Enter medicine name"<<endl;
                    cin>>medicine1;
                    cout<<"Enter medicine name"<<endl;
                    cin>>medicine2;
                    cout<<"Enter medicine name"<<endl;
                    cin>>medicine3;
                    cout<<"Enter inventory name"<<endl;
                    cin>>inventory1;
                    cout<<"Enter inventory name"<<endl;
                    cin>>inventory2;
                    cout<<"Enter inventory name"<<endl;
                    cin>>inventory3;
                } 
                if ( pharmacist_opt == 3 )
                {
                    
                    cout<<" ***** Removing Medicine or Inventory ***** "<<endl;
                    cout<<"----------------------------------------"<<endl;
                    cout<<"Enter item which you want to remove"<<endl;
                    cout<<"1-Medicine1 "<<endl;
                    cout<<"2-Medicine2 "<<endl;
                    cout<<"3-Medicine3 "<<endl;
                    cout<<"4-Inventory1 "<<endl;
                    cout<<"5-Inventory2 "<<endl;
                    cout<<"6-Inventory3 "<<endl;       
                    cin>>removing_option;
                    system("cls");

                    if ( removing_option == 1 )
                    {
                        medicine1 = "";
                    }
                    if ( removing_option == 2 )
                    {
                       medicine2 = "";
                    }
                    if ( removing_option == 3 )
                    {
                        medicine3 = "";
                    }
                    
                    if ( removing_option == 4 )
                    {
                        inventory1 = "";
                    }

                    if ( removing_option == 5 )
                    {
                        inventory2 = "";
                        
                    }
                    if ( removing_option == 6 )
                    {
                        inventory3 = "";
                    }
                }
                if ( pharmacist_opt == 4 )
                {
                    cout<<" ***** Viewing available stock ***** "<<endl;
                    cout<<"----------------------------------------"<<endl;
                    cout<<"Medicine1: "<<medicine1<<endl;
                    cout<<"Medicine2: "<<medicine2<<endl;
                    cout<<"Medicine3: "<<medicine3<<endl;
                    cout<<"Inventory1: "<<inventory1<<endl;
                    cout<<"Inventory2: "<<inventory2<<endl;
                    cout<<"Inventory3: "<<inventory3<<endl;
                }

            }
            else
            {
                cout<<"Please enter correct credentials"<<endl;
            }
        }
        if  ( opt == 6 )
        {
            int accountant_opt;


            cout<<"Main Menu>Accountant Module"<<endl;
            cout<<"------------------------------------"<<endl;
            cout<<"Enter your Username"<<endl;
            cin>>username6;
            cout<<"Enter your Password"<<endl;
            cin>>password6;
            system("cls");

            if ( username6 == "Accountant*123" && password6 == "password_123"  )
            {
                
                cout<<"Main Menu>Accountant Module"<<endl;
                cout<<"----------------------------------------"<<endl;
                cout<<"1-Dashboard"<<endl;
                cout<<"2-Generate hospital bill"<<endl;
                cout<<"3-View bill"<<endl;


                cout<<"Please enter your option"<<endl;
                cin>>accountant_opt;
                system("cls");


                if ( accountant_opt == 1 ) 
                {

                    cout<<" ***** Viewing Dashboard ***** "<<endl;
                    cout<<"----------------------------------------"<<endl;
                    cout<<"Name: "<<name6<<endl;
                    cout<<"Gender: "<<gender6<<endl;
                    cout<<"Age: "<<age6<<endl;
                    cout<<"Status: "<<status6<<endl;
                    cout<<"Email: "<<email6<<endl;
                    cout<<"Type back to return to accountant module "<<endl;
                    cin>>back_opt;
                    system("cls");                       
                }
                if ( accountant_opt == 2 ) 
                {
                    cout<<" ***** Generating Bill ***** "<<endl;
                    cout<<"----------------------------------------"<<endl;
                    cout<<"Enter charges for private room "<<endl;
                    cin>>room_charges;
                    cout<<"Enter charges for laboratory tests "<<endl;
                    cin>>laboratory_amount;
                    cout<<"Enter charges for medicine and inventory used "<<endl;
                    cin>>medicine_amount;

                    total_bill = medicine_amount + laboratory_amount + room_charges;

                    

                }
                if ( accountant_opt == 3 ) 
                {
                    cout<<" ***** Viewing Bill ***** "<<endl;
                    cout<<"----------------------------------------"<<endl;
                    cout<<"Room charges: "<<room_charges<<endl;
                    cout<<"Medicine bill: "<<medicine_amount<<endl;
                    cout<<"Laboratory bill: "<<laboratory_amount<<endl;
                    cout<<"Total bill: "<<total_bill<<endl;
                }
            }
            else
            {
                cout<<"Please enter correct credentials"<<endl;
            }
        }
            
    }
    else
    {
        cout<<"Program ends"<<endl;

    }


}