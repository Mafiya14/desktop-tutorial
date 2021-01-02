int main() {
	int i, j = 2, buf, n = 7;
	int arr[] = { 6, 4, 1, 5, 3, 7, 2 };
	for (i = 1; i < n; i++) 
	{
		if (arr[i - 1] > arr[i]) 
		{
			buf = arr[i]; arr[i] = arr[i - 1];
			arr[i - 1] = buf;
			if (i != 1)
				i -= 2;
		}
	}
}
