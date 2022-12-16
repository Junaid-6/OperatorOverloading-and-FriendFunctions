#include<iostream>
using namespace std;

class Counter{
	int value;
	public:
		friend void Reset(Counter &obj);
		friend void display(Counter c);
		
		Counter(){ 	this->value = 0; 	}
		
		void operator ++(){ this->value++; 	}
		
		void operator ++(int){  this->value++; 	}
		
		void operator --(){ this->value--;	}
		
		void operator --(int){ 	this->value--; 	}
		
		void Increment () { this->value++;	}
		
		void Decrement () { this->value--;	}
			
};
void display(Counter c){ cout<<c.value<<endl; }
void Reset(Counter &obj){
	obj.value = 0;
	}
int main(){
	Counter c1;   display(c1);
	cout<<"Increment: ";    c1++;         display(c1); 
	cout<<"Decrmennt: ";  	c1--;		  display(c1);
	cout<<"Reset:  ";		Reset(c1);    display(c1);
}
