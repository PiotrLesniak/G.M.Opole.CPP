#pragma once
#include <iostream>
#include <stdexcept>
using namespace std;

/*
template <class T>  - template klasy o zmiennej T
która pozniej bedzie zast¹piona odpowienim typem
jak int lub double
*/
template <class T> 
class Array
{

public:
	//synonimy typów
	/*tutaj definiujemy nasze wlasne typy 
	  (cos jak int lub double, ale nasze)
	*/
	typedef T type_value;
	typedef T* iterator;
	typedef const T* const_iterator;
	typedef T& reference;
	typedef const T& const_reference;
	typedef size_t size_type;
	//konstruktor
	//minsize - to jest statyczne pole klasy - zdefiniowane na koncu klasy
	// '= minsize' - to oznacza domyslna wartosc dla &n.
	Array(const size_type &n = minsize)
	{
		/*
		Count = 0; dlatego, ¿e w konstruktorze tworzymy tablice, 
		ale nie mamy tam w³orzonych elementow.
		(tablica nie jest zape³niona danymi)
		*/
		Count = 0;

		if (n < minsize)
		{
			elems = new type_value[minsize]; Size = minsize;
		}
		else { elems = new type_value[n]; Size = n; };
		for (unsigned i = 0; i<Size; i++)
			elems[i] = 0;
	}
	//konstruktor kopiu¹cy
	Array(const Array &ref)
	{
		Count = ref.Count;
		Size = ref.Size;
		elems = new type_value[ref.Size];
		for (unsigned i = 0; i<Count; i++)
			elems[i] = ref.elems[i];
	}
	//konstruktor przez iteratory
	/*jezeli chcemy tablice uzupelniona kolejnymi liczbami 
	od first do last (np 5, 6, 7, 8, 9, 10) 
	to podajmy pierwszy (first) i ostatni elent (last)
	*/
	Array(iterator first, iterator last)
	{
		if (*first<*last) //sprawdzenie, czy podalismy poprawne dane
		{
			size_type n = *last - *first;//obliczamy jak duza powinna byc tablica
			//count jest n a nie 0 bo tu bedziemy mieli dane.
			Count = n;
			//to jest to samo co w podstawowym konstruktorze
			if (n < minsize)
			{
				elems = new type_value[minsize]; Size = minsize;
			}
			else elems = new type_value[n];
			//tutaj uzupelniamy tablice wartosciami
			for (unsigned i = 0; i < Count; i++)
			{
				type_value v = *first + (type_value)i;
				elems[i] = v;
			}

		}
		//jerzeli dane sa nie poprawne to rzucamy wyjatek
		else throw invalid_argument("Invalid argument!");
	}
	//operator przepisania (dziala jak konstruktor kopiujacy)
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
	//dostêp do elementów
	reference front() { return elems[0]; } //zmieniæ 1 el
	const_reference front() const { return elems[0]; }//otrzymaæ 1 el.
	reference back() { return elems[size() - 1]; }//zmieniæ ostatni el.
	const_reference back() const { return elems[size() - 1]; }//otrzymaæ  ostatni el.
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
	bool empty() const { if (Count == 0) return true; else return false; }; //sprawdŸ pustkê
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
	//usuñ element z koñca
	void pop_back()
	{
		if (!empty())elems[Count--] = 0;
	}
	void clear() { Count = 0; };
	//wyczyœæ tablicê

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
	size_type Size;   //liczba przydzielonych elementów pamiêci (wielkosc tablicy)
	size_type Count;  //liczba przydzielonych elementów tablicy (ilosc uzywanych elementow)
	type_value *elems;//wskaŸnik do danych (wskaŸnik na tablice)
};
