#include "Dynamic_StretegyPattern.h"

TextProcessor::TextProcessor() {

}

TextProcessor::~TextProcessor() {

}

void TextProcessor::AppendList(const vector<string> items) {
	listStrategy->Start(oss);
	for (auto& item : items) {
		listStrategy->AddListItem(oss, item);
	}
	listStrategy->End(oss);
}

void TextProcessor::SetOutputFormat(const OutputFormat outputFormat) {
	switch (outputFormat) {
	case OutputFormat::markdown:
		listStrategy = make_unique<MarkdownListStrategy>();
		break;
	case OutputFormat::html:
		listStrategy = make_unique<HtmlListStrategy>();
		break;
	}
}

const ostringstream& TextProcessor::ShowText() {
	return oss;
}

void TextProcessor::Clear() {
	oss.clear();
}

void HtmlListStrategy::Start(ostringstream& oss) {
	oss << "<ul>\n";
}

void HtmlListStrategy::End(ostringstream& oss) {
	oss << "</ul>\n";
}

void HtmlListStrategy::AddListItem(ostringstream& oss, const string& item) {
	oss << "<li>" << item << "</li>\n";
}


void MarkdownListStrategy::AddListItem(ostringstream& oss, const string& item) {
	oss << "*" << item << endl;
}


