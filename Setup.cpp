#include "res/.hppFiles/Setup.hpp"

/* create classes for weapon types like 
weapon 
armor
potion
others

and create a different file for map cuz it get very untidy */

int error_counter=0;

int InventorySetup(int choice, std::vector<Weapon> &W,std::vector<Armor> &A, 
std::vector<Potion> &P,std::vector<Other> &O ,std::vector<Magic>&M,CCharacter &character){

	using namespace std;
	if(choice==1){//fati

		int choice3;
			err4:
			cout <<"Choose your inventory"<<endl;
			cout <<"1. wooden_staff + leather_armor + full heal potion, mana+10"<<endl;
			cout <<"2. spear + leather armor + dart(5)+ 100 gold  "<<endl;
			cin>>choice3;
			//invalid_input_check(choice3);
			try{
				if(choice3<1||choice3 >2)
					throw error_counter;
			}	
			catch(int i){
				cout <<"ERROR "<<i<<":invalid input "<<endl;
				error_counter++;
				goto err4;
			}
			if(choice3==1){//  this should be an object  
				W.push_back(WoodenStaff);//object
				
				A.push_back(LeatherArmor);
				
				P.push_back(FullHealPotion);
			
				M.push_back(Heal);
				M.push_back(FireBall);
				M.push_back(MagicMissile);
				character.mana+=10;
			}
			if(choice3==2){
				W.push_back(Spear);
				W.push_back(Dart);//5 piece
				A.push_back(LeatherArmor);
				

				M.push_back(Heal);
				M.push_back(FireBall);
				M.push_back(MagicMissile);
				character.money+=100;
			}

			character.wisdom++;
			character.money+=100;
			character.mana+=20+(character.wisdom*10);
			character.health+=character.vitality*4;
			character.prestige+=0;

			character.dodgeProbility+=1+(character.agility*1.5);
			character.attack+=0+(character.strength*3);;
			character.defence+=0;
			return 1;
	}else 
	if(choice=2){//arda
		int choice3;
			err5:
			cout <<"Choose your inventory"<<endl;
			cout << "1.Chain Armor, Claymore, Minor heal potion, Attack +5"
			<<endl;
			cout <<"2.Chain armor, shield, long sword, Full Heal Potion"
			<<endl;

			cin>>choice3;
			//invalid_input_check(choice3);
			try{
				if(choice3<1||choice3 >2)
					throw error_counter;
			}	
			catch(int i){
				cout <<"ERROR "<<i<<":invalid input "<<endl;
				error_counter++;
				goto err4;
			}
			if(choice3==1){
				A.push_back(ChainArmor);
				W.push_back(Claymore);
				P.push_back(MinorHealthPotion);
				

				M.push_back(FireBall);
				character.attack+=5;
			}
			if(choice3==2){
				A.push_back(ChainArmor);
				W.push_back(LongSword);
				P.push_back(FullHealPotion);
				

				M.push_back(FireBall);
			}
			character.strength++;
			character.money+=100;
			character.mana+=10+(character.wisdom*5);
			character.health+=character.vitality*4;
			character.prestige+=5;
	
			character.dodgeProbility+=1+(character.agility*1.5);
			character.attack+=4+(character.strength*3);;
			character.defence+=0;
			return 2 ;
			
	}else 
	if(choice==3){//furkan
			int choice3;
			err6:
			cout <<"Choose your inventory"<<endl;
			cout <<"1.Leather armor, short sword, throwing knives, minor haelth potion "
			<<endl;
			cout << "2.Leather armor, Bow, Double Dagger, agility+1 "
			<<endl;
			cin>>choice3;
			//invalid_input_check(choice3);
			try{
				if(choice3<1||choice3 >2)
					throw error_counter;
			}	
			catch(int i){
				cout <<"ERROR "<<i<<":invalid input "<<endl;
				error_counter++;
				goto err4;
			}
			if(choice3==1){
				A.push_back(LeatherArmor);
				W.push_back(ShortSword);
				W.push_back(ThrowingKnives);
				P.push_back(MinorHealthPotion);
				

				M.push_back(FireBall);
			}
			if(choice3==2){
				A.push_back(LeatherArmor);
				W.push_back(DoubleDagger);
				W.push_back(Bow);//10 arrow
				

				M.push_back(FireBall);
				character.agility++;
				
			}

			character.agility++;
			character.money+=200;
			character.mana+=10+(character.wisdom*5);
			character.health+=character.vitality*4;
			character.prestige+=0;

			character.dodgeProbility+=4+(character.agility*1.75);
			character.attack+=0+(character.strength*3);;
			character.defence+=0;
			return 3;
	}else 
	if(choice ==4){//haktan
		int choice3;
			err7:
			cout <<"Choose your inventory"<<endl;
			cout <<"1.Great Axe, Leather Armor , Rage Potion, Defence +2"<<
			endl;
			cout <<"2.Double Axe, Rage Potion, Leather Armor, health +2"<<
			endl;
			cin>>choice3;
			//invalid_input_check(choice3);
			try{
				if(choice3<1||choice3 >2)
					throw error_counter;
			}	
			catch(int i){
				cout <<"ERROR "<<i<<":invalid input "<<endl;
				error_counter++;
				goto err4;
			}
			if(choice3==1){
				W.push_back(GreatAxe);
				A.push_back(LeatherArmor);
				P.push_back(RagePotion);
		

				M.push_back(FireBall);
				character.defence+=2;
			}
			if(choice3==2){
				W.push_back(DoubleAxe);
				A.push_back(LeatherArmor);
				P.push_back(RagePotion);
				

				M.push_back(FireBall);
				character.health+=2;
			}

			character.vitality++;
			character.money+=100;
			character.mana+=10+(character.wisdom*5);
			character.health+=5+(character.vitality*4);
			character.prestige+=0;

			character.dodgeProbility+=1+(character.agility*1.5);
			character.attack+=0+(character.strength*3);
			character.defence+=2;

			return 4;
	}
				FillTheVector(W,3);
				FillTheVector(A,3);
				FillTheVector(P,3);
				FillTheVector(O,4); 
	if(choice>4||choice<1){
		cout <<endl << "ERROR:Your class choice is invalid,UNKNOWN ERROR, the game will be ended in 3 seconds"<<endl;
		SDL_Delay(3000);
		exit(0);
	}
}

int InitializeTheCharacter(CCharacter &character){;
	using namespace std;
		err1:
	int choice;
	cout<<"OPTIONS"<<endl;
	cout <<"1.New Game"<<endl
	<<     "2.Continue"<<endl
	<<      "3.EXIT"<<endl;
	cin >> choice;
	//invalid_input_check(choice);
		//ERROR 1
	try{
		if(1>choice || choice>3)
			throw error_counter;
	}catch(int i){
		cout <<"ERROR "<< i<<":You must choose a valid number"<<endl;
		error_counter++;
		goto err1;
	}
	
	if(choice==1){
		/* create a function to make this work use overloading and save it to text file  */
			err2:
		int choice2;
		cout<<"WELCOME TO THE FATI GAME"<<endl;
		cout <<"What is your name?"<<endl;
		string name;
		cin >> name;
		cin.ignore();
		cout<<"Choose your class"<<endl<<endl;
		cout <<"1.Fati"<<"(Magician)"<<endl
		<<     "2.Arda"<<"(Soldier)"<<endl
		<<     "3.Furkan"<<"(Hunter)"<<endl
		<<     "4.Haktan"<<"(Barbarian)"<<endl;
		cin >> choice2;
		//invalid_input_check(choice2);
		cout <<endl;
			//ERROR 2
		try{
			if(1>choice2 || choice2>4)
				throw error_counter;
		}catch(int i){
			cout <<"ERROR "<< i<<":You must choose a valid number"<<endl;
			error_counter++;
			goto err2;
		}
		character.Class=choice2;
			err3:
		cout<<"Enter your stats(you have total of 12 points)"<<endl;
		cout<<"vitality:";
		cin>>character.vitality;
		//invalid_input_check(character.vitality);
		cout<<"Agility:";
		cin>>character.agility;
		//invalid_input_check(character.agility);
		cout<<"Wisdom:";
		cin>>character.wisdom;
		//invalid_input_check(character.wisdom);
		cout<<"Strength:";
		cin>>character.strength;
		//invalid_input_check(character.strength);
			//ERROR 3
		try{
			if(character.agility+character.vitality+character.strength+character.wisdom!=12)
				throw error_counter;
		}	
		catch(int i){
			cout <<"ERROR "<<i<<":you have 12 points"<<endl;
			error_counter++;
			goto err3;
		}
		InventorySetup(choice2,character.weapons,character.armors,character.potions,character.others,character.magic,character);	
		
		std::array<int,4> EmptyIntArray;
		EmptyIntArray.fill(0);
		character.Location=EmptyIntArray;
		
		//character locaition 10 ele. std::std::vector

		return 1;

	}else if(choice==2){
		/* READ CHARDATA AND ASSIGN IT TO CHARACTER OBJECTS */
		return 2;
	}else{
		exit(0);
	}

}
