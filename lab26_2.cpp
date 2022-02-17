#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

void printList(list<string> s){
	list<string>::iterator i;
	for( i = s.begin(); i != s.end(); i++){
		cout << *i << " ";
	}		
	cout << "\n";	
}

int main(){
	
	list<string> line_up;
	list<string>::iterator loc;
	
	line_up.push_back("Alice");
	line_up.push_back("Bob");
	
	loc = find(line_up.begin(),line_up.end(),"Bob");
	line_up.insert(loc,"Oscar");
	
	//Write your code here
	line_up.push_back("Luffy");
	line_up.push_back("Sanji");
	line_up.push_back("Nami"); //ต่อแถว

	//2 คนที่หัวแถวได้เข้าไปในส้วมแล้ว
	line_up.erase(line_up.begin());
	line_up.erase(line_up.begin());

	//Narutu มาแทรกแถวหลัง Luffy
	loc = find(line_up.begin(),line_up.end(),"Sanji");
	line_up.insert(loc,"Narutu");

	//Prayath ท้องเสียปวดขี้สุด ๆ เลยมาแทรกแซวหน้าสุด
	line_up.insert(line_up.begin(),"Prayath");

	//Tony ยอมไม่ได้เลยมาแทรกด้านหลัง Prayath
	loc = find(line_up.begin(),line_up.end(),"Bob");
	line_up.insert(loc,"Tony");

	//Bob ทนไม่ไหวเลย เลยเปลี่ยนใจออกไปขี้ที่อื่น
	line_up.erase(loc);

	//3 คนที่หัวแถวได้เข้าไปในส้วมแล้ว
	line_up.erase(line_up.begin());
	line_up.erase(line_up.begin());
	line_up.erase(line_up.begin());


	printList(line_up);
		
	return 0;
}
