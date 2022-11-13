#include<iostream>
#include <ctime>
#include<string>
#include<cstdlib>

using namespace std;

int main(){

      string animals[9]={"lion","zebra","tiger","leopard","dog","pig","snake","monkey"};
      string films[9]={"after","reve","fact","shoter","since","plea","go","come"};
      string books[9]={"maths","java","physics","networking","english","dsa","french","history"};
      string districts[9]={"karongi","nyarugenge","kigali","Rutsiro","gatsibo","huye","nyanza","gasabo"};

      int category;
      string playAgain;
      beginning:

	  cout<<"welcome to the game \n choose the category you want:"<<endl;
	  cout<<"1.names of animals"<<endl;
	  cout<<"2.films"<<endl;
	  cout<<"3.books"<<endl;
	  cout<<"4.districts"<<endl;
      cin>>category;

      bool stillPlaying=true;

      switch(category){
           case 1:
        while(stillPlaying){
        srand(time(NULL));
        int random_num= rand()% 9;

        int guesses=7;
        string trueWord= animals[random_num];
        //bool atWord = false;
        //int wordNum=1;
        string blanks=trueWord;
         for(char& c: blanks){
	 	  c='_';
        }
        bool gameover =false;

        while(!gameover){

            cout<<"The word is:"<<blanks<<endl;
            cout<<"you are remaining "<<guesses<<" guesses"<<endl;
            cout<<"enter a letter to guess:";
            char letter;
            cin>>letter;

            int i =0;
            bool match=false;
            for(char c: trueWord){
                if(letter == c){
                    blanks[i]=letter;
                    match=true;

                   guesses--;
                } i++;


            }

            if(!match){
                cout<<"the word does not contain this letter"<<letter<<endl;
                guesses--;
            }
            if(blanks==trueWord){
                gameover = true;
                cout<<"congratulations ,you have guessed the word"<<endl;
                cout<<"the word was "<<blanks<<endl;

            }

            if(guesses==0){
		 	gameover=true;
		 	cout<<"you are out of guesses."<< " ";
		 	cout<<"the word was :" <<trueWord<<endl;
		 }


        }
        stillPlaying=false;
        cout<<"continue playing again, Y or N :";

        cin>>playAgain;

        if(playAgain == "n"){
            stillPlaying=false;
            cout<<"end of game";

        }else if(playAgain == "y"){
            goto beginning;

        }

    }
    break;

     case 2:
        while(stillPlaying){
        srand(time(NULL));
        int random_num= rand()% 9;

        int guesses=6;

        string trueWord= films[random_num];
        bool atWord = false;
        int wordNum=1;
        string blanks=trueWord;
         for(char& c: blanks){
	 	  c='_';
        }
        bool gameover =false;

        while(!gameover){

            cout<<"The word is:"<<blanks<<endl;
            cout<<"you are remaining "<<guesses<<" guesses"<<endl;
            cout<<"enter a letter to guess:";
            char letter;
            cin>>letter;

            int i =0;
            bool match=false;
            for(char c: trueWord){
                if(letter == c){
                    blanks[i]=letter;
                    match=true;

                   guesses--;
                } i++;


            }

            if(!match){
                cout<<"the word does not contain this letter"<<letter<<endl;
                guesses--;
            }
            if(blanks==trueWord){
                gameover = true;
                cout<<"congratulations ,you have guessed the word"<<endl;
                cout<<"the word was "<<blanks<<endl;

            }

            if(guesses==0){
		 	gameover=true;
		 	cout<<"you are out of guesses.";
		 	cout<<"the word was :" <<trueWord<<endl;
		 }


        }
        stillPlaying=false;
        cout<<"continue playing again, Y or N";

        cin>>playAgain;

        if(playAgain =="n"){
            stillPlaying=false;
            cout<<"end of game";

        }else if(playAgain == "y"){
            goto beginning;

        }

    }
    break;

     case 3:
        while(stillPlaying){
        srand(time(NULL));
        int random_num= rand()% 9;

        int guesses=9;
        string trueWord= books[random_num];
        bool atWord = false;
        int wordNum=1;
        string blanks=trueWord;
         for(char& c: blanks){
	 	  c='_';
        }
        bool gameover =false;

        while(!gameover){

            cout<<"The word is:"<<blanks<<endl;
            cout<<"you are remaining "<<guesses<<" guesses"<<endl;
            cout<<"enter a letter to guess:";
            char letter;
            cin>>letter;

            int i =0;
            bool match=false;
            for(char c: trueWord){
                if(letter == c){
                    blanks[i]=letter;
                    match=true;

                   guesses--;
                } i++;


            }

            if(!match){
                cout<<"the word does not contain this letter"<<letter<<endl;
                guesses--;
            }
            if(blanks==trueWord){
                gameover = true;
                cout<<"congratulations ,you have guessed the word"<<endl;
                cout<<"the word was "<<blanks<<endl;

            }

            if(guesses==0){
		 	gameover=true;
		 	cout<<"you are out of guesses";
		 	cout<<"the word was :" <<trueWord<<endl;
		 }


        }
        stillPlaying=false;
        cout<<"continue playing again, y or n";

        cin>>playAgain;

        if(playAgain == "n"){
            stillPlaying=false;
            cout<<"end of game";

        }else if(playAgain == "y"){
            goto beginning;

        }

    }
    break;

     case 4:
        while(stillPlaying){
        srand(time(NULL));
        int random_num= rand()% 9;

        int guesses=9;
        string trueWord= districts[random_num];
        bool atWord = false;
        int wordNum=1;
        string blanks=trueWord;
         for(char& c: blanks){
	 	  c='_';
        }
        bool gameover =false;

        while(!gameover){

                	cout<<"The word is:"<<blanks<<endl;
                cout<<"you are remaining "<<guesses<<" guesses"<<endl;
            cout<<"enter a letter to guess:";
            char letter;
            cin>>letter;

            int i =0;
            bool match=false;
            for(char c: trueWord){
                if(letter == c){
                    blanks[i]=letter;
                    match=true;

                   guesses--;
                } i++;


            }

            if(!match){
                cout<<"the word does not contain this letter :"<<letter<<endl;
                guesses--;
            }
            if(blanks==trueWord){
                gameover = true;
                cout<<"congratulations ,you have guessed the word"<<endl;
                cout<<"the word was "<<blanks<<endl;

            }

            if(guesses==0){
		 	gameover=true;
		 	cout<<"you are out of guesses";
		 	cout<<"the word was :" <<trueWord<<endl;
		 }


        }
        stillPlaying=false;
        cout<<"continue playing again, y or n: ";

        cin>>playAgain;

        if(playAgain == "n"){
            stillPlaying=false;
            cout<<"end of game";

        }else if(playAgain == "y"){
            goto beginning;

        }

    }
    break;



      }
      return 0;



   }





