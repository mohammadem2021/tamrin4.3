#include <stdio.h>

int main() {

    int PhonNumber;
    printf("enter your phone number: ");
    scanf("%d",&PhonNumber);
    int ConvertionIn;
    int ConvertionOut;
    int NetIn;
    int NetOut;
    int CIn=0;
    int COut=0;
    int NIn=0;
    int NOut=0;
    printf("\nmizan mokaleme (be daghighe) ra vared konid (dakheli): ");
    scanf("%d",&ConvertionIn);
    printf("\nmizan mokalme (be daghighe) ra vared konid (khareji): ");
    scanf("%d",&ConvertionOut);
    printf("\nmizan masraf ineternet dakheli ra vared konid:");
    scanf("%d",&NetIn);
    printf("\nmizan masraf internet khareji ra vared konid: ");
    scanf("%d",&NetOut);
    for (int i = 1; i <=ConvertionIn ; i++) {
        for (int j = 1; j <=30 ; j++) {
            CIn+=150;
        }

    }
    for (int i = 1; i <=ConvertionOut ; i++) {
        for (int j = 1; j <=30 ; j++) {
            COut+=4000;
        }

    }
    for (int i = 1; i <=NetIn ; i++) {
        for (int j = 1; j <=30 ; j++) {
            NIn+=800;
        }

    }
    for (int i = 1; i <=NetOut ; i++) {
        for (int j = 1; j <=30 ; j++) {
            NOut+=1300;
        }

    }
    int sum=NOut+NIn+COut+CIn;
    printf("\nmablagh ghabz shoma : %d",sum);



    return 0;
}
