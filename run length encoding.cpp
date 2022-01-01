// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
  string encode="";
  int n = src.length();
  int count=0,i;
  for(int i=0; i<n; i++){
      count=0;
      while(src[i]==src[i+1]){
          count++;
          i++;
      }
      count++;
      encode = encode+src[i]+to_string(count);
  }
  
  return encode;
}     
 
