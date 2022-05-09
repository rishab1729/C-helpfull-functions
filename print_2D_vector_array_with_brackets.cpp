void printVectorArray(vector<vector<int>> & arr)
{
    cout<<"{";
    for(auto i:arr)
    {
        cout<<"{"<<i[0]<<","<<i[1]<<"}";
        
        
        if (arr.back()[0]!=i[0] && arr.back()[1]!=i[1])
        {
        cout<<",";
        }
    }
    

    cout<<"}"<<"\n";
}
