#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_INPUT 1000

void generateResponse(char input[])
{
    if (strstr(input, "hello") != NULL ||
        strstr(input, "hi") != NULL)
    {
        printf("\nAI: Hello! How can I help you today?\n");
    }
    else if (strstr(input, "ai") != NULL)
    {
        printf("\nAI: Artificial Intelligence allows computers "
               "to perform tasks that normally require human intelligence.\n");
    }
    else if (strstr(input, "python") != NULL)
    {
        printf("\nAI: Python is a popular programming language "
               "used for AI, data science and software development.\n");
    }
    else if (strstr(input, "c language") != NULL ||
             strstr(input, "c programming") != NULL)
    {
        printf("\nAI: C is a powerful general-purpose programming "
               "language commonly used for system and embedded programming.\n");
    }
    else if (strstr(input, "growfinix") != NULL)
    {
        printf("\nAI: Growfinix Task 5 is about building an "
               "AI chat interface that handles user messages and responses.\n");
    }
    else if (strstr(input, "thank") != NULL)
    {
        printf("\nAI: You're welcome! Have a great day.\n");
    }
    else
    {
        printf("\nAI: I received your message: \"%s\"\n", input);
        printf("AI: I am a simple C-based chatbot. "
               "Try asking me about AI, Python or C programming.\n");
    }
}

int main()
{
    char input[MAX_INPUT];

    printf("============================================\n");
    printf("          GROWFINIX - TASK 5\n");
    printf("          AI CHAT INTERFACE\n");
    printf("============================================\n");

    printf("\nChatbot is ready!\n");
    printf("Type 'exit' to close the chatbot.\n");

    while (1)
    {
        printf("\nYou: ");

        if (fgets(input, sizeof(input), stdin) == NULL)
        {
            break;
        }

        input[strcspn(input, "\n")] = '\0';

        if (strcmp(input, "exit") == 0)
        {
            printf("\nAI: Goodbye!\n");
            break;
        }

        generateResponse(input);
    }

    return 0;
}