#pragma once
#include<sstream>
#include<vector>
using namespace std;

enum class OutputFormat {
	markdown,
	html
};

class ListStrategy {
public:
	ListStrategy() {};
	virtual ~ListStrategy() {};
	virtual void Start(std::ostringstream& oss) {};
	virtual void AddListItem(std::ostringstream& oss, const std::string& item) {};
	virtual void End(std::ostringstream& oss) {};
};


class HtmlListStrategy : public ListStrategy {
	void Start(ostringstream& oss) override;
	void End(ostringstream& oss)override;
	void AddListItem(ostringstream& oss, const string& item) override;
};

class MarkdownListStrategy : public ListStrategy {
	void AddListItem(ostringstream& oss, const string& item) override;
};

class TextProcessor {
public:
	TextProcessor();
	~TextProcessor();
	void AppendList(const vector<string> items);
	void SetOutputFormat(const OutputFormat outputFormat);
	const ostringstream& ShowText();
	void Clear();
private:
	ostringstream oss;
	unique_ptr<ListStrategy> listStrategy;
};


