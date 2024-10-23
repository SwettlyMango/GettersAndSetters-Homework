#include <iostream>
#include <string>

using namespace std;

class Animal { // Creating class Animal
	private: // Creating private properties for animal
		string name;
		string species;
		string extinct;
	public: 
		Animal(string n,string s,string e) { // Creating constructor
			name = n;
			species = s;
			extinct = e;
		}
		
		// Creating setters //
		
		void setName(string n) {
			if(n != ""){
				name = n;
			} else {
				cout<<"Name can't be empty"<<endl;
			}
		}
		void setSpecies(string s) {
			if(s != ""){
				species = s;
			} else {
				cout<<"Species can't be empty"<<endl;
			}
		}
		void setIsExtinct(string e) {
			if(e != ""){
				extinct = e;
			} else {
				cout<<"Does this animal extinct? If yes, write True, if no, write False"<<endl;
			}
		}
		
		// Creating getters //
		
		string getName() {
			return name;
		}
		string getSpecies() {
			return species;
		}
		string getIsExtinct() {
			return extinct;
		}
		
		// Creating function for showing discription of an animal //
		
		void animalInfo() {
			cout<< "Name: "<<name<<endl<<"Species: "<<species<<endl;
			if (extinct == "True") { 
				cout<< "Animal is extinct"<<endl;
			} else if (extinct == "False") {
				cout<< "Animal isn't extinct"<<endl;
			}
		}
};


int main() {
	
	Animal Cat1("Siamese cat","Cat","False"); // Creating object Cat1 
	
	Cat1.animalInfo(); // Using showing function
	
	cout<<endl;	// Making spacing between discriptions
	
	Animal Dinosaur1("T-Rex","",""); // Creating object Dinosaur1
	
	Dinosaur1.setSpecies("Theropoda"); // Setting species for Dinosaur1
	Dinosaur1.setIsExtinct("True"); // Setting extinction for Dinosaur1
	
	// Outputing description with use of getters //
	
	cout<< "Name: "<<Dinosaur1.getName()<<endl<<"Species: "<<Dinosaur1.getSpecies()<<endl; 
	if (Dinosaur1.getIsExtinct() == "True") {
				cout<< "Animal is extinct"<<endl;
			} else if (Dinosaur1.getIsExtinct() == "False") {
				cout<< "Animal isn't extinct"<<endl;
			}
	
}
