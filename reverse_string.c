int my_strlen(char* arr)
{
	int count = 0;
	while (*arr++) {
		count++;
	}
	return count;
}

void reverse_string(char* arr){
	char tmp = arr[0];
	int len = my_strlen(arr);
	arr[0] = arr[len - 1];
	arr[len - 1] = '\0';
	if (my_strlen(arr + 1) >= 2)
		reverse_string(arr + 1);
	arr[len - 1] = tmp;
}
