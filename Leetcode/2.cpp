/**
 *   author:   @fardinkamal62
 *   created:  09/07/2025 18:19
 **/

#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        while (l1 != nullptr || l2 != nullptr)
        {
            int sum = 0;
            int carry = 0;
            ListNode *result = new ListNode(0);
            ListNode *current = result;

            if (l1 == nullptr && l2 == nullptr && carry == 0)
            {
                return result->next;
            }

            if (l1 != nullptr && l2 != nullptr)
            {
                sum = l1->val + l2->val + carry;
                if (sum >= 10)
                {
                    carry = sum / 10;
                    sum = sum % 10;
                }
                l1 = l1->next;
                l2 = l2->next;
            } else {
                if (l1 != nullptr)
                {
                    sum = l1->val + carry;
                    if (sum >= 10)
                    {
                        carry = sum / 10;
                        sum = sum % 10;
                    }
                    l1 = l1->next;
                } else if (l2 != nullptr)
                {
                    sum = l2->val + carry;
                    if (sum >= 10)
                    {
                        carry = sum / 10;
                        sum = sum % 10;
                    }
                    l2 = l2->next;
                }
            }
        }
        
        
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;

    Solution sol;

    ListNode *l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    ListNode *l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);
    sol.addTwoNumbers(l1, l2);

    return 0;
}