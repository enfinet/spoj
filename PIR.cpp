#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<string>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<cassert>
using namespace std;

double f(double a,double b,double c)
{
    return (double)(((a*a)+(b*b))-(c*c));
}

double fun(double a,double b,double c,double d)
{
    return (double)((a*a)*((((b*b)+(c*c))-(d*d))*(((b*b)+(c*c))-(d*d))));
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        double u,v,w,U,V,W;
        //scanf("%lf%lf%lf%lf%lf%lf",&u,&v,&w,&U,&V,&W);
        cin>>u>>v>>w>>W>>V>>U;
        double sum=(double)(4.0*((u*u)*(v*v)*(w*w))-fun(u,v,w,U)-fun(v,u,w,V)-fun(w,u,v,W)+f(v,w,U)*f(w,u,V)*f(u,v,W));
        //double ans=(double)(sqrt(sum)/12.0);
        printf("%.4lf\n",(double)sqrt(sum)/12.0);
    }
    return 0;
}
