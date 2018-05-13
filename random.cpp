#include<bits/stdc++.h>
#include<ctime>
#include </usr/include/boost/functional/hash.hpp>
#define watchint(me) printf("%s=%d\n",#me,me);
#define si(a) scanf("%d",&a);
#define sl(a) scanf("%ld",&a);
#define sll(a) scanf("%lld",&a);

typedef long long int ll;
using namespace std;

int main(int argc, char *argv[])
{

  
  time_t rawtime;
  struct tm * timeinfo;

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  printf ( "Current local time and date: %s", asctime (timeinfo) );
  //istringstream ss(asctime(timeinfo));
  // char ch; int i;
  // cout<<endl;
  
 boost::hash<std::string>string_hash;
 std::size_t len=string_hash(asctime(timeinfo));
 cout<<len<<endl;
 //cout<<endl;
 return 0;
}

