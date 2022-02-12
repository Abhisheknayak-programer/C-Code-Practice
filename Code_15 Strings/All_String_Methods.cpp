#include<iostream>
#include<string>
using namespace std;

int main(){
    string s = "Abhishek";

    // Finding the length of the string
    cout << "Length of your name is : " << s.length() << endl;

    // Finding the Size of the string
    cout << "Size of your name is : " << s.size() << endl;

    // Resize of the string
    string str1 = "Abhishek Nayak";
    cout << "Before resize the string is : " << str1 << endl;
    str1.resize(10);
    cout << "After resize the string is : " << str1 << endl;

    // Clear of the string
    string str2 = "Abhishek Nayak";
    cout << "Before clear the string is : " << str2 << endl;
    str2.clear();
    cout << "After clear the string is : " << str2 << endl;

    // Check for Empty or not
    string str3 = "";
    cout << str3.empty() << endl; // Here 1 means empty string
    cout << str1.empty() << endl; // 0 means not empty

    // Check at a particular position of the string
    int mid = s.length()/2;
    cout << "The mid char of the string value is : " << s.at(mid) << endl;
    
    // Check the first char of the string
    cout << "The First char of the string value is : " << s.front() << endl ;

    // Check the last char of the string
    cout << "The Last char of the string value is : " << s.back() << endl;

    // Using + Operator in string
    string name = "John";
    name += " ";
    name = name + "Doe";
    cout << name << endl;

    // Append in string 
    string new_name_1 = "Abhishek";
    string new_name_2 = " Nayak";
    
    new_name_1.append(new_name_2);
    cout << new_name_1 << endl;

    int len = new_name_2.length();
    new_name_2.append(new_name_1,0,len); // (Append inside string, start, end)
    cout << new_name_1 << endl;
    
    string empty_string = "-> ";
    string greatDeveloper = "Mr. Abhishek Nayak";
    empty_string.append(greatDeveloper);
    cout << empty_string << endl;

    empty_string += " ";
    empty_string.append(greatDeveloper.begin()+10,greatDeveloper.end()); //(Append from the location,Append to the location)
    cout << empty_string << endl;

    // Push_back operation in string
    string book = "Wings of fire";
    string author = " By, APJ Abdul Kalam";
    for(int i =0;i<author.size();i++){
        book.push_back(author[i]);
    }
    cout << book << endl;

    // Assign in string
    string emptyStr = "";
    string message ="The quick brown fox jumps over a lazy dog.";
    emptyStr.assign(message);
    cout << "1. " << emptyStr << endl;
    emptyStr.clear();

    emptyStr.assign("jumps over a lazy dog.",8); //(It will stop when that will reach to that end Index i.e, 8 HERE)
    cout << "2. " << emptyStr << endl;
    emptyStr.clear();

    emptyStr.assign(message.begin()+4,message.end());
    cout << "3. " << emptyStr << endl;
    emptyStr.clear();

    emptyStr.assign(10,'*');
    cout << "4. " << emptyStr << endl;
    emptyStr.clear();

    // Insert in a string
    string w1 = "Hello Guys \n";
    string w2 = "I am Abhishek Nayak \n";
    string w3 = "A MERN Stack Developer and a Freelancer \n";

    w2.insert(0,w1); // (Insert at the Index and the element to insert)
    cout << w2 << endl;

    w3.insert(0,w2);
    cout << w3 << endl;

    w1.insert(6,4,'*'); // (Insert Index, Insert Upto 4 Index, What you need to Insert)
    cout << w1 << endl;

    w2.insert(13," :) :) :) :) :) :) ",8); // (Inserting Backward From Index, String To be Inserted, How many places you want to insert)
    cout << w2 << endl;

    w1.insert(w1.begin()+5,':'); // (startIndex, Char to be Inserted)
    cout << w1 << endl;

    w1.insert(w1.end(),3,'.'); // (startIndex, Char to be Inserted)
    cout << w1 << endl << endl;


    // Erase in string
    cout << "Erase Operation in Strings : " << endl << endl;

    cout << "STRING BEFORE : " << endl << w1 << endl;
    w1.erase(5,20); //(Erase start Index,Earse upto how many chars after that location)
    cout << w1 << endl; 

    cout << "STRING BEFORE : " << endl << w2 << endl;
    w2.erase(w2.begin()+1); // Erasing a particular Index
    cout << w2 << endl;

    cout << "STRING BEFORE : " << endl << w3 << endl;
    w3.erase(w3.begin()+5,w3.end()-4);  // (Delete start,Delete End)
    cout << w3 << endl;


    // SWAP in string
    string buyer = "Money";
    string seller = "Goods";

    cout << "Before the swap the buyer has " << buyer << " and the seller has " << seller << endl;
    seller.swap(buyer);
    cout << "After the swap the buyer has " << buyer << " and the seller has " << seller << endl;


    // Pop_back in string
    string greet = "Good Morning :)";
    greet.pop_back();
    cout << greet << endl;

    // Replace in string
    string ex1 = "I am a Coder";
    string ex2 = "I love to code on Leetcode";
    string ex3 = "I have solved around 1500+ Questions";
    
    ex1 = ex2; // Replace the string directly
    cout << ex1 << endl;    

    ex1.insert(ex1.end(),' ');
    ex1.replace(ex1.length(),5,ex3); // (start Index,Delete Index Upto,String to be replaced)
    cout << ex1 << endl;   

    string abc = "abcdefghijklmnopqrstuvwxyz";
    abc.replace(5,20,"Hello Guys"); // (start Index,Delete Index upto,String to be replaced)
    cout << abc << endl;    

    string loveCoding = "Javascript and cplusplus";
    loveCoding.replace(15,10,"C++");
    cout << loveCoding << endl;

    string love = "Javascript is cool";
    love.replace(love.begin()+15,love.end()-2,"oooooooooooooooooooooooo");
    cout << love << endl;


    // Copy a string
    char temp[10];
    int totalWords = 4;
    love.copy(temp,totalWords,0); // (char array where that will be copied,total number of words after that location,start index)
    temp[totalWords] = '\0';    
    cout << temp << endl;


    // Find in string
    string s1 = "There are two needles in this haystack with needles.";
    string s2 = "needle";

    int firstFound = s1.find(s2);  // (String to be searched)
    cout << "First Needle found at the location : " << firstFound << endl;

    int secondFound = s1.find(s2,firstFound+1); // (String to be searched,Search start location)
    cout << "Second Needle Found at the location : " << secondFound << endl;

    // Rfind in string
    string s3 = "The sixth sick sheik's sixth sheep's sick.";
    string s4 = "sick";

    int found = s3.rfind(s4); // Gives the last location of the found word
    cout << "The last occurence of the word sick is : " << found << endl;
    

    // Substring in string
    string str10 = "We think in generalities, but we live in details.";
    string substring_str10 = str10.substr(3,5); // (Start Substring From,upto how many steps)
    cout << substring_str10 << endl;

    int storeIndex = str10.find("live");
    string subString_StoredIndex = str10.substr(storeIndex); //(Stores everything after the index entered)
    cout << subString_StoredIndex << endl;


    // Compare in string  [0 means true and 1 means false]
    string appleType1 = "red apple";
    string appleType2 = "green apple";
    
    if(appleType1.compare(appleType2) == 0){
        cout << "Same Apple Types" << endl;
    }else{
        cout << "Different Apple Types" << endl;
    }

    if(appleType2.compare(6,5,"apple") == 0){
        cout << "Yes it is a type of a apple" << endl;
    }else{
        cout << "No it is not a apple" << endl;
    }   

    if(appleType2.compare(6,5,appleType1,4,5) == 0){
        cout << "Yes it is a type of a apple" << endl;
    }else{
        cout << "No it is not a apple" << endl;
    }   


    // Find first Index of
    string demo1 = "Please, replace the vowels in this sentence by asterisks.";
    int FoundFirstIndex = demo1.find_first_of("aeiou");
    cout << "Found First Index at : " << FoundFirstIndex << endl;
    while(FoundFirstIndex != string::npos){
        demo1[FoundFirstIndex] = '*';
        FoundFirstIndex = demo1.find_first_of("aeiou",FoundFirstIndex+1);
    }
    cout << demo1 << endl;



    // Find Last Index of
    string demo2 = "Please, replace the vowels in this sentence by asterisks.";
    int FoundLastIndex = demo2.find_last_of("aeiou");
    cout << "Found Last Index at : " << FoundLastIndex << endl;



    // Find First Not of
    string question = "what is your name...?";
    int FoundMatched = question.find_first_not_of("abcdefghijklmnopqrstuvwxyz ");
    cout << "The first non alphabet is : " << question[FoundMatched] << endl;



    // Find Last Not of
    string newquestion = "what is your name...?";
    int FoundMatchedLast = newquestion.find_last_not_of("abcdefghijklmnopqrstuvwxyz ");
    cout << "The first non alphabet is : " << newquestion[FoundMatchedLast] << endl;


    return 0;
}