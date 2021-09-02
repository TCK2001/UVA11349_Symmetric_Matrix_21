/*
Sample Input
2
N = 3
5 1 3
2 0 2
3 1 5
N = 3
5 1 3
2 0 2
0 1 5
Sample Output
Test #1: Symmetric.
Test #2: Non-symmetric.
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n,n1;
	string s;
	int check;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s>>s>>n1; //N = 3  string 2���� int �Ѱ� 
		long long int size[n1*n1]={'\n'}; //������ input are -2^32 ~ 2^32  
		
		for(int i=0;i<n1*n1;i++)
		{
			cin>>size[i]; //matrix �Է� 
		}
		for(int j=0;j<n1*n1;j++)
		{
			if(size[j]!=size[(n1*n1-1)-j]||size[j]<0) //�ڷᱸ������ ���� ���࿡ �ٸ��� check=0 �׸��� for�� ������ ������ �ٸ���. 
			{
				check=0;
				break;
			}
			else
			{
				check=1;
			}
		}
		if(check==1)
		{
			cout<<"Test #"<<i+1<<": Symmetric."<<endl;
		}
		else
		{
			cout<<"Test #"<<i+1<<": Non-Symmetric."<<endl;
		}
	}
	

return 0;
}

