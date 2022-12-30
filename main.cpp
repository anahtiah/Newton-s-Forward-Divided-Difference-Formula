#include <bits/stdc++.h>
using namespace std;
vector<double> y;
double d(int i,int j){
    if(i==0) return y[j];
    return d(i-1,j+1)-d(i-1,j);
}
int main(){
                unsigned int n;
                int x,x0,h;
                double p;
                cout<<"\n  Newton's Forward Divided Difference Formula\n  by Anahita Heydari\n\n  Enter degree:                      ";
                cin>>n;
                cout<<endl;
                for(unsigned int i=0;i<=n;i++){
                    cout<<"  Enter P( x"<<left<<setw(2)<<i<<setw(23)<<") as a double:";
                    cin>>p;
                    y.push_back(p);
                }
                cout<<"\n  Enter x0 as an integer:            ";
                cin>>x0;
                cout<<"\n  Enter x[i+1]-x[i] as an integer:   ";
                cin>>h;
                cout<<"\n  Enter x as an integer:             ";
                cin>>x;
                p=0;
                for(unsigned int i=0;i<=n;i++){
                    int fact=1,X=1;
                    for(unsigned int j=0;j<i;j++){
                        X*=((x-x0)/h-j);
                        fact*=(j+1);
                    }
                    p+=(d(i,0)*X/fact);
                }
                cout<<"\n\n  P("<<x<<") is approximately "<<fixed<<p<<endl;
                y.erase(y.begin(),y.end());
    return 0;
}

