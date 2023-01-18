// header file for vector class

template <typename t>
class vector
{
    t *arr;
    int curr_size;
    int max_size;

public:
    vector()
    {
        curr_size = 0;
        max_size = 1;
        arr = new t[max_size];
    }

    void push_back(const t data)
    {
        // 2 cases - 1. when the vector is full and 2. when the vector is not full

        // 1. when the vector is full
        //  create a new array and delete the old one, and double the capacity of new array
        if (curr_size == max_size)
        {
            t  *oldarr = arr;
            max_size = 2 * max_size;
            arr = new t[max_size];

            // copy the elements
            for (int i = 0; i < curr_size; i++)
            {
                arr[i] = oldarr[i];
            }

            // delete the old array
            delete[] oldarr;
        }

        // 2. when the vector is not full
        arr[curr_size] = data;
        curr_size++;
    }

    void pop_back()
    {
        if (curr_size >= 0)
            curr_size--;
    }

    bool isempty()
    {
        return curr_size = 0;
    }

    // get values

    t front() const
    {
        return arr[0];
    }
    t back() const
    {
        return arr[curr_size - 1];
    }
    t at(int i) const
    {
        return arr[i];
    }
    int size() const
    {
        return curr_size;
    }
    int capacity() const
    {
        return max_size;
    }
    t operator[](const int i) const
    {
        return arr[i];
    }
};