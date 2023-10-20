#include <iostream>
#include "tinyxml2.h"

int main() {
    tinyxml2::XMLDocument doc;

    // 创建一个声明节点并将其添加到doc对象中
    tinyxml2::XMLDeclaration* declaration = doc.NewDeclaration();
    doc.LinkEndChild(declaration);

    // 创建根元素
    tinyxml2::XMLElement* root = doc.NewElement("Root");
    doc.InsertEndChild(root);

    // 创建子元素
    tinyxml2::XMLElement* child = doc.NewElement("Child");
    child->SetText("Hello, World!");
    root->InsertEndChild(child);

    // 创建一个包含文本内容的文本节点并插入到child节点中
    tinyxml2::XMLText* textNode = doc.NewText("TextContent");
    child->InsertEndChild(textNode);

    // 创建一个注释节点
    tinyxml2::XMLComment* comment = doc.NewComment("This is a comment");
    doc.InsertEndChild(comment);

    // 创建第二个元素
    tinyxml2::XMLElement* parent = doc.NewElement("Parent");
    // 将parent添加到root下
    doc.InsertEndChild(parent);

    // 创建son节点 将son添加到parent下
    tinyxml2::XMLElement* son = doc.NewElement("son");
    parent->InsertEndChild(son);

    // 创建daughter节点 并将daughter节点作为parent第一个节点插入
    tinyxml2::XMLElement* daughter = doc.NewElement("daughter");
    parent->InsertFirstChild(daughter);

    // 创建dog节点并将dog节点作为parent最后一个节点插入
    tinyxml2::XMLElement* dog = doc.NewElement("dog");
    parent->InsertEndChild(dog);

    // 创建cat节点并将cat节点插入到son节点之后
    tinyxml2::XMLElement* cat = doc.NewElement("cat");
    parent->InsertAfterChild(son, cat);

    // 保存XML文档
    doc.SaveFile("example.xml");

    std::cout << "操作成功！" << std::endl;

    return 0;
}
