#include <iostream>
#include<stdlib.h>

#include<cstring>
using namespace std;

struct student{
char name [80];
int rollNo;
float prog,eng,phy,paks,sum,average;	
};

// Global Variable of "Student" data type 
student s;

void mainmenu();
void acceptdata();
void view_Specific(int);
void deleterecord(int);
void modify(int);

int main()
{
	while(1)
		mainmenu();
		
	return 0;
}

//Main Menu of the program	
void mainmenu ()
	{
	system("cls");
   system("color 1");
		char zz;
		
	cout<<"\t\t\t    ***********       MAIN MENU        ************          \n\n"<<endl;
    cout<<"\t\t\t     1-CREATE STUDENT REPORT CARD         "<<endl;  
    cout<<"\t\t\t     2-VIEW A SINGLE STUDENT REPORT CARD   "<<endl; 
    cout<<"\t\t\t     3-MODIFY REPORT CARD                  "<<endl;    
    cout<<"\t\t\t     4-DELETE RECORD                       "<<endl;
    cout<<"\t\t\t     5-Exit                                "<<endl;
    cout<<"\t       ***********                ***********          ************         ********           "<<endl;   
    cout<<"\t\t\t             PLEASE ENTER YOUR CHOICE ( 1-5 ) : ";
    
    cin>>zz;
    cout<<endl;
    switch(zz)
    {
    case '1':
        {
            acceptdata();
            break;
        }
    case'2':
        {
        	int n;
        	cout<<"ENTER YOUR ROLL NO: ";
        	cin>>n;
        	view_Specific(n);
        	break;	
		}
	case '3':
		{
			int n;
			cout<<"ENTER YOUR ROLL NO: ";
			cin>>n;
			modify(n);
			break;	
		}
    case '4':
        {
            int n;
            cout<<"ENTER YOUR ROLL NO: ";
            cin>>n;
            cout<<endl;
            deleterecord(n);
            break;
        }
    case '5':
    	{
    		getchar();
    		exit(0);
		}
    }
}

//Getting record of the student
void acceptdata ()
   {		
		cout<<"\n\n\n";
	  	cout<<"Enter YOUR FULL NAME =";
	  	cin.ignore();
	  	cin.getline(s.name,80);
	  	cout<<"ENTER YOUR ROLL NO   =";
	  	cin>>s.rollNo;
	  	cout<<"ENTER YOUR PROGRAMMING MARKS  =";
	  	cin>>(s.prog);
	  	cout<<"ENTER YOUR ENGLISH MARKS   =";
	  	cin>>s.eng;
	  	cout<<"ENTER YOUR PAK STUDIES MARKS   =";
	  	cin>>s.paks;
	  	cout<<"ENETR YOUR PHYSICS MARKS =";
	  	cin>>s.phy;
	  	s.sum=s.prog+s.eng+s.paks+s.phy;
	  	s.average=(s.sum/4);
	  	cout<<endl;
	  	cout<<"\n";
	  	cin.ignore();
	  	cout<<" Press any key to Continue ..";
	  	cin.get();
   }
   
// Single student report card view
void view_Specific(int n)
{	
	if(n==s.rollNo)
	{
		cout<<"\t\t\t STUDENT NAME           :"<<s.name<<endl;
		cout<<"\t\t\t STUDNET ROLL NUMBER    :"<<s.rollNo<<endl;	
		cout<<"\t\t\t PROGRAMMING MARKS      :"<<s.prog<<endl;
		cout<<"\t\t\t ENGLISH MARKS          :"<<s.eng<<endl;
		cout<<"\t\t\t PAK STUDIES MARKS      :"<<s.paks<<endl;
		cout<<"\t\t\t PHYSICS MARKS          :"<<s.phy<<endl;	
   		cout<<"\t\t\t SUM                    :"<<s.sum<<endl;
   		cout<<"\t\t\t AVERAGE                :"<<s.average<<endl;
	}
	else
		cout<<"No record found regarding to this roll number.";
}

//Modify a student record
void modify(int n)
{   
	char a;
    cout<<"\t\t\t  ****  MODIFY A REPORT CARD= *****  \n";     
    if(n==s.rollNo)
    {
    	cout<<"\t\t\t STUDENT NAME           :"<<s.name<<endl;
		cout<<"\t\t\t STUDNET ROLL NUMBER    :"<<s.rollNo<<endl;	
		cout<<"\t\t\t PROGRAMMING MARKS      :"<<s.prog<<endl;
		cout<<"\t\t\t ENGLISH MARKS          :"<<s.eng<<endl;
		cout<<"\t\t\t PAK STUDIES MARKS      :"<<s.paks<<endl;
		cout<<"\t\t\t PHYSICS MARKS          :"<<s.phy<<endl;

		
	    cout<<"============================================="<<endl;
    	cout<<"\t      ENTER THE NEW INFORMATION"<<endl;
    	cout<<"============================================="<<endl;

    	cout<<"\t\t\t (1) STUDENT NAME"<<endl;
		cout<<"\t\t\t (2) STUDNET ROLL NUMBER"<<endl;
		cout<<"\t\t\t (3) PROGRAMMING MARKS"<<endl;
		cout<<"\t\t\t (4) ENGLISH MARKS"<<endl;
		cout<<"\t\t\t (5) PAK STUDIES MARKS"<<endl;
		cout<<"\t\t\t (6) PHYSICS MARKS"<<endl; 	
    	cout<<"What you want to modify: ";
    	cin.ignore();
    	cin>>a;
    	
    	switch(a)
    	{
    		case '1':
    			{
	    			cout<<"Enter YOUR FULL NAME =";
					cin.ignore();
					cin.getline(s.name,80);    			
					cout<<"\t\t\t\tTHE RECORD IS SUCCESSFULLY updated"<<endl;
					break;
				}
    		case '2':
    			{
		  			cout<<"ENTER YOUR ROLL NO   =";
		  			cin>>s.rollNo;
		  			cout<<"\t\t\t\tTHE RECORD IS SUCCESSFULLY updated"<<endl;
					break;
				}				
	    	case '3':
    			{
					cout<<"ENTER YOUR PROGRAMMING MARKS  =";
		  			cin>>(s.prog);
		  			s.sum=s.prog+s.eng+s.paks+s.phy;
		  			s.average=(s.sum/4);	  			
		  			cout<<"\t\t\t\tTHE RECORD IS SUCCESSFULLY updated"<<endl;
					break;
				}    		
			case '4':
    			{
		  			cout<<"ENTER YOUR ENGLISH MARKS   =";
		  			cin>>s.eng;
		  			s.sum=s.prog+s.eng+s.paks+s.phy;
		  			s.average=(s.sum/4);	  			
		  			cout<<"\t\t\t\tTHE RECORD IS SUCCESSFULLY updated"<<endl;
					break;
				}    		
			case '5':
    			{
		  			cout<<"ENTER YOUR PAK STUDIES MARKS   =";
		  			cin>>s.paks;
		  			s.sum=s.prog+s.eng+s.paks+s.phy;
		  			s.average=(s.sum/4);				
					cout<<"\t\t\t\tTHE RECORD IS SUCCESSFULLY updated"<<endl;
					break;
				}    		
			case '6':
    			{
		  			cout<"ENETR YOUR PHYSICS MARKS =";
				  	cin>>s.phy;
		  			s.sum=s.prog+s.eng+s.paks+s.phy;
		  			s.average=(s.sum/4);
					cout<<"\t\t\t\tTHE RECORD IS SUCCESSFULLY updated"<<endl;
					break;
				}
		}
    }
	else
		cout<<"No student found regarding this roll number.";
}

//Delete a student record
void deleterecord(int n)
{  
    cout<<"\t\t\t\t===========DELETE A REPORT CARD==========\n\n";
    if(n=s.rollNo)
    {
    	strncpy(s.name, "", sizeof(s.name));
    	//s.name = "None";
    	s.rollNo=0;
    	s.eng=0;
    	s.paks=0;
    	s.prog=0;
    	s.sum=0;
    	s.average=0;
    	cout<<"\t\t Student Record is deleted"<<endl;	
	}
	else
		cout<<"Student record regarding to this roll number was not found.";
}
