class Solution {
public:
    int maxTurbulenceSize(vector<int> &a, int c1 = 0, int c2 = 0, int i = 0, int co = 1, int max = 0)
{
    if (max < co)
        max = co;

    if (i == a.size() - 1)
    {
        return max;
    }
    if ((a[i] > a[i + 1]) && (c1 < c2 || c1 == c2))
    {
        c1 = 1;
        c2 = 0;

        return maxTurbulenceSize(a, c1, c2, i + 1, co + 1, max);
    }
    else if ((a[i] < a[i + 1]) && (c1 > c2 || c1 == c2))
    {
        c1 = 0;
        c2 = 1;

        return maxTurbulenceSize(a, c1, c2, i + 1, co + 1, max);
    }

    else if (a[i] == a[i + 1])
    {
        return maxTurbulenceSize(a, 0, 0, i + 1, 1, max);
    }
    return maxTurbulenceSize(a, 0, 0, i, 1, max);
}
};