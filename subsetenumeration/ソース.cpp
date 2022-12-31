//ある集合の部分集合を列挙する

#include <iostream>
#include <vector>

using namespace std;

vector<long long int> B;
long long int n;
long long int checker;//making_subgraphが正しく動いているかどうかを確認する用の変数, 生成された部分集合の数を表す
//部分集合を列挙する関数
void making_subgraph(long long int k) {//k番目を決める,k-1番目までは決まっている
	if (k == n) {
		//ここで色々な処理を行う
		checker++;
		for (long long int i = 0; i < n; i++) {
			cout << B[i] << " ";
		}
		cout << endl;
		return;
	}
	else {
		B[k] = 0;
		making_subgraph(k + 1);
		B[k] = 1;
		making_subgraph(k + 1);
		return;
	}
}


//メイン関数
int main() {
	checker = 0;
	cin >> n;
	B.resize(n);
	making_subgraph(0);
	cout << "生成された部分集合の数は" << checker << "個です."<<endl;
	return 0;
}