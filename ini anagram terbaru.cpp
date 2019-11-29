#include<iostream>
#include<string.h>
using namespace std;
int main(){
	
	char kata[100] = "";
	cout << "Input kata : ";
	fflush(stdin); gets(kata);
	
	char kata2[100] = "";
	cout << "Input kata2 : ";
	fflush(stdin); gets(kata2);
	
	int i = 0;
	bool ketemu = true;
	while((kata[i] != '\0') and (ketemu)){
		
		int j = 0;
		while((kata2[j] != '\0') and ( kata[i] != kata2[j]))
			j++;
		
		if(j == strlen(kata2)){
			ketemu = false;
		} 
		
		else{
			int k = 0;
			int l = 0;
			char temp[100] = "";
			while(kata2[k] != '\0'){
				// proses pembuangan
				if(j != k){
					temp[l] = kata2[k];
					l++;
				}
				
				k++;
			}
			strcpy(kata2,temp);
			i++;
			cout << kata2  << '\n';
		}
			
	}
	
	if(ketemu)
		cout << "anagram";
	else
		cout << " bukan anagram";
	
	
	
	
	
}
