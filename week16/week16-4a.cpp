#include <iostream>
#include <stdio.h>
using namespace std;
int prime(int n){
	int ans;
	for(int i=2;i<n;i++){
		if(n%i==0){
			ans=0;
			break;
		}
		else ans=1;

	}
	return ans;
}
int main(){
  int n;cin>>n;
  cout<<"["<<prime(n)<<"]";
  return 0;
}
/* よ C++  main ㄧ计 单基 よ C  main ㄧ计
int main(void){
    int n;
    scanf("%d", &n);
    printf("[%d]", prime(n));
    return 0;
}
*/
