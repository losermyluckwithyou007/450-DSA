#include<bits/stdc++.h>
using namespace std;
# define NO_OF_CHARS 256

class solution{
    public :

    void fillCharCount(char *str, int *count){

        for(int i=0;*(str+i);i++){
            count[*(str+i)]++;
        }

    }

    void printDups(char *str){

        int *count = (int*)calloc(NO_OF_CHARS,sizeof(int));

        fillCharCount(str, count);

        for(int i=0;i< NO_OF_CHARS;i++){
            if(count[i]>1) cout<<(char)i<<" -> count = "<<count[i]<<endl;
        }

        free(count);

    }
};

int main(){

    solution s;
    char str[] = "test string";
    s.printDups(str);

    return 0;
}