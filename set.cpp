#include<bits/stdc++.h>
using namespace std;
int main(){
	printf ("�������ã�(y/n)\n");
	char c;
	cin>>c;
	if(c=='n'){ 
		printf ("ʹ�ø�������/��ʼ���ã�(y/n)\n");
		cin>>c;
		if (c=='y'){
			int a[5];
			printf("�Ƿ񱣴�outfile.cpp��(1/0)\n");
			cin>>a[0];
			printf("�Ƿ񱣴�DeleteK.cpp��(1/0)\n");
			cin>>a[1];
			printf("�Ƿ񱣴�DeleteE.cpp��(1/0)\n");
			cin>>a[2];
			printf("�Ƿ񱣴�DeleteKE.cpp��(1/0)\n");
			cin>>a[3];
			freopen("SpaceDeleter.set","w",stdout);
			cout<<a[0]<<endl<<a[1]<<endl<<a[2]<<endl<<a[3]; 
		}else{
			freopen("SpaceDeleter.set","w",stdout);
			cout<<"1\n1\n1\n1";
		}
	}
}
