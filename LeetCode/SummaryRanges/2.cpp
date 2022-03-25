#include <bits/stdc++.h>
using namespace std;

class ListNode
{
    public:
        int val;
        ListNode* next;
};

void append(ListNode** head_ref, int new_data)
{
    ListNode* new_node = new ListNode();

    ListNode *last = *head_ref;
    
    new_node -> val = new_data;
    
    new_node -> next = NULL;
    
    if(*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    while (last -> next != NULL)
        last = last -> next;
    
    last -> next = new_node;
    return; 
    
}

string ans(string s1, string s2)
{
    string res;
    int n1, n2;
    stringstream ss;
    ss << s1;
    ss >> n1;
    ss.clear();
    ss << s2;
    ss >> n2;
    ss.clear();
    ss << (n1 + n2);
    ss >> res;
    reverse(res.begin(), res.end());
    return res;
}

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ResNode = new ListNode();
        string s1 = "", s2 = "";

        l1 = l1 -> next;
        l2 = l2 -> next;
        while(l1 != NULL)
        {
            s1.push_back(char((l1 -> val) + 48));
            s2.push_back(char((l2 -> val) + 48));
            l1 = l1 -> next;
            l2 = l2 -> next;
        }
        string res = ans(s1, s2);
        for (size_t i = 0; i < res.size(); i++)
        {
            append(&ResNode, int(res[i]) - 48);
        }
        ResNode = ResNode -> next;
        return ResNode;
    }
};

void printList(ListNode* n)
{
    while (n != NULL)
    {
        cout << n -> val << " -> ";
        n = n -> next;
    }
    cout << "NULL" << endl << endl;
    
}

int main()
{
    ListNode* head = new ListNode();
    ListNode* head1 = new ListNode();
    append(&head, 2);
    append(&head, 4);
    append(&head, 3);
    append(&head1, 5);
    append(&head1, 6);
    append(&head1, 4);

    printList(Solution().addTwoNumbers(head, head1));
}