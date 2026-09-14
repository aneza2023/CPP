
template <typename T>
Array<T>::Array() : _value(NULL), _arraySize(0) {}

template <typename T>
Array<T>::Array(unsigned int n) {

    T *a = new T[n]();
    this->_value = a;
    this->_arraySize = n;
}

template <typename T>
Array<T>::Array(const Array &orig) {

    T *a = new T[orig._arraySize]();
    this->_arraySize = orig._arraySize;
    this->_value = a;

    for (unsigned int i = 0; i < orig._arraySize; i++) {
        this->_value[i] = orig._value[i];
    }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array &orig) {

    if (&orig == this)
        return *this;

    delete[] this->_value;
    this->_arraySize = orig._arraySize;
    this->_value = new T[orig._arraySize];
    for (unsigned int i = 0; i < orig._arraySize; i++) {
        this->_value[i] = orig._value[i];
    }
    return *this;
}

template <typename T>
Array<T>::~Array() {

    delete[] this->_value;
}

template <typename T>
T& Array<T>::operator[](unsigned int i) {

    if (i >= this->_arraySize) {
        throw std::exception();
    }
    return this->_value[i];
}

template <typename T>
unsigned int Array<T>::size(void) const {

    return this->_arraySize;
}