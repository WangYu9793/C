class ChkBloodType {
public:
	vector<string> chkBlood(string father, string mother) {
		map<pair<string, string>, vector<string>> m;
		m[make_pair("O", "O")] = { "O" };
		m[make_pair("A", "O")] = { "A", "O" };
		m[make_pair("A", "A")] = { "A", "O" };
		m[make_pair("A", "B")] = { "A", "AB", "B", "O" };
		m[make_pair("A", "AB")] = { "A", "AB", "B" };
		m[make_pair("B", "O")] = { "B", "O" };
		m[make_pair("B", "B")] = { "B", "O" };
		m[make_pair("B", "AB")] = { "A", "AB", "B" };
		m[make_pair("AB", "O")] = { "A", "B" };
		m[make_pair("AB", "AB")] = { "A", "AB", "B" };
		if (m.find(make_pair(father, mother)) != m.end()) return m[make_pair(father, mother)];
		else return m[make_pair(mother, father)];
	}
};
int main() {
	ChkBloodType obj;
	vector<string> result = obj.chkBlood("O", "B");

	return 0;
}