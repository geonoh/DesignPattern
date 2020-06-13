#include <iostream>
#include "Static_StretagyPattern.h"

int main() {
	TextProcessor<MarkdownListStrategy> tpm;
	tpm.AppendList({ "foo", "bar", "baz" });
	cout << tpm.ShowText().str() << endl;

	TextProcessor<HtmlListStrategy> tph;
	tph.AppendList({ "foo", "bar", "baz" });
	cout << tph.ShowText().str() << endl;

}