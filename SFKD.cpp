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
double x,y,qp=1,v; char c;                       //qp=1:27�в��ܳ���0
long long a,b,l,w,h;
double strange_solve(double o){                  //����
    if(a<=1) return 1;
	if(o<100) if(o-floor(o)<=0.5) return floor(o)+0.5;//floor:��ȡ��
	          else return ceil(o);               //ceil:��ȡ��
	return round(o);                             //round:��������
}
int main(){
	cout<<"��������(kg/Ԫ):",cin >> a,cout<<"��������(kg/Ԫ):",cin >> b,cout<<"������������(kg):",cin >> x;
	cout<<"�����������������(Y/N)",cin >> c; if(c=='Y'){
	cout<<"���볤(m)",cin >> l,cout<<"�����(m)",cin >> w,cout<<"�����",cin >> h;
	cout<<"��������ϵ��",cin >> qp;}
	x=strange_solve(x);                          //����˳��ķ�ʽ����
	v=(l*w*h)/qp;                                //�����������
	x=max(v,x);                                  //ȡ�������,ʵ���������ֵ
	cout << a+(x-1)*b << "Ԫ";                   //����˳��ķ�ʽ�Ƽ�
	getchar();
	return 0;
}
