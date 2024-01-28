#include <iostream>
#include<cstdio>
#include<conio.h>
#include<string.h>
#include<cstdlib>

using namespace std;
static int p=0;
class a
{
	char buses[5],drivers[10],arrival[5],depart[5],from[10],to[10],seat[8][4][10];
	
	 public:
	 	  void install();
	 	  void allotment();
	 	  void empty();
	 	  void show();
	 	  void avail();
	 	  void position(int i);
	 	  
	 	  
}

  bus[10];
  void vline(char ch)
  {
  	for(int i=80;i>0;i--)
  	 cout<<ch;
  }
  
  void a::install()
  {
  	cout<<"Enter the Bus No: ";
  	cin>>bus[p].buses;
  	cout<<"\nEnter Driver's name: ";
  	cin>>bus[p].drivers;
  	cout<<"\nArrival Time: ";
  	cin>>bus[p].arrival;
  	cout<<"\nDeparture: ";
  	cin>>bus[p].depart;
  	cout<<"\nFrom: \t\t\t ";
  	cin>>bus[p].from;
  	cout<<"\nTo: \t\t\t";
  	cin>>bus[p].to;
  	
  	bus[p].empty();
  	p++;
  	
  }
  
  void a::allotment()
  {
  	int seat;
  	char number[5];
  	top:
  		cout<<"Bus no:  ";
  		cin>>number;
  		int n;
  		for(int i=0;i<n;i++)
  		{
  			if(strcmp(bus[n].buses,number)==0)
  			break;
		  }
		  
		  while(n<=p)
		  {
		  	cout<<"\nSeat Number: ";
		  	cin>>seat;
		  	if(seat>32)
		  	{
		  		cout<<"\nThere are only 32 seats available in this bus.";
		  		
			  }
			  else
			  {
			  	if(strcmp(bus[n].seat[seat/4][(seat%4)-1], "Empty")==0)
			  	{
			  		cout<<"Enter Passenger's name: ";
			  		cin>>bus[n].seat[seat/4][(seat%4)-1];
			  		break;
			  		
				  }
				  else
				  
				  	cout<<"The seat no is already reserved.\n";
				  }
				  }
				  if(n>p)
				  {
				  	cout<<"Enter correct bus no.\n";
				  	goto top;
				  }
			  }
			  
	void a::empty()
	{
	   for(int i=0;i<8;i++)
	   {
	   	for(int j=0;j<4;j++)
	   	{
	   		strcpy(bus[p].seat[i][j],"Empty");
	   		
		   }
		   }	
	}
	
	void a::show()
	{
		
		char number[5];
		cout<<"Enter Bus No: ";
		cin>>number;
		int n;
		for(int n=0;n<=p;n++)
		{
			if(strcmp(bus[n].buses,number)==0)
			break;
		}
		
		while( n<=p)
		{
			vline('*');
			cout<<"Bus no: \t"<<bus[n].buses<<"\nDriver: \t"<<bus[n].drivers<<"\t\tArrival Time: "<<bus[n].arrival
		       	<<"\tDeparture time: "<<bus[n].depart<<"\nFrom: \t\t"<<bus[n].from<<"\t\tTo: \t\t"<<bus[n].to<<"\n";
		    
		    vline('*');
		    bus[0].position(n);
		    int a=1;
		    
		    for(int i=0;i<8;i++)
		    {
		    	for(int j=0;j<4;j++)
		    	{
		    		a++;
		    		if(strcmp(bus[n].seat[i][j],"Empty")!=0)
		    		cout<<"\nThe seat no "<<(a-1)<<"is reserved for"<<bus[n].seat[i][j]<<".";
		    		
				}
			}
			break;
			
		    
		}
		  if(n>p)
		    cout<<"Enter the correct bus no: ";
	}
	
	void a::position(int l)
	{
		int s=0;
		int p=0;
		for(int i=0;i<8;i++)
		{
			cout<<"\n";
			for(int j=0;j<4;j++)
			{
				s++;
				if(strcmp(bus[l].seat[i][j],"Empty")==0)
				    {
					cout.width(5);
					cout.fill(' ');
					cout<<s<<".";
					cout.width(10);
					cout.fill(' ');
					cout<<bus[l].seat[i][j];
					p++;
					
			     	}
			     	
				else
			    {
				
					cout.width(5);
					cout.fill(' ');
					cout<<s<<".";
					cout.width(10);
					cout.fill(' ');
					cout<<bus[l].seat[i][j];
			    }
			}
		}
		cout<<"\n\nThere are "<<p<<"seats empty in BUs No: "<<bus[l].buses;
		
	}
	
	void a::avail()
	{
		for(int n=0;n<p;n++)
		{
			vline('*');
			cout<<"Bus No: \t"<<bus[n].buses<<"\nDriver: \t"<<bus[n].drivers<<"\t\tArrival Time: \t"<<bus[n].arrival<<"\tDeparture Time: \t"<<bus[n].depart<<"\nFrom: \t\t"<<bus[n].from<<"\t\tTo: \t\t\t"<<bus[n].to<<"\n";
			
			vline('*');
			vline('_');
			
		}
	}
	
	int main()
	{
	   system("cls");
	   int w;
	   while(1)
	   {
	   	cout<<"\n\n\n\n\n";
	   	cout<<"\t\t\t1.Install\n\t\t\t"
	   	    <<"2.Reservation\n\t\t\t"
	   	    <<"3.Show\n\t\t\t"
	   	    <<"4.Buses Available. \n\t\t\t"
	   	    <<"5.Exit";
	   	    cout<<"\n\t\t\tEnter your choice:-> ";
	   	    cin>>w;
	   	    switch(w)
	   	    {
	   	    	case 1:bus[p].install();
	   	    	 break;
	   	    	 case 2:bus[p].allotment();
	   	    	 break;
	   	    	 case 3:bus[p].show();
	   	    	 break;
	   	    	 case 4:bus[p].avail();
	   	    	 break;
	   	    	 
	   	    	 case 5:exit(0);
			   }
		   }
		   return 0;	
	}
	
