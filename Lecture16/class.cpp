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
 	const int tyres;
 	static int count;
 	
 	car():tyres(4)
 	{
 		cout<<"IN DEFAULT CONSTRUCTOR"<<endl;
 		name=NULL;
 		count++;
 		// cout<<"Hello"<<endl;
 	}

 	car(char *ch,int m,int p):tyres(4),model(m)
 	{
 		count++;
 		cout<<"here"<<endl;
 		strcpy(name,ch);
 		price=p;
 		// model=m;
 		seats=4;
 	}

 	car(char *ch,int m,int p,int s):tyres(4),price(p),model(m),seats(s)
 	{
 		count++;
 		cout<<"IN PARAMETRISED CONSTRUCTOR"<<endl;
 		name=new char[strlen(ch)+1];
 		strcpy(name,ch);
 		// price=p;
 		// model=m;
 		// seats=s;
 	}



 	void print()const
 	{
 		cout<<"name is "<<name<<endl;
 		cout<<"model is "<<model<<endl;
 		cout<<"price is "<<price<<endl;
 		cout<<"seats are "<<seats<<endl;
 		cout<<"tyres are "<<tyres<<endl;
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
    
    int getSeats()const
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



    car(car &x):tyres(4)
    {
    	count++;
    	cout<<"IN COPY CONSTRUCTOR"<<endl;
    	name=new char[strlen(x.name)+1];
    	strcpy(name,x.name);
    	model=x.model;
    	price=x.price;
    	seats=x.seats;
    }


    void operator=(car x)
    {
    	if(name!=NULL)
    	{
    		delete []name;
    		name=NULL;
    	}

    	name=new char[strlen(x.name)+1];
    	strcpy(name,x.name);
    	model=x.model;
    	price=x.price;
    	seats=x.seats;
    }


    void operator+=(car x)
    {
    	char *oldname=name;
    	int l1=strlen(name);
    	int l2=strlen(x.name);
    	name=new char[l1+l2+1];
    	strcpy(name,oldname);
    	strcat(name,x.name);
    	delete []oldname;

    	model+=x.model;
    	price+=x.price;
    	seats+=x.seats;

    }


    // car* operator+(car x)
    // {
    // 	car *newcar=new car;

    // 	int l1=strlen(name);
    // 	int l2=strlen(x.name);
    // 	(*newcar).name=new char[l1+l2+1];
    // 	strcpy()

    // 	(*newcar).model=model+x.model;


    // 	return newcar;

    // }



    ~car()
    {
    	count--;
    	cout<<"deleting class "<<name<<endl;
    }
  



};


int car::count=0;


int main()
{
	car A;
	A.setName("honda");
	A.setSeats(4);
	A.model=100;
	A.price=1000;

	car B;
	B.setValues("maruti",78,9000,4);
	
	car C("Audi",90,1000,4);

	//2 ways for generating copy constructor
	car D(C);
	car E=D;

	E.name[0]='B';

	// car F;
	// F=A;

	// A+=C;



	car *G=new car("mahindra",90,1001,4);
	// car *H=B+C;

	A.print();
	cout<<endl;
	B.print();
	cout<<endl;
	C.print();
	cout<<endl;
	D.print();
	cout<<endl;
	E.print();
	cout<<endl;
	// F.print();
	// cout<<endl;
	// (*G).print();
	// cout<<endl;

	// cout<<"number of cars "<<car::count<<endl;
	// delete G;
	// cout<<"number of cars "<<car::count<<endl;

	
	

	





	return 0;
}



