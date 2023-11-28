#include<iostream>
using namespace std;

int check_bound(int i, int n){
	bool ans = (i+1 < n)? true : false;
	return ans;
}


int main(){
	
	while(true){
	
	int i,j,n;
	string str;
	bool ans = true;
	
	cout<<"\nEnter string: ";
	cin>>str;
	if (str == "break")	break;
	
	n = str.length();
	
	if (n==0)	ans = true;
	
	else if ((n==1) && ((str[0] == '0') || (str[0] == '1') || (str[0] == '2')))	ans = true;
	
	else{
		for(i=0;i<n;i++){
			if ((str[i] == '0') && (check_bound(i,n)) ){
				if ((str[i+1] == '2') && (check_bound(i,n)) ){
					for(j=i+1; j < n; j++){
						if ((check_bound(j,n)) && ((str[j+1] == '1') || (str[j+1] == '0')))
							ans = false;
					}
				}
			}
			
			if ((str[i] == '1') && (check_bound(i,n)) ) {
				if ((str[i+1] == '1') || (str[i+1] == '2'))	ans = true;
				else	ans = false;
			}
			
			if ((str[i] == '2') && (check_bound(i,n)) ) {
				if (str[i+1] != '2')	ans = false;
			}
			
		}
			
	}		
	
	cout<<ans;
}
	return 0;
}
