#include<iostream>
using namespace std;

class Point{
	int x, y;
	public:
		Point(){
			this->x = 0;
			this->y = 0;
		}
		Point(int x, int y){
			this->x = x;
			this->y = y;
		}
		void display(){
			cout<<"("<<this->x<<", "<<this->y<<")\n";
		}
		void operator ++(){
			this->x++;
			this->y++;
		}
		void operator ++(int){
			this->x++;
			this->y++;
		}
		void operator --(){
			this->x--;
			this->y--;
		}
		void operator --(int){
			this->x--;
			this->y--;
		}
		Point operator + (Point p1){
			Point resultant;
			resultant.x = this->x + p1.x;
			resultant.y = this->y + p1.y;
			return resultant;
		}
		Point operator - (Point p1){
			Point p;
			p.x = this->x - p1.x;
			p.y = this->y - p1.y;
			return p;
		}
		Point operator = (Point p){
			return p;
		}
		bool operator == (Point p){
			if(this->x == p.x && this->y == p.y )
				return true;
			else 
				return false;
		}
};
int main(){
	Point p1(3,3);
	p1.display();
	cout<<"Increament:\n";
	++p1;
	p1.display();
	cout<<"Decrement:\n";
	--p1;
	p1.display();
	cout<<"Adding\n";
	Point p3 = p1 + p1;
	p3.display();
	cout<<"Subtracting\n";
	Point p4 = p3 - p1;
	p4.display();	
}