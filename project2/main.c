#include <stdio.h>
#include <string.h>

unsigned countWord(char n[], unsigned sz){
    unsigned word_count = 0;
    for(unsigned i = 0; i < sz; i++){
        if(n[i] == ' ' && n[i+1] != ' ' && n[i+1] != '\0'){
            word_count++;
        }
        else if(i == sz - 1 && n[i] == '\0')
            word_count++;
    }
    
    return word_count;
}

void countFreq(char n[], unsigned sz){
    unsigned small_letters_freq[26];
    unsigned capital_letters_freq[26];
    
    // initialize the freq array
    for (unsigned i = 0; i < 26; i++){
        small_letters_freq[i] = 0;
        capital_letters_freq[i] = 0;
    }
    
    // count freq
    for (unsigned i = 0; i < sz; i++){
        char c = n[i];
        if (c >= 65 && c <= 90){
            capital_letters_freq[c - 65]++;
        }
        else if (c >= 97 && c <= 122){
            small_letters_freq[c - 97]++;
        }
    }
    
    // print freq
    for (unsigned i = 0; i < 26; i++){
        if (capital_letters_freq[i] != 0){
            printf("%c: %d\n", (char)(i+65), capital_letters_freq[i]);
        }
        if (small_letters_freq[i] != 0){
            printf("%c: %d\n", (char)(i+97), small_letters_freq[i]);
        }
        
    }
}

void countTotalFreq(char n[], unsigned sz){
    unsigned freq[(126 - 33) + 1];
    
    // initialize the freq array
    for (unsigned i = 0; i < 94; i++){
        freq[i] = 0;
    }
    
    // count freq
    for (unsigned i = 0; i < sz; i++){
        char c = n[i];
//        if (c >= 65 && c <= 90){
//            freq[c - 65]++;
//        }
//        else if (c >= 97 && c <= 122){
//            freq[c - 97]++;
//        }
        freq[c - 32]++;
    }
    
    // print freq
    for (unsigned i = 0; i < 94; i++){
        if (freq[i] != 0){
            printf("%c: %d\n", (char)(i+32), freq[i]);
        }
    }
}

void ignoreRegister(char n[], unsigned sz){
    unsigned freq[26];
    
    // initialize the freq array
    for (unsigned i = 0; i < 26; i++){
        freq[i] = 0;
    }
    
    // count freq
    for (unsigned i = 0; i < sz; i++){
        char c = n[i];
        if (c >= 65 && c <= 90){
            freq[c - 65]++;
        }
        else if (c >= 97 && c <= 122){
            freq[c - 97]++;
        }
    }
    
    // print freq
    for (unsigned i = 0; i < 26; i++){
        if (freq[i] != 0){
            printf("%c: %d\n", (char)(i+65), freq[i]);
        }
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
//    printf("argc: %d\n", argc);
    printf("argv: %s\n", argv[1]);

    char st[] = "Yahya is a good Student !@#$%^ ";
    if(argc < 2){
        // part D
        countTotalFreq(st, sizeof(st) / sizeof(st[0]));
    }
    
    if(argc == 2){
                if(strcmp(argv[1], "-w") == 0 || strcmp(argv[1], "--word") == 0){
            // part A
            printf("word count: %d\n", countWord(st, sizeof(st) / sizeof(st[0])));
        }
        else if(strcmp(argv[1], "--en") == 0){
            // part B
            countFreq(st, sizeof(st) / sizeof(st[0]));
        }
        else if(strcmp(argv[1], "--all") == 0){
            // part D
            countTotalFreq(st, sizeof(st) / sizeof(st[0]));
        }
        else if(strcmp(argv[1], "--ir") == 0){
            // part D
            ignoreRegister(st, sizeof(st) / sizeof(st[0]));
        }
        
    }
    return 0;
}