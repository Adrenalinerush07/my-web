#include<bits/stdc++.h>
#define xx first
#define yy second
#define yo long long int
#define for(a,b) for(int i=a;i<b;i++)
using namespace std;
int main()  {
            ios_base::sync_with_stdio(false);
            cin.tie(NULL);
            yo t;
            cin>>t;
            while(t--){
                yo n,k;
                cin>>n>>k;
                yo w[n];
                yo sum=0,sum1=0,sum2=0;;
                for(0,n)
                    cin>>w[i];
                sort(w,w+n);
                sum=accumulate(w,w+n,0);
                sum1=accumulate(w,w+k,0);
                sum2=accumulate(w+n-k,w+n,0);
                cout<<abs(sum1-(sum-sum1))<<endl;
                cout<<abs(sum2-(sum-sum2))<<endl;
                cout<<max(abs(sum1-(sum-sum1)),abs(sum2-(sum-sum2)))<<endl;
            }
    return 0;
}
