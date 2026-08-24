#include <bits/stdc++.h>
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

struct Node
{
    char value;
    Node *next;

    Node(char inputValue) : value(inputValue), next(nullptr) {}
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

bool solve(Node *head)
{
    if (!head || !head->next)
        return true;

    Node *slow = head;
    Node *fast = head;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node *second_half = fast ? slow->next : slow;
    Node *reverse_half = reverseList(second_half);

    bool palindrome = true;
    Node *left = head;
    Node *right = reverse_half;

    while (right)
    {
        if (left->value != right->value)
        {
            palindrome = false;
            break;
        }

        left = left->next;
        right = right->next;
    }

    reverseList(reverse_half);
    return palindrome;
}

int main()
{
    fastIO();

    int tt;
    cin >> tt;

    string s;
    getline(cin, s);

    while (tt--)
    {
        string word;
        getline(cin, word);
        stringstream input(word);

        Node *head = nullptr;
        Node *tail = nullptr;
        char val;

        while (input >> val)
        {
            Node *newNode = new Node(val);

            if (!head)
                head = tail = newNode;
            else
            {
                tail->next = newNode;
                tail = newNode;
            }
        }

        cout << (solve(head) ? "Palindrome" : "Not Palindrome") << endl;

        while (head)
        {
            Node *nextNode = head->next;
            delete head;
            head = nextNode;
        }
    }

    return 0;
}
