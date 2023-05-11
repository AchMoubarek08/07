#ifndef Array_HPP
# define Array_HPP

# include <iostream>

template <typename T>
class Array
{
    private:
        unsigned int _n;
        T *_arr;
    public:
        Array(){
            this->_n = 0;
            this->_arr = new T[0];
        }
        Array(unsigned int n){
            this->_n = n;
            this->_arr = new T[n];
        }
        Array(Array const &src)
        {
            *this = src;
        }
        ~Array()
        {
            delete [] this->_arr;
        }
        Array &operator=(Array const &rhs)
        {
            if (this != &rhs)
            {
                this->_n = rhs._n;
                this->_arr = new T[this->_n];
                for (unsigned int i = 0; i < this->_n; i++)
                    this->_arr[i] = rhs._arr[i];
            }
            return (*this);
        }
        T &operator[](unsigned int i)
        {
            if (i >= this->_n)
                throw std::out_of_range("index is out of range");
            return (this->_arr[i]);
        }
        unsigned int size() const
        {
            return (this->_n);
        }
};

#endif