/*Break the string into substrings based on a delimeter.
  input:String which has '_' in between substrings.
  output:multiple strings.
*/
#include <stdio.h>
#include <string.h>

int main() {

int num1;
int arr[20];

int i=0;
int j=0;
int k;
char s[30];
char dummy1[30]="";

scanf("%s",s);

int l=strlen(s);


for(num1=0;num1<l;num1++)
{

    if(s[num1]=='_')
    {
    arr[i]=num1;
    i++;
    }
}
arr[i]=l;

for(k=0;k<=i;k++)
{

switch(k)
{
case 0:
    for(j=0;j<arr[0];j++)
    {
        dummy1[j]=s[j];
    }
    dummy1[j]='\0';
    printf("%s\n",dummy1);
    break;


case 1:
    for(j=(arr[k-1]+1);j<arr[k];j++)
    {
        dummy1[j-(arr[k-1]+1)]=s[j];
    }
    dummy1[j-(arr[k-1]+1)]='\0';
    printf("%s\n",dummy1);
    break;

case 2:
    for(j=(arr[k-1]+1);j<arr[k];j++)
    {
        dummy1[j-(arr[k-1]+1)]=s[j];
    }
    dummy1[j-(arr[k-1]+1)]='\0';
    printf("%s\n",dummy1);
    break;
case 3:
    for(j=(arr[k-1]+1);j<arr[k];j++)
    {
        dummy1[j-(arr[k-1]+1)]=s[j];
    }
    dummy1[j-(arr[k-1]+1)]='\0';
    printf("%s\n",dummy1);
    break;

case 4:
    for(j=(arr[k-1]+1);j<arr[k];j++)
    {
        dummy1[j-(arr[k-1]+1)]=s[j];
    }
    dummy1[j-(arr[k-1]+1)]='\0';
    printf("%s\n",dummy1);
    break;

case 5:
    for(j=(arr[k-1]+1);j<arr[k];j++)
    {
    dummy1[j-(arr[k-1]+1)]=s[j];
    }
    dummy1[j-(arr[k-1]+1)]='\0';
    printf("%s",dummy1);

    break;

default:
    {
        printf("error....");
    }

}

}
return 0;
}

