template <typename T>

struct Vector //create a vector
{
        int sizeOfArray = 12;
        T* vector = new T[sizeOfArray];

        int size = 0;

        void continueArray() // "copy" a vector datas
        {
                sizeOfArray += 12;
                T* tempVector = new T[sizeOfArray]; // create a new vector

                for (int i = 0; i < sizeOfArray; i++)
                {
                        tempVector[i] = vector[i]; //rewrite data from our old vector to new tempVector
                }

                vector = tempVector;
        }

        void addEl(T newEl) // delete old vector
        {
                if (sizeOfArray == size + 1)
                {
                        continueArray();
                }
                vector[size] = newEl;
                size++;
        }

        int search(T searchEl) // search out element
        {
                for (int i = 0; i < sizeOfArray; i++)
                {
                        if (vector[i] == searchEl)
                        {
                                return i; // return true
                        }
                }
                return -1;
        }

        void ereaseEl(int index) // clean a data of vector
        {
                for (int i = 0; i < sizeOfArray; i++)
                {
                        if (i == index)
                        {
                                T* copy = new T[sizeOfArray];

                                int cleanUp = 0;

                                for (int j = 0; j < size; j++)
                                {
                                        if (j == i)
                                        {
                                                cleanUp--;
                                                continue;
                                        }

                                        copy[j + cleanUp] = vector[j];
                                }
                                delete(vector);
                                vector = copy;
                                size--;

                                return;
                        }
                }
        }

        void reset() // reset
        {
                delete(vector);
                sizeOfArray = 12;
                vector = new T[sizeOfArray];
                size = 0;
        }

};
