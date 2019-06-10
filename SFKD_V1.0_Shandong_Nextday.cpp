//made by MX-R,copywrite by MX-R.
//NO COPY WITHOUT PERMITION!
//only for studying and learning.
//coding is a kind of art.
//99 little bugs in the code,
//99 bugs in the code,
//fix one bug, compile it again,
//101 little bugs in the code.
//101 little bugs in the code….
//(Repeat until BUGS = 0)
/* Porgram about SF's parcel */
#include<bits/stdc++.h>
using namespace std;
double x,y;
long long a,b;
double strange_solve(double o){                  //计重
    if(a<=1) return 1;
	if(o<100) if(o-floor(o)<=0.5) return floor(o)+0.5;//floor:下取整
	          else return ceil(o);               //ceil:上取整
	return round(o);                             //round:四舍五入
}
int main(){
	cout<<"输入首重(kg/元):",cin >> a,cout<<"输入续重(kg/元):",cin >> b,cout<<"输入物体重量(kg):",cin >> x;
	x=strange_solve(x);
	cout << a+(x-1)*b << "元";                   //按照顺丰的方式计价
	getchar();
	return 0;
}
