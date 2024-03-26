#include <iostream>
#include <fstream>

using namespace std;
/**
 * @brief writes sample_size number of intergers
 * Example output: if n = 3 and arr = [1,2,3]
 * 1
 * 2
 * 3
 * 
 * @param filename
 * @param arr
 * @param sample_size
 */
void writeToFile(string filename, int * arr, int sample_size){
    ofstream file(filename);
    int val;

    for(int i = 0; i < sample_size; i++) {
        file << arr[i];
        file << "\n";
    }
    file.close();
    printf("wrote to %s\n",filename.c_str());
}

/**
 * @brief writes sample_size number of strings
 * Example output: if n = 2 and arr = ["cat","dog"]
 * cat
 * dog
 * @param filename
 * @param arr
 * @param sample_size
*/
void writeToFile(string filename, string * arr, int sample_size){
    ofstream file(filename.c_str());

    for(int i = 0; i < sample_size; i++) {
        file << arr[i];
        file << "\n";
    }
    file.close();
    printf("wrote strings to %s\n", filename.c_str());
}

/**
 * @brief writes sample_size number of char
 * Example output: if n= 2 and arr = ["c","d"]
 * c
 * d
 * @param filename
 * @param arr
 * @param sample_size
*/
void writeToFile(string filename, char * arr, int sample_size){
    ofstream file(filename.c_str());

    for(int i = 0; i < sample_size; i++) {
        file << arr[i];
        file << "\n";
    } 
    file.close();
    printf("wrote characters to %s\n", filename.c_str());
};

/**
 * @brief reads the content of any file
 * 
 * @param filename
*/
void readFile(string filename){
    ifstream file(filename.c_str());
    string line;
    while(!file.eof()){
        file >> line;
        printf("%s\n", line.c_str());
    }
}
int main(){
    const int SAMPLE_SIZE= 10;
    int array_int[SAMPLE_SIZE] = {1,2,3,4,5,6,7,8,9,10};
    string array_str[SAMPLE_SIZE] = {"This", "is", "a", "sentence. ",
                                    "This", "is", "another", "sentence.",
                                    "The", "end."};

    char array_char[SAMPLE_SIZE] = {'a', 'b', 'c', 'd', 'e', '0', '1', '2', '3', '4'};

    string int_file = "array_int.csv";
    writeToFile(int_file, array_int, SAMPLE_SIZE); // arr is already a point

    // Do the same for the other arrays

    //CREATE a string variable ast the filename and assign
    // it the value "array_str.csv"
    string str_filename = "array_str.csv";

    //CALL writeToFile using the string variable above, array_str, and SAMPLESIZE as
    //parameters
    writeToFile(str_filename, array_str, SAMPLE_SIZE);

    //CREATE a string variable as the filename and assign
    // it the value "array_char.cvs"
    string char_filename = "array_char.csv";

    //CALL writeToFile using the string variable above, array_char and SAMPLESIZE as
    //parameters
    writeToFile(char_filename, array_char, SAMPLE_SIZE);


    //CALL readFile() on all three generated files.
    readFile(int_file);
    readFile(str_filename);
    readFile(char_filename);

    return 0;
}