#include<bits/stdc++.h>
using namespace std;
int main(){
	printf ("已有设置？(y/n)\n");
	char c;
	cin>>c;
	if(c=='n'){ 
		printf ("使用个性设置/初始设置？(y/n)\n");
		cin>>c;
		if (c=='y'){
			int a[5];
			printf("是否保存outfile.cpp？(1/0)\n");
			cin>>a[0];
			printf("是否保存DeleteK.cpp？(1/0)\n");
			cin>>a[1];
			printf("是否保存DeleteE.cpp？(1/0)\n");
			cin>>a[2];
			printf("是否保存DeleteKE.cpp？(1/0)\n");
			cin>>a[3];
			freopen("SpaceDeleter.set","w",stdout);
			cout<<a[0]<<endl<<a[1]<<endl<<a[2]<<endl<<a[3]; 
		}else{
			freopen("SpaceDeleter.set","w",stdout);
			cout<<"1\n1\n1\n1";
		}
	}
}
