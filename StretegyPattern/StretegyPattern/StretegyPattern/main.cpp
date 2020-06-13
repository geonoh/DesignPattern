#include <iostream>
#include "Dynamic_StretegyPattern.h"

int main(void) {
	TextProcessor textProcessor;

	textProcessor.Clear();
	textProcessor.SetOutputFormat(OutputFormat::html);
	textProcessor.AppendList({ "foo", "bar", "baz" });
	std::cout << textProcessor.ShowText().str() << std::endl;



}