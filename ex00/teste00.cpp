#include<iostream>
#include <string>
#include <cstring>
using namespace std;

char **megaphone(int argc, char **argv);
int checkNumberArgc();
int checkArgv();
int checkYourSelf();
char **FtTwoPointer(string &input, char **&argv);

int	main(){
	cout << "\n 	Test 00	 \n\n";
	checkNumberArgc();
	checkArgv();
	checkYourSelf();
	return 0;
}

int	checkNumberArgc(){
	char name[] = " ";
	char *argv[] = {name,NULL};
	int i;

	i = 1;

	while(i <= 2){
		if(megaphone(i, argv) != 0)
			cout << "00  Number Argc " << i <<": [ ok ]  ^_^\n";
		else
			cout << "00 {Number Argc " << i <<": [fail]} =( \n";
		i++;
	}
	return(0);
}

int	checkArgv(){
	char argv1[] = "Lu_c%$9*/f@!as";
	char argv2[] = "ma!rti!!nS";
	char *argv[] = {argv1,argv2,NULL};
	char **result;
	int i;

	i =0;
	cout << "\n\nCheck Argv Result!\n\n";
	cout << "Enviado  -> ";
	while(argv[i]){
		cout << argv[i] <<" ";
		i++;
	}

	result = megaphone(2, argv);

	cout << "\n<->\n";
	cout << "Recebido -> ";
	i =0;
	while(argv[i]){
		cout << result[i] <<" ";
		i++;
	}
	return(0);
}

int checkYourSelf(){

	string input;
	char **argv = NULL;

	while(input != "sair")
	{
		cout << "\n\nEntre com a Frase ou digite \"sair\": \n\n";
		getline (cin, input);
		if (input != "sair"){
			argv = FtTwoPointer(input,argv);
			megaphone(2, argv);
			cout << "\n\nRetorno do Megaphone: " << argv[0] << endl;
			delete[] argv[0];
			delete[] argv;
		}
	}
	return(0);
}

char **FtTwoPointer(string &input, char **&argv){
	argv = new char *[1];
	argv[0] = new char [input.length() + 1];
	strcpy(argv[0], input.c_str());
	return(argv);
}
