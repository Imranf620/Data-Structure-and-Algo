 int occurrences[length] = {0}; 
        for (int i = 0; i < length; i++)
        {
            for (int j = 0; j < length; j++)
            {
                if (arr[i] == arr[j])
                {
                    occurrences[i]++;
                }
            }
        }

        for (int i = 0; i < length; i++)
        {
            for (int j = i + 1; j < length; j++)
            {
                if (occurrences[i] == occurrences[j] && arr[i] != arr[j])
                {
                    return false;
                }
            }
        }

        return true;