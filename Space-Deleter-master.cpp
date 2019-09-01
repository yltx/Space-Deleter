#include <cstdio>
#include <cstring>
#include <windows.h>
#include <conio.h>
#include <iostream>
using namespace std;
inline bool pz(char p,char q){
	if (p==' '||q==' ')return false;
	else if (p>='A'&&p<='Z'||p>='a'&&p<='z')
	if (q>='A'&&q<='Z'||q>='a'&&q<='z')return false;
	else if (q=='%'||(q>='0'&&q<='9')||q=='_'||q=='&'||q==39)return false;
	return true;
}
char a[10000];
inline void outfile(){
	freopen("infile.cpp","r",stdin);
    freopen("outfile.cpp","w",stdout);
	while (gets(a)){
		bool flag=1;
		if (a[0]=='/'&&a[1]=='/')continue;
		else if (a[0]=='\n')continue;
		printf ("%c",a[0]);if(a[0]!=' ')flag=0;
		for (int i=1;i<strlen(a);i++){
			if (a[i]==39||a[i]=='\"'){
				printf ("%c",a[i]);
				int j=i+1;
				while (a[j]!=a[i])printf ("%c",a[j]),j++;
				printf ("%c",a[j]);
				i=j;continue;
			}
			if (a[i]==' '){
				if(flag){flag=0;continue;}
				while(a[i+1]==' ')i++;
				putchar(' ');
			}else if (a[i]==a[i-1]&&a[i]=='/'||a[i]==a[i+1]&&a[i]=='/')break;
			else printf ("%c",a[i]);
		}
		puts("");
	}
}
inline void DeleteK(){
	freopen("infile.cpp","r",stdin);
    freopen("DeleteK.cpp","w",stdout);
	while (gets(a)){
		if (a[0]=='\n')continue;
 		bool flag=1;
		printf ("%c",a[0]);if(a[0]!=' ')flag=0;
		for (int i=1;i<strlen(a);i++){
			if (a[i]==39||a[i]=='\"'){
				printf ("%c",a[i]);
				int j=i+1;
				while (a[j]!=a[i])printf ("%c",a[j]),j++;
				printf ("%c",a[j]);
				i=j;continue;
			}
			if (a[i]==' '){
				if(flag){flag=0;continue;}
				while(a[i+1]==' ')i++;
				putchar(' ');
			}else printf ("%c",a[i]);
		}
		puts("");
	}
}
inline void DeleteE(){
	freopen("outfile.cpp","r",stdin);
	freopen("DeleteE.cpp","w",stdout);
	while (gets(a)){
		bool ok=0;
		for (int i=0;i<strlen(a);i++)if (a[i]>=35&&a[i]<=128)ok=1;
		if (ok)puts(a);
	}
}
inline void DeleteK_E(){
	freopen("DeleteK.cpp","r",stdin);
	freopen("DeleteKE.cpp","w",stdout);
	while (gets(a)){
		bool ok=0;
		for (int i=0;i<strlen(a);i++)if (a[i]>=35&&a[i]<=128)ok=1;
		if (ok)puts(a);
	}
}
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
	int a[5];
	freopen("SpaceDeleter.set","r",stdin);
	cin>>a[0]>>a[1]>>a[2]>>a[3];
    if (a[0]||a[2])outfile();
	if (a[1]||a[3])DeleteK();
	if (a[2])DeleteE();
	if (a[3])DeleteK_E();
	freopen("CON","r",stdin);
	freopen("CON","w",stdout);
	if (!a[0])system("del outfile.cpp");
	puts("");
	if (!a[1])system("del DeleteK.cpp");
	puts("");
	return 0;
}

