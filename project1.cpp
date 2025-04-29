#include<iostream>
using namespace std;
class number
{
	private:
		int no,rem,a,b;
    public:
	void numb()
	{
	   cout<<"\nEnter the number : ";
	   cin>>no;
	   if(no>=20 && no<=99)
	   {
	   rem =no%10;
	   no = no/10;	
	   switch(no)
	   {
	   	 case 1:cout<<" ";	break;
	   	 case 2:cout<<" twenty";break;
		 case 3:cout<<" thirty";break;	
		 case 4:cout<<" fourty";break;	
		 case 5:cout<<" fifty";break;	
		 case 6:cout<<" sixty";break;
		 case 7:cout<<" seventy";break;	
		 case 8:cout<<" eighty";break;	
		 case 9:cout<<" ninety";break;
		 case 0:cout<<" ";break;		
	   }
	   switch(rem)
	   {
	   	 case 1:cout<<" one";break;
	   	    case 2:cout<<" two";	break;
		    case 3:cout<<" three";break;	
	    	case 4:cout<<" four";break;	
		    case 5:cout<<" five";break;	
		    case 6:cout<<" six";break;
		    case 7:cout<<" seven";break;	
		    case 8:cout<<" eight";break;	
		    case 9:cout<<" nine";break;	
		    case 0:cout<<" ";break;
			
	   }
	}
	else if(no>=0 && no<=19) 
	{
		switch(no)
		{
			case 1:cout<<" one";break;
	   	    case 2:cout<<" two";	break;
		    case 3:cout<<" three";break;	
	    	case 4:cout<<" four";break;	
		    case 5:cout<<" five";break;	
		    case 6:cout<<" six";break;
		    case 7:cout<<" seven";break;	
		    case 8:cout<<" eight";break;	
		    case 9:cout<<" nine";break;	
			case 0:cout<<" ";break;
			case 11:cout<<"eleven ";break;
			case 12:cout<<" twelve";break;
			case 13:cout<<"thirteen";break;
			case 14:cout<<"fourteen ";break;
			case 15:cout<<"fifteen ";break;
			case 16:cout<<"sixteen ";break;
			case 17:cout<<"seventeen ";break;
			case 18:cout<<"eighteen ";break;
			case 19:cout<<"nineteen ";break;
				
			
		}
		
	}
	else if(no>=100 && no<=999)
			{
				a = no/100;
				b = (no%100)/10;
				rem = no%10;
				switch(a)
				{
					case 1:cout<<"\none hundred";break;
					case 2:cout<<"\ntwo hundred";break;
					case 3:cout<<"\nthree hundred";break;
					case 4:cout<<"\nfour hundred";break;
					case 5:cout<<"\nfive hundred";break;
					case 6:cout<<"\nsix hundred";break;
					case 7:cout<<"\nseven hundred";break;
					case 8:cout<<"\neight hundred";break;
					case 9:cout<<"\nine hundred";break;
					
				}
				switch(b)
	   {
	   	 case 1:cout<<" ";	break;
	   	 case 2:cout<<" twenty";break;
		 case 3:cout<<" thirty";break;	
		 case 4:cout<<" fourty";break;	
		 case 5:cout<<" fifty";break;	
		 case 6:cout<<" sixty";break;
		 case 7:cout<<" seventy";break;	
		 case 8:cout<<" eighty";break;	
		 case 9:cout<<" ninety";break;
		 case 0:cout<<" ";break;		
	  }
	  switch(rem)
	   {
	   	    case 1:cout<<" one";break;
			case 2:cout<<" two";break;
		    case 3:cout<<" three";break;	
		    case 4:cout<<" four";break;	
		    case 5:cout<<" five";break;	
		    case 6:cout<<" six";break;
		    case 7:cout<<" seven";break;	
		    case 8:cout<<" eight";break;	
		    case 9:cout<<" nine";break;	
		    case 0:cout<<" ";break;
			case 11:cout<<"eleven ";break;
			case 12:cout<<" twelve";break;
			case 13:cout<<"thirteen";break;
			case 14:cout<<"fourteen ";break;
			case 15:cout<<"fifteen ";break;
			case 16:cout<<"sixteen ";break;
			case 17:cout<<"seventeen ";break;
			case 18:cout<<"eighteen ";break;
			case 19:cout<<"nineteen ";break;		  
       }
    }
 }
};
int main()
{
	number x;
	x.numb();
}
