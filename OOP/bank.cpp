/*class bank

2 drived class current acc and saving acc

saving interest add to balance 
current minimum balance less then mini penalty inforce 
funtion		- 	withdraw 
			- 	deposite
			-	


*/

#include<iostream>

using namespace std;

class bank{
   protected:
	 	string name ;
	 	int accnum ;
	 	float balance ; 
   public:
	 	void get(){
	 		cout<<"Enter you name , accnum , balance\n"<<endl;
	 		cin>>name>>accnum>>balance;
	 	} 
	 	
	 	void set(){
	 		cout<<"Name :"<<name<<"\nAccount Number :"<<accnum<<"\nBalance is :"<<balance<<endl;
	 	}
	 	
	 	void show(){
			cout<<"Balance :"<<balance<<endl;
		}
		
		void deposit(int dep){
			balance = balance + dep;
			cout<<"Money to be added is "<<dep<<endl;
			show();
		}
		
		void withdraw(int with){
			if(with>balance){
				cout<<"Insufficient funds\n";
			}
			else{
				balance = balance - with;
			}
			cout<<"Money to withdrawed "<<with<<endl;
			show();
		}
		
};

class curAcc : public bank{
	public:	
		curAcc(){
			cout<<"This Account is Current Account"<<endl;
		}
		void penalty(){
				cout<<"Your balance is low , you're fined Rs 300"<<endl;
				balance = balance - 300;
		}
				
		void check(){
				if(balance<2500){
					penalty();
					show();
				}
		}
};

class savAcc : public bank{
		float intr;
	public:
		savAcc(){
			cout<<"This Account is a Savings Account"<<endl;
		}
		void interest(){
				intr = (balance * 6)/100;
				cout<<"Interest is :"<<intr<<endl;
				balance = balance + intr;
				show();			
		}
};

int main(void){
		int val;
		curAcc b1;
		b1.get();
		b1.set();
		b1.check();
		cout<<"Enter the amount to deposit\n";
		cin>>val;
		b1.deposit(val);
		cout<<"Enter the amount to withdraw\n";
		cin>>val;
		b1.withdraw(val);
		b1.check();
		
		savAcc b2;
		b2.get();
		b2.set();
		b2.interest();
		cout<<"Enter the amount to deposit\n";
		cin>>val;
		b2.deposit(val);
		cout<<"Enter the amount to deposit\n";
		cin>>val;
		b2.withdraw(val);
		b2.interest();
}
