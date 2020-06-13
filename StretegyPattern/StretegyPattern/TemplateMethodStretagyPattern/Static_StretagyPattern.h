#pragma once
#include <sstream>
#include <vector>

using namespace std;

class ListStrategy {
public:
	ListStrategy() {};
	virtual ~ListStrategy() {};
	virtual void Start(std::ostringstream& oss) {};
	virtual void AddListItem(std::ostringstream& oss, const std::string& item) {};
	virtual void End(std::ostringstream& oss) {};
};


class HtmlListStrategy : public ListStrategy {
public:
	void Start(ostringstream& oss) override;
	void End(ostringstream& oss)override;
	void AddListItem(ostringstream& oss, const string& item) override;
};

class MarkdownListStrategy : public ListStrategy {
public:
	void AddListItem(ostringstream& oss, const string& item) override;
};

template<class ListStrategy>
class TextProcessor {
public:
	void AppendList(const vector<string> items) {
		listStretagy.Start(oss);
		for (auto& item : items)
			listStretagy.AddListItem(oss, item);
		listStretagy.End(oss);
	}
	ostringstream& ShowText() {
		return oss;
	}
private:
	ostringstream oss;
	ListStrategy listStretagy;
};
