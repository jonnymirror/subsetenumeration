//����W���̕����W����񋓂���

#include <iostream>
#include <vector>

using namespace std;

vector<long long int> B;
long long int n;
long long int checker;//making_subgraph�������������Ă��邩�ǂ������m�F����p�̕ϐ�, �������ꂽ�����W���̐���\��
//�����W����񋓂���֐�
void making_subgraph(long long int k) {//k�Ԗڂ����߂�,k-1�Ԗڂ܂ł͌��܂��Ă���
	if (k == n) {
		//�����ŐF�X�ȏ������s��
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


//���C���֐�
int main() {
	checker = 0;
	cin >> n;
	B.resize(n);
	making_subgraph(0);
	cout << "�������ꂽ�����W���̐���" << checker << "�ł�."<<endl;
	return 0;
}