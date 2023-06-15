#include "res/.hppFiles/Functions.hpp"
#include "res/.hppFiles/EmptyObjects.hpp"

std::string ReadLine(int x,std::string path){
    std::ifstream f(path);
    std::string buffer;
    int i=0;
    while(!f.eof()){
        i++;
        getline(f,buffer);
        if(i==x) break;
    }
    f.close();
    return buffer;
}

void invalid_input_check(int &x){
    using namespace std;
	while(1)
    {
        if(std::cin.fail())//returns true when input fails
        {
            std::cin.clear();//use to clear error state of buffer
            
            //ignores rest of the line
            //after first error occurs
            
            //skips to the next line
            std::cin.ignore(numeric_limits<streamsize>::max(),'\n');
            std::cout<<"Please enter the valid input"<<std::endl;
            std::cin>>x;
        }
        if(!std::cin.fail())
			break;
    }
}

void invalid_input_check(double &x){
    using namespace std;
	while(1)
    {
        if(std::cin.fail())//returns true when input fails
        {
            std::cin.clear();//use to clear error state of buffer
            
            //ignores rest of the line
            //after first error occurs
            
            //skips to the next line
            std::cin.ignore(numeric_limits<streamsize>::max(),'\n');
            std::cout<<"Please enter the valid input"<<std::endl;
            std::cin>>x;
        }
        if(!std::cin.fail())
			break;
    }
}


int FillTheVector(std::vector<Weapon> &W,int space){
    for(int i=0;i<space;i++){
        W.push_back(NoneWeapon);
        if(W.capacity()>=INVENTORY_SPACE){
            return 0;
        }
    }
    return 1;
}   
int FillTheVector(std::vector<Armor> &A,int space){
    for(int i=0;i<space;i++){
        A.push_back(NoneArmor);
        if(A.capacity()>=INVENTORY_SPACE){
            return 0;
        }
    }
    return 1;
}   

int FillTheVector(std::vector<Potion> &P,int space){
    for(int i=0;i<space;i++){
        P.push_back(NonePotion);
        if(P.capacity()>=INVENTORY_SPACE){
            return 0;
        }
    }
    return 1;
}   

int FillTheVector(std::vector<Other> &O,int space){
    for(int i=0;i<space;i++){
        O.push_back(NoneOther);
        if(O.capacity()>=INVENTORY_SPACE){
            return 0;
        }
    }
    return 1;
}   
std::string GetCharacterName(int x){
    if(x==1)
        return "Fati";
    if(x==2)
        return "Arda";
    if(x==3)
        return "Furkan";
    if(x==4)
        return "Haktan";
}

int Random(int x){
    srand(time(0));
    int random_number=rand()%x+1;
    return random_number;
}

int combine2Int(int a, int b) {
   int times = 1;
   while (times <= b)
      times *= 10;
   return a*times + b;
} 

int separateInts(int num,int nth_digit ){
    using namespace std;
    if(num/10<1)
        cout<<"Error: First argumant is one digit"<<endl;
    
    int buffer[10];
    buffer[0]=1;
    while (num > 0){

        int digit = num%10;
        num /= 10;
        buffer[buffer[0]]=digit;
    if(buffer[0]==nth_digit)
        return digit;
    
    buffer[0]++;
    }
    cout << "Error: There is not enough digits"<<endl;
}