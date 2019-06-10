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
long long a,b,fw,d;
double strange_solve(double o){             //计重
    if(a<=1) return a;
	if(o<fw) if(o-floor(o)<=0.5&&o-floor(o)>0) return a+(floor(o)-0.5)*b;//floor:下取整
	          else return a+(ceil(o)-1);    //ceil:上取整
	return o*b;                             //round:四舍五入
}
int main(){
	cout<<"输入首重(kg/元):",cin >> a,cout<<"输入续重(kg/元):",cin >> b,cout << "输入单价(kg/元)",cin >> d,cout<<"输入物体重量(kg):",cin >> x,cout << "输入四舍五入范围:(kg)",cin >> fw;
	cout << strange_solve(x) << "元";                   //按照顺丰的方式计价
	getchar();
	return 0;
}
