#pragma once
#include <iostream>
#include <stdexcept>
using namespace std;

//class Array
//{
//public:
	//Array();
	//~Array();
//};

template <class T>
class Array
{

public:
	//synonimy typ�w
	typedef T type_value;
	typedef T* iterator;
	typedef const T* const_iterator;
	typedef T& reference;
	typedef const T& const_reference;
	typedef size_t size_type;
	//konstruktor
	Array(const size_type &n = minsize)
	{
		Count = 0;
		if (n < minsize)
		{
			elems = new type_value[minsize]; Size = minsize;
		}
		else { elems = new type_value[n]; Size = n; };
		for (unsigned i = 0; i<Size; i++)
			elems[i] = 0;
	}
	//konstruktor kopiu�cy
	Array(const Array &ref)
	{
		Count = ref.Count;
		Size = ref.Size;
		elems = new type_value[ref.Size];
		for (unsigned i = 0; i<Count; i++)
			elems[i] = ref.elems[i];
	}
	//konstruktor przez iteratory
	Array(iterator first, iterator last)
	{
		if (first<last)
		{
			size_type n = last - first;
			Count = n;
			if (n < minsize)
			{
				elems = new type_value[minsize]; Size = minsize;
			}
			else elems = new type_value[n];
			for (unsigned i = 0; i<Count; i++)
				elems[i] = *(first + i);
		}
		else throw invalid_argument("Invalid argument!");
	}
	//operator przepicania
	Array& operator = (const Array &ref)
	{
		if (this != &ref)
		{
			Count = ref.Count;
			Size = ref.Size;
			type_value *new_elems = new type_value[ref.Size];
			for (unsigned i = 0; i<Count; i++)
				new_elems[i] = ref.elems[i];
			delete[] elems;
			elems = new_elems;
		}
		return *this;
	}
	//dost�p do element�w
	reference front() { return elems[0]; } //zmieni� 1 el
	const_reference front() const { return elems[0]; }//otrzyma� 1 el.
	reference back() { return elems[size() - 1]; }//zmieni� ostatni el.
	const_reference back() const { return elems[size() - 1]; }//otrzyma�  ostatni el.
	reference operator[] (size_type index)
	{
		if (index<Count) return elems[index];
		else throw out_of_range("Index out of range!");
	}
	const_reference operator[]  (size_type index)const
	{
		if (index<Count) return elems[index];
		else throw out_of_range("Index out of range!");
	}
	//rozmiary
	bool empty() const { if (Count == 0) return true; else return false; }; //sprawd� pustk�
	size_type size() const { return Count; }; //obecny rozmiar
	size_type capacity() const { return Size; };
	//zmiana rozmiaru
	void resize(size_type new_size)
	{
		if (new_size > capacity())
		{
			type_value *data = new type_value[new_size]; //nowa tablica
			for (size_type i = 0; i < Count; ++i)
				data[i] = elems[i];
			delete[] elems;//czyszczenie starej tablicy
			elems = data;//przypisanie wskaznika
			Size = new_size;
		}
	}
	friend ostream& operator << (ostream& s, const Array <T> &a)
	{
		for (size_t i = 0; i<a.Count; i++)
			s << a[i] << " ";
		s << endl;
		return s;
	}
	friend istream& operator >> (istream& s, Array <T> &a)
	{
		for (size_t i = 0; i<a.Count; i++)
			s >> a[i];
		return s;
	}
	//iteratory w klasie
	iterator begin() { return elems; };
	const_iterator begin()const { return elems; };
	iterator end() { return elems + Count; };
	const_iterator end()const { return elems + Count; };
	//wstaw na koniec
	void push_back(const type_value &v)
	{
		if (Count == Size)
			resize(2 * Size);
		elems[Count++] = v;
	}
	//usu� element z ko�ca
	void pop_back()
	{
		if (!empty())elems[Count--] = 0;
	}
	void clear() { Count = 0; };
	//wyczy�� tablic�

	Array& operator += (const Array &r)
	{
		Array t(capacity() + r.capacity());
		unsigned i;
		for (i = 0; i< Count; ++i) t.push_back(this->elems[i]);
		for (i = 0; i< r.Count; ++i) t.push_back(r.elems[i]);
		this->resize(capacity() + r.capacity());
		*this = t;
		return *this;
	}
	~Array() { delete[] elems; };
private:
	static const size_type minsize = 10; //minimalny rozmiar tablicy
	size_type Size;   //liczba przydzielonych element�w pami�ci
	size_type Count;  //liczba przydzielonych element�w tablicy
	type_value *elems;//wska�nik do danych
};
