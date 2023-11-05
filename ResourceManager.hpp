#pragma once

#include "Resource.hpp"


class ResourceManager
{
public:
	ResourceManager() {
		// konstruktor domyœlny klasy ResourceManager
		data = new Resource();
	}
	
	ResourceManager(const ResourceManager& other) {
		
		data = new Resource();
		*data = *(other.data);
	}

	ResourceManager(ResourceManager&& other) {

		data = (other.data);
		other.data=nullptr;
	}

	ResourceManager& operator=(const ResourceManager& other) {

		*data = *other.data;
		return *this;
	}

	ResourceManager& operator=(ResourceManager&& other) {

		delete data;
		data = other.data;
		other.data = nullptr;
		return *this;
	}

	~ResourceManager()
	{
		delete data;
	}

	}
	// metoda double get
	double get() 
	{
		return data->get();
	}



private: 
	Resource* data;

};

