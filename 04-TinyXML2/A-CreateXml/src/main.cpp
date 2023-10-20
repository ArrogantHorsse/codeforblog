#include "tinyxml2.h"

int main() {
    // 创建XML文档对象
    tinyxml2::XMLDocument doc;

    // 创建XML声明
    tinyxml2::XMLDeclaration* declaration = doc.NewDeclaration();
    doc.InsertEndChild(declaration);

    // 创建根元素
    tinyxml2::XMLElement* root = doc.NewElement("Root");
    doc.InsertEndChild(root);

    // 创建子元素并添加到根元素中
    tinyxml2::XMLElement* child = doc.NewElement("Child");
    child->SetText("Hello, World!");
    root->InsertEndChild(child);

    // 保存XML文档到文件
    doc.SaveFile("example.xml");

    return 0;
}
