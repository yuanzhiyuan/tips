//http://www.zhihu.com/question/29951367

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	vector<vector<const char*> > s = {
		{ "a", "b" },
		{ "c", "d" },
		{ "f", "g" }
	};
	//����index
	vector<size_t> indices(s.size());

	size_t i = 0;
	while (i < s.size()) {
		//��ӡ
		for (size_t j = 0; j < s.size(); j++)
			cout << s[j][indices[j]];
		cout << endl;

		i = 0;
		//����index
		//����һ��ÿ��index+1
		//�����������ְ㣬��λ����0��9�����˾͹��㣬Ȼ��ʮ��λ��һ��
		while (i < s.size() && ++indices[i] == s[i].size())
			//�л�����һ��
			indices[i++] = 0;
	}
	system("pause");
}
