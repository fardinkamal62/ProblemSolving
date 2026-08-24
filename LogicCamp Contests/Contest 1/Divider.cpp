#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

struct Node
{
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {}
};

Node *reverseList(Node *head)
{
    Node *new_head = nullptr;
    while (head != nullptr)
    {
        Node *next_node = head->next;
        head->next = new_head;
        new_head = head;
        head = next_node;
    }
    return new_head;
}

int main()
{
    fastIO();

    Node *head = nullptr;
    Node *tail = nullptr;

    int x;
    while (cin >> x)
    {
        Node *node = new Node(x);
        if (tail != nullptr)
        {
            tail->next = node;
        }
        else
            head = node;
        tail = node;
    }

    if (head == nullptr)
        return 0;

    Node *before_second = nullptr;
    Node *second_head = head;
    Node *runner = head;

    while (runner != nullptr && runner->next != nullptr)
    {
        before_second = second_head;
        second_head = second_head->next;
        runner = runner->next->next;
    }

    if (before_second != nullptr)
        before_second->next = nullptr;

    second_head = reverseList(second_head);

    for (Node *cur = head; cur != second_head && cur != nullptr; cur = cur->next)
        cout << cur->data << " ";
    for (Node *cur = second_head; cur != nullptr; cur = cur->next)
        cout << cur->data << " ";
    cout << endl;

    return 0;
}
