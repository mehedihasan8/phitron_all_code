#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin >> t;
   
   while(t--){
       int n;
       cin >> n;
       
       int arr[n];
       
       for(int i=0; i<n; i++)
           cin >> arr[i];
       
       sort(arr, arr+n);
       
       int min_val = arr[0];
       int max_val = arr[n-1];
       
       if(min_val % 2 == 0 && max_val % 2 == 0)
            cout << 0 << endl;

       else if(min_val % 2 != 0 && max_val % 2 != 0)
            cout << 0 << endl;

       else {
            int i = 0, cnt1 = 0;

            while(arr[i] % 2 != max_val % 2){
                i++;
                cnt1++;
            }
            
            int j = n-1, cnt2 =0;

            while(arr[j] % 2 != min_val % 2){
                j--;
                cnt2++;
            }

            cout << min(cnt1, cnt2) << endl;
        }
       
   }

    return 0;
}