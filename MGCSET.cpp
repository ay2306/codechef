#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n , m;
		cin >> n >> m;
		int * arr = new int [n];
		int count = 0;
		for (int i=0;i<n;++i){
			 cin >> arr[i];
			if (arr[i] % m){
				
			}
			else{
				count++;
			}
		}
		int result ;
		result == (1<<count);
//		result -= 1;
		cout << result << endl;
	}
	return 0;
}
