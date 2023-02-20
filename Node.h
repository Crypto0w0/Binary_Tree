#pragma once

struct Node
{
    char name[30];
    int m_grade;

	Node* m_parent;

    Node* m_left;  
    Node* m_right;
	

    char* GetName();
    int GetGrade();
};
