#include <iostream>
using namespace std;

void recur(int no){

if(no==0)

return ;


if(no>0){
	if(no%2==0){
		recur(no-1);
	}
else{

cout<<no<<endl;
 recur(no-2);
}
}
}
void even(int nu){
if(nu==0)
return ;

if(nu>0){

	if(nu%2==0){
	
		even(nu-1);
		cout<<nu<<endl;
	}
	else{
		even(nu-1);
	}
}
}


int main(){
int n;
cin>>n;

recur(n) ;
even (n);

}
