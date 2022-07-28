#include <stdio.h>

int main()
{
    printf("%d \n",555);                        // 555
    printf("/%d/ \n",555);                      // /555/ 
    printf("/%10d/ \n",555);                    //        555
    printf("/%-10d/ \n",555);                   // 555
    printf("/%010d/ \n\n",555);                 // 0000000555

    printf("/%f/ \n",8192.1978);                // 8192.197800
    printf("/%13f/ \n",8192.1978);              //          8192.197800
    printf("/%*.*f/ \n",13,2,8192.1978);        // = 13.2f 자리수를 변수로 사용가능
    printf("/%13.2f/ \n",8192.1978);            //          8192.20
    printf("/%-13.2f/ \n\n",8192.1978);         // 8192.20
        
    printf("%c %d %c %d \n",'A','A',97,97);     // A 65 a 97
    printf("%s \n", "C Language...");           // C Language...       
    printf("%5s\n", "C Language...");           // C Language... 넘는건 다찍어, 자리수 남으면 정렬
    printf("%.5s \n\n", "C Language...");       // C Lan
    // 67은 10진수 067은 8진수 0x67은 16진수
    printf("%d %o %x \n",67,67,67);             // 67 103 43  
    printf("%d %#o %#x \n",067,067,067);        // 55 067 0x37
    printf("%d %#o %#x \n",0x67,0x67,0x67);     // 103 0147 0x67
    //#과 함께 표기하면 진수를 반영하여 표기해준다

	printf("%x, %#10x, %#010x \n\n", 0x1234, 0x1234, 0x1234); 

	 return 0 ;
}

