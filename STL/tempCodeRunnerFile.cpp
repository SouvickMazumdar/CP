bool comp1(pair<int,int>el1,pair<int,int>el2)
{
    if(el1.first<el2.first)
    {
        return true;
    }
    if(el1.first==el2.first)
    {
        if(el1.second>el2.second)
        {
            return true;
        }
    }
    return false;
}