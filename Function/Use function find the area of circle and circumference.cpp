#include <bits/stdc++.h>
using namespace std;
int square(int x){
	return x*x;
}
int area(int  r){
	
	return 2*3.142*r;
	
}
int diameter(int r ){
	return 3.142*square(r);

}
int main(){

	int r;
	cin>>r;
	cout<<"area of circle ="<<area(r)<<endl;
	cout<<"diameter of circle ="<<diameter(r);
	return 0;
}
