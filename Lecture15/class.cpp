#include<iostream>
using namespace std;


//------------------------BLUE PRINT----------------------------------
class car
{
   int seats;

 	public:

 	char *name;
 	int model;
 	int price;
 	
 	car()
 	{
 		name=NULL;
 		// cout<<"Hello"<<endl;
 	}

 	// car(char *ch,int m,int p)
 	// {
 	// 	cout<<"here"<<endl;
 	// 	strcpy(name,ch);
 	// 	price=p;
 	// 	model=m;
 	// 	seats=4;
 	// }

 	car(char *ch,int m,int p,int s)
 	{
 		name=new char[strlen(ch)+1];
 		strcpy(name,ch);
 		price=p;
 		model=m;
 		seats=s;
 	}



 	void print()
 	{
 		cout<<name<<endl;
 		cout<<model<<endl;
 		cout<<price<<endl;
 		cout<<seats<<endl;
 	}


 	void setValues(char *ch,int m,int p,int s)
 	{
 		if(name!=NULL)
 		{
 			delete []name;
 			name=NULL;
 		}
 		name=new char[strlen(ch)+1];
 		strcpy(name,ch);
 		model=m;
 		price=p;
 		seats=s;
 	}

 	void setSeats(int s)
 	{
 		if(seats>0)
 		{
 			seats=s;
 		}
 		else
 		{
 			seats=4;
 		}
 		
 	}
    
    int getSeats()
    {
    	return seats;
    }

    void setName(char *ch)
    {
    	if(name!=NULL)
    	{
    		delete []name;
    		name=NULL;
    	}
    	name=new char[strlen(ch)+1];
    	strcpy(name,ch);
    }



};


int main()
{
	// car A,B;
	// cout<<endl;
	car C("Audi",90,1000,4);
	C.print();
	cout<<endl;

	// C.setValues("honda",78,1000,4);
	// C.print();
	// cout<<endl;

	// C.setName("BMW");
	// cout<<C.name<<endl;


	car D(C);
	D.print();

	car E=D;
	E.print();
	// car D("Audi",99,1100);
	// D.print();
	// cout<<endl;
	// A.model=45;
	// strcpy(A.name,"BMW");
	// A.price=100;
	// // A.seats=4;
	// A.setSeats(-1);

	// A.print();

	// cout<<A.name<<endl;
	// cout<<A.model<<endl;
	// cout<<A.price<<endl;
	// cout<<A.getSeats()<<endl;
	// cout<<A.seats<<endl;

	// cout<<endl;

	// B.model=90;
	// strcpy(B.name,"Audi");
	// B.price=800;
	// // B.seats=4;

	// B.print();
	// cout<<endl;

	// car C;
	// C.setValues("honda",78,1000,4);
	// C.print();
	// cout<<endl;





	return 0;
}










