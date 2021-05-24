

#include <iostream>
using namespace std;

struct pay{

	string first_name;
	string middle_name;
	string last_name;
	string street_address;
	string suburb;
	string city;
	string contact_number;
	string email;
	int IRD;
	int postcode;
	float hours_worked;
	float hourly_pay_rate;
	float gross_weekly_pay;
	float tax_rate;
	float tax_deducted;
	float net_weekly_pay;
     char tax_code;
};




int main()
{

	int i;
	int start_date ,end_date;
struct pay workers[2];

		for (i = 0; i < 2; i++) {
			
			
			cout << "\n**********************************************";
			cout<<"\nEnter information for Employee #" << i + 1;
		    cout <<"\n**********************************************";




			cout << "\nplease enter the first name of worker " << i + 1 << ": ";
			cin >> workers[i].first_name;

			cout << "\nplease enter the middle name of worker " << i + 1 << ": ";
			cin >> workers[i].middle_name;

			cout << "\nplease enter the last name of worker " << i + 1 << ": ";
			cin >> workers[i].last_name;

			cout << "\nplease enter the street address of worker " << i + 1 << ": ";
			cin >> workers[i].street_address;
            
			cout << "\nplease enter the suburb of worker " << i + 1 << ": ";
			cin >> workers[i].suburb;

            cout << "\nplease enter the city of worker " << i + 1 << ": ";
			cin >> workers[i].city;
            
			cout << "\nplease enter the contact number of worker " << i + 1 << ": ";
			cin >> workers[i].contact_number;

            cout << "\nplease enter the email address of worker " << i + 1 << ": ";
			cin >> workers[i].email;

			cout << "\nplease enter the IRD number of worker " << i + 1 << ": ";
			cin >> workers[i].IRD;

			cout << "\nplease enter the hours worked by worker " << i + 1 << ": ";
			cin >> workers[i].hours_worked;

			cout << "\nplease enter the hourly pay rate of worker " << i + 1 << ": ";
			cin >> workers[i].hourly_pay_rate;

			cout << "\nplease enter gross weekly pay of worker " << i + 1 << ": ";
			cin >> workers[i].gross_weekly_pay;

			cout << "\nplease enter the tax rate of worker  " << i + 1 << ": ";
			cin >> workers[i].tax_rate;

			cout << "\nplease enter the tax deduction of worker  " << i + 1 << ": ";
			cin >> workers[i].tax_deducted;

			cout << "\nplease enter the net weekly pay of worker  " << i + 1 << ": ";
			cin >> workers[i].net_weekly_pay;

			cout << "\nplease enter the post code of worker  " << i + 1 << ": ";
			cin >> workers[i].postcode;
            
			cout << "\nplease enter the tax code of worker  " << i + 1 << ": ";
			cin >> workers[i].tax_code;

			cout << "\n please enter start date for worker "<<i + 1<<": ";
			cin >> start_date;

			cout << "\n please enter end date for worker " << i + 1 << ": ";
			cin>> end_date;

	        }


		for (i = 0; i < 2; i++) {

			cout << "\n**************************************************************************************";
			cout << "payslip for worker " << i + 1 << "starting on "<<start_date<< "and ending on"<<end_date;
			cout << "\n**************************************************************************************";

			cout << "\nName:" << workers[i].first_name<<workers[i].middle_name << workers[i].last_name;
			cout << "\nAddress:" << workers[i].street_address << workers[i].suburb << workers[i].city;
			cout << "\nContact Number:" << workers[i].contact_number;
			cout << "\nEmail Address:" << workers[]i.email;
			cout << "\nIRD Number:" << workers[i].IRD;
			cout << "\nTax Code:" << workers[i].tax_code;
			cout << "\nHours Worked:" << workers[i].hours_worked;
			cout << "\nHourly Rate:" << workers[i].hourly_pay_rate;
			cout << "\nTax Rate:" << workers[i].tax_rate;
			cout << "\nTax Deducted:" << workers[i].tax_deducted;
			cout << "\nNet Pay:" << workers[i].net_weekly_pay;





		}



}

