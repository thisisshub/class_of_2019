/*create  two class dm and db which stores the value of distance 
dm store in meter and ceni
db in feet and inches 
wriete a progrsm that can read vaule and add one boject of dm with another object of dm 
use a friend functoin to 
 */

#include<iostream>

using namespace std;

class db;

class dm{

public:
	float meter , centimeter;

	dm(){
		meter = 0; centimeter = 0;	
	}	
	dm(int mtr, int centimtr){
		meter = mtr;
		centimeter = centimtr;
	}
	
	void getvlaue(){
		cout<<"Enter Meters and Centimeter "<<endl;
		cin>>meter>>centimeter;
	}
	void setvlaue(){
			cout<<"Meters = "<<meter<<"Centimeter = "<<centimeter<<endl;
	}

		friend void sumIt(dm , db);
};

class db{
  public:
	float foot , inch;

	db(){
			foot = 0; inch = 0;	
	}	
	db(int ft, int in){
		foot  = ft;
		inch = in;
	}
	
	void getvlaue(){
		cout<<"Enter Foot and Inch "<<endl;
		cin>>foot>>inch;
	}
	void setvlaue(){
			cout<<"Foot = "<<foot<<"Inch = "<<inch<<endl;
	}

		friend void sumIt(dm , db);
};


	void sumIt(dm a, db b){
		cout<<"If you want result in\n1.Meter\n2.Foot"<<endl;
		float aa,rb,rs;
		cin>>aa;
		if(aa == 1){
			b.inch = b.inch*2.54;
			b.foot = b.foot*0.3048;
			rb = a.meter + b.foot;
			rs = a.centimeter + b.inch;
	
			while(rs > 100){
				rs = rs - 100;
				rb++;		
			}
			

			cout<<"Meter = "<<rb<<" Centimeter = "<<rs<<endl;
		}
		else{
			a.meter = a.meter*3.280841666667;
			a.centimeter = a.centimeter*0.393701;
			rb = a.meter + b.foot;
			rs = a.centimeter + b.inch;				
			cout<<"Foot = "<<rb<<" Inch = "<<rs<<endl;

			while(rs > 12){
				rs = rs - 12;
				rb++;		
			}

		}
	}
	
int main(void){
	
	dm a1;
	a1.getvlaue();
	db a2;
	a2.getvlaue();
	sumIt(a1,a2);
	
}
