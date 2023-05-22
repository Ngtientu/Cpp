bool timX()
{
    int l = 1, r = n;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == x)
            return true;
        if (a[mid] > x)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return false;
}