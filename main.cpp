#include <iostream>

using namespace std;

int main()
{
    int cost, dollars, banana;
    long long sum=0;
    cin>>cost>>dollars>>banana;
    for(int i=1; i<=banana;i++){
        sum+=i*cost;
    }
    (sum>dollars)?cout<<sum-dollars:cout<<0;
    return 0;
}
