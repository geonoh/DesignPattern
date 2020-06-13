#include "Static_StretagyPattern.h"

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


