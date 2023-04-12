#include <iostream>
using namespace std;


int main() {
int counter, option;
float amount, balance=1000.00;
string ref, phone, pin, main_pin="0000";
char confirm;

cout<<"Welcome Mobile Money Services\n";
cout<<endl;
cout<<"\nSELECT OPTION 1-3\n";
cout<<"1. Transfer Money\n";
cout<<"2. Check Balance\n";
cout<<"3. Reset or Change Pin\n";
cin>>option;

switch (option){
	case 1:
		cout<<"Enter number:\n";
		cin>>phone;
		
		cout<<"Enter amount:\n";
		cin>>amount;
		
		cout<<"Enter reference:\n";
		cin>> ref;
		
		cout<<"Verify your pin to send"<<" "<<amount<<" "<<"to"<<" "<<phone<<":\n";moses:
			cin >>pin;
			
			if(pin!=main_pin){
				cout<<"Wrong pin,Try again";
				counter++;
				if(counter==3){
					cout<<"Too many attempts\n\n\a +233595178030-#moseslabes"; 
					return 0;
				}
				goto moses; 
			}
			 
			
			else {
				cout<<"Amount of "<<amount<<" "<<"sent to "<<" "<<phone<<" "<<"with reference"<<ref<<endl;
				cout<<"Current Balance is GHC "<<balance-amount;
				
			}
			break;
			case 2:
			cout<<"verify pin:";moseslabs:
			cin>>pin;
			if(pin!=main_pin){
				cout<<"wrong pin, try again";goto moseslabs;
			}
			if (counter==3){
				cout<<"too many attemps \n\n\a";
				return 0;
			}
			else {
				cout<<"Account balance is"<<" "<<balance;
				
				
			}
			break;
			case 3:
				cout<<"Reset or change pin (Y or N)\n";
				
				"Enter [Y||N] to confirm:";
				cin>>confirm;
				
				if(confirm=='Y'||confirm=='y'){
					cout<<"Enter new pin";
					cin >>pin;
					
					cout<<"Pin reset succesful to"<<pin<<endl;
					
				}
				else if(confirm=='N'||confirm=='n'){
					cout<<"Canceled!!";
					
				}
				else {
					cout<<"Wrong input";
				}
				
			default:
			cout<<"Invalid Option";
			break;	
}
	
	
	
	return 0;
}
