void print_2d_vector(vector<vector<int>> & vector_)
{
	for (vector <int> rows : vector_)
	{
		for (int columns : rows)
			cout << columns;
		cout << endl;
	}
}
