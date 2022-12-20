#include <bits/stdc++.h>
using namespace std;

void print(vector<string> names){
	for(int i=0;i<names.size();i++)
		cout<<names[i]<<endl;
	printf("\n");
}

bool mycomp(string a, string b){
	return a<b;
}

vector<string> alphabaticallySort(vector<string> a){
	int n=a.size();
	sort(a.begin(),a.end(),mycomp);
	return a;
}

int main()
{   
	vector<string> names={"Agrim","sage","omen","harbor"};
	names=alphabaticallySort(names);
	print(names);
	return 0;
}