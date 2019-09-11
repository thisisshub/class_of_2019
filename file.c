#include<iostream>
#include<algorithm>

using namespace std;

class db;

class dm{
	float meter , centimeter;
public:
	dm(){
		meter = 0; centimeter = 0;	
	}	
	dm(float mtr, float centimtr){
		meter = mtr;
		centimeter = centimtr;
	}
	
	void getvalue(){
		cout<<"Enter Meters and Centimeter "<<endl;
		cin>>meter>>centimeter;
	}
	void setvalue(){
			cout<<"Meters = "<<meter<<"Centimeter = "<<centimeter<<endl;
	}

		friend void sumIt(dm , db);
};

class db{
	float foot , inch;
 public:
	db(){
			foot = 0; inch = 0;	
	}	
	db(float ft, float in){
		foot  = ft;
		inch = in;
	}
	
	void getvalue(){
		cout<<"Enter Foot and Inch "<<endl;
		cin>>foot>>inch;
	}
	void setvalue(){
			cout<<"Foot = "<<foot<<"Inch = "<<inch<<endl;
	}

		friend void sumIt(dm , db);
};


	void sumIt(dm a, db b){
		cout<<"If you want result in\n1.Meter\n2.Foot"<<endl;
		float aa,rb,rs;
		cin>>aa;
		if(aa == 1){
			b.inch= b.inch*2.54;
			b.foot = b.foot*0.3048;
			rb = a.meter + b.foot;
			rs = a.centimeter + b.inch;
	
		while (rs > 100){
			rs = rs - 100;
			rb++;
		}
	       
		 cout<<"Meter = "<<rb<<"Centimeter = "<<rs<<endl;
	}

		else{
			a.meter = a.meter*3.280841;
			rb = a.meter + b.foot;
			rs = a.centimeter + b.inch;				
			cout<<"Foot = "<<rb<<"Inch = "<<rs<<endl;
		
		while(rs > 12){
			rs = rs - 12;
			rb++;	
		}
		
		
	}
}
	
int main(void){
	
	dm a1;
	a1.getvalue();
	db a2;
	a2.getvalue();
	sumIt(a1,a2);
	
}
