//made by MX-R,copywrite by MX-R.
//NO COPY WITHOUT PERMITION!
//only for studying and learning.
//coding is a kind of art.
//99 little bugs in the code,
//99 bugs in the code,
//fix one bug, compile it again,
//101 little bugs in the code.
//101 little bugs in the code��.
//(Repeat until BUGS = 0)
/* Porgram about SF's parcel */
#include<bits/stdc++.h>
using namespace std;
double x,y;
long long a,b;
double strange_solve(double o){                  //����
    if(a<=1) return 1;
	if(o<100) if(o-floor(o)<=0.5) return floor(o)+0.5;//floor:��ȡ��
	          else return ceil(o);               //ceil:��ȡ��
	return round(o);                             //round:��������
}
int main(){
	cout<<"��������(kg/Ԫ):",cin >> a,cout<<"��������(kg/Ԫ):",cin >> b,cout<<"������������(kg):",cin >> x;
	x=strange_solve(x);
	cout << a+(x-1)*b << "Ԫ";                   //����˳��ķ�ʽ�Ƽ�
	getchar();
	return 0;
}
