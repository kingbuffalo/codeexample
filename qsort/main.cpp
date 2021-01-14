#include <iostream>
#include <vector>

using namespace std;

int patition(vector<int>& arr,int left,int right){
	int i = left-1;
	int flag = arr[right];
	for( int j=left;j<right;j++ ){
		if ( arr[j] <= flag){
			int tmp = arr[++i];
			arr[i] = arr[j];
			arr[j] = tmp;
		}
	}
	arr[right] = arr[++i];
	arr[i] = flag;
	return i;
}

void quicksortHelp(vector<int>& arr,int left,int right){
	if ( left < right ){
		int q = patition(arr,left,right);
		quicksortHelp(arr,left,q-1);
		quicksortHelp(arr,q+1,right);
	}
}

void quicksort(vector<int> &arr){
	quicksortHelp(arr,0,arr.size()-1);
}



int main(int argc, const char *argv[])
{
	int tc;
	scanf("%d",&tc);
	int v;
	while(tc > 0){
		vector<int> a;
		for(int i=0;i<tc;i++){
			scanf("%d",&v);
			a.push_back(v);
		}
		quicksort(a);
		for(auto &x : a){
			cout << x << ',';
		}
		cout << endl;
		scanf("%d",&tc);
	}

	return 0;
}
