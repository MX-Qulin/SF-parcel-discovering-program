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
long long a,b,fw,d;
double strange_solve(double o){             //����
    if(a<=1) return a;
	if(o<fw) if(o-floor(o)<=0.5&&o-floor(o)>0) return a+(floor(o)-0.5)*b;//floor:��ȡ��
	          else return a+(ceil(o)-1);    //ceil:��ȡ��
	return o*b;                             //round:��������
}
int main(){
	cout<<"��������(kg/Ԫ):",cin >> a,cout<<"��������(kg/Ԫ):",cin >> b,cout << "���뵥��(kg/Ԫ)",cin >> d,cout<<"������������(kg):",cin >> x,cout << "�����������뷶Χ:(kg)",cin >> fw;
	cout << strange_solve(x) << "Ԫ";                   //����˳��ķ�ʽ�Ƽ�
	getchar();
	return 0;
}
