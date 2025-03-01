#include <bits/stdc++.h>
#include<ctime>
#define ll long long int
using namespace std;
void transmisson(ll & i,ll & N,ll& tf,ll &tt)
{
 while(i<=tf)
 {
 int z=0;
 for(int k=i;k<i+N && k <= tf;k++)
 {
 cout<<"Sending Frame"<<k<<"...."<<endl;
 tt++;
 }
 for(int k=i;k<i+N && k <= tf;k++){
 int f= rand()%2;
 if(!f)
 {
 cout<<"Acknowledge for Frame"<<k<<"..."<<endl;
 z++;
 }
 else{
 cout<<"Timeout! Frame Number:"<<k<<"Not Received"<<endl;
 cout<<"Retransmitting Window..."<<endl;
 break;
 }
 }cout<<"\n";
 i=i+z;
 }
}
int main()
{
 ll tf,N,tt=0;
 srand(time(NULL));
 cout<<"Enter the Total Numbers of frames:- ";
 cin>>tf;
 ll i=1;
 transmisson(i,N,tf,tt);
 cout<<"total number of frames which were sent and resent are:"<<tt<<endl;
 return 0;
}