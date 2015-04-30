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
	//保存index
	vector<size_t> indices(s.size());

	size_t i = 0;
	while (i < s.size()) {
		//打印
		for (size_t j = 0; j < s.size(); j++)
			cout << s[j][indices[j]];
		cout << endl;

		i = 0;
		//调整index
		//对这一层每次index+1
		//就像是数数字般，个位数从0至9，满了就归零，然后十进位加一。
		while (i < s.size() && ++indices[i] == s[i].size())
			//切换到下一层
			indices[i++] = 0;
	}
	system("pause");
}
