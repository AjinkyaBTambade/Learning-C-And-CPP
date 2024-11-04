 #include <stdio.h>
int main() 
{
	FILE * filePtr=fopen("transflower.txt","w");
    if (filePtr != NULL)
    {
        fprintf(filePtr, "Welcome to Transflower Learning Pvt. Ltd \n");
        fprintf(filePtr, "TAP YOUR POTENTIAL\n");
        fclose(filePtr);
    }
	
	//Read content from File
	char buffer[350];
    filePtr = fopen("transflower.txt", "r");
    if (filePtr != NULL)
    {
        // fgets(buffer,sizeof(buffer),filePtr);
        while (fgets(buffer, sizeof(buffer), filePtr))
        {
            printf("%s", buffer);
        }
        fclose(filePtr);
    }
    return 0;
}