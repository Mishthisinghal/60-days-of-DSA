// code 1

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,x,y;
	cin>>a>>b>>x>>y;
	cout<<(a*x)+(b*y)<<endl;
	return 0;
}

// code 2

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	if(n%55==0){
	    cout<<"BOTH"<<endl;
	}else if((n%5==0 || n%11==0)&&(n%55!=0)){
	    cout<<"ONE"<<endl;
	}else{
	    cout<<"NONE"<<endl;
	}
	return 0;
}

// code 3

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long int n;
	cin>>n;
	long int arr[n];
	long int ind=0,c=0;
	for(int i=1;i<=n/2;i++){
	    if(n%i==0){
	        ++c;
	        arr[ind]=i;
	        ind++;
	    }
	}
	cout<<c+1<<endl;
	for(int j=0;j<c;j++){
	    cout<<arr[j]<<" ";
	}
	cout<<n;
	return 0;
}

// code 4

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int a,b,c;
	cin>>a>>b>>c;
	if((a>b && b>c) || (a<b && b<c)){
	    cout<<b<<endl;
	}else if((b>a && a>c)||(b<a && a<c)){
	    cout<<a<<endl;
	}else{
	    cout<<c<<endl;
	}
	return 0;
}

// code 5

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long int l,r;
	long long int i;
	cin>>l>>r;
	if(l%2==0){
	    i=l+1;
	    
	}else {
	    i=l;
	}
	while(i<=r){
	        cout<<i<<" ";
	        i += 2;
	    }
	return 0;
}

// code 6
 #include <iostream>
using namespace std;

int main() {
	// your code goes here
	long int n;
	cin>>n;
	if(n%5==0 || n%6==0){
	    cout<<"YES"<<endl;
	}else{
	    cout<<"NO"<<endl;
	}
	return 0;
}

// code 7

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long int n;
	cin>>n;
	long int a[n];
	for(long int i=0;i<n;i++){
	    cin>>a[i];
	}
	for(long int j=n-1;j>=0;j--){
	    cout<<a[j]<<" ";
	}
	return 0;
}

// code 8

using namespace std;

int main() {
	// your code goes here
	long int n,k;
	int flag=0;
	cin>>n>>k;
	long int arr[n];
	for(long int i=0;i<n;i++){
	    cin>>arr[i];
	}
	for(long int j=0;j<n;j++){
	    if(arr[j]==k){
	        flag=1;
	        break;
	    }
	}
	if(flag==1){
	    cout<<"1"<<endl;
	}else{
	    cout<<"-1"<<endl;
	}
	return 0;
}

// code 9

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long int a,b,c;
	cin>>a>>b>>c;
	if((a+b>c)&&(b+c>a)&&(a+c>b)){
	    cout<<"YES"<<endl;
	}else{
	    cout<<"NO"<<endl;
	}
	return 0;
}

// code 10

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
	    for(int j=n-1;j>=i;j--){
	        cout<<" ";
	    }
	    for(int k=0;k<i;k++){
	        cout<<"*";
	    }
	    cout<<endl;
	}
	return 0;
}

// code 11
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int n;
	cin>>n;
	cout<<(n*(n+1))/2<<endl;
	return 0;
}

// code 12

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long int n;
	cin>>n;
	cout<<(n/2)*(2+((n-1)*2))<<endl;
	cout<<(n/2)*(4+((n-1)*2))<<endl;
	return 0;
}

// code 13
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b+c==180 && a!=0 && b!=0 && c!=0){
	    cout<<"YES"<<endl;
	}else{
	    cout<<"NO"<<endl;
	}
	return 0;
}

// code 14
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b>c && b+c>a && a+c>b){
	    if(a==b && b==c){
	        cout<<"1"<<endl;
	    }else if((a==b && a!=c)||(b==c && a!=b)||(a==c && a!=b)){
	        cout<<"2"<<endl;
	    }else{
	        cout<<"3"<<endl;
	    }
	}else{
	    cout<<"-1"<<endl;
	}
	return 0;
}

// code 15
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
	    if(i%2!=0){
	        for(int j=5*(i-1)+1;j<=5*i;j++){
	            cout<<j<<" ";
	        }
	    }else{
	        for(int k=5*i;k>5*(i-1);k--){
	            cout<<k<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}