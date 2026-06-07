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

int bit_row[300002], bit_col[300002];
int Q_val;

void update(int *bit, int i, int v)
{
    for (; i <= Q_val; i += i & -i)
        bit[i] += v;
}

int query(int *bit, int i)
{
    int s = 0;
    for (; i > 0; i -= i & -i)
        s += bit[i];
    return s;
}

// count elements <= x stored in the BIT
int count_le(int *bit, int x)
{
    if (x <= 0)
        return 0;
    return query(bit, x);
}

int main()
{
    fastIO();

    int n, q;
    cin >> n >> q;
    Q_val = q;

    vector<int> row_last(n + 1, 0), col_last(n + 1, 0);
    ll answer = 0;
    int num_painted_rows = 0, num_painted_cols = 0;

    for (int t = 1; t <= q; t++)
    {
        int type, idx;
        cin >> type >> idx;

        if (type == 1)
        {
            int t_old = row_last[idx];
            if (t_old == 0)
            {
                // First time this row is painted: all N cells become black
                answer += n;
                num_painted_rows++;
            }
            else
            {
                // Row repainted: recover cells in columns that went white after t_old
                int cols_le = count_le(bit_col, t_old);
                answer += (num_painted_cols - cols_le);
                update(bit_row, t_old, -1);
            }
            update(bit_row, t, 1);
            row_last[idx] = t;
        }
        else
        {
            int t_old = col_last[idx];
            // Lose cells: rows painted after t_old (they had "survived" the previous white-wash)
            int rows_le = count_le(bit_row, t_old);
            answer -= (num_painted_rows - rows_le);
            if (t_old == 0)
                num_painted_cols++;
            else
                update(bit_col, t_old, -1);
            update(bit_col, t, 1);
            col_last[idx] = t;
        }

        cout << answer << endl;
    }

    return 0;
}
