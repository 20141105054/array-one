//
//  main.cpp
//  array one
//
//  Created by 20141105054 on 15/12/16.
//  Copyright © 2015年 宋志远. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    int a[3]={1,2,3};
    printf("a[0]=%d  a[1]=%d a[2]=%d\n",a[0],a[1],a[2]);
    int b[4];
    printf("%x     %x\n",a,b);
    int i;
    for(i=1;i<10;i++)
    {
        b[i]=i;
    }
    
    printf("a[0]=%d   a[1]=%d    a[2]=%d\n",a[0],a[1],a[2]);
    printf("b[0]=%d   b[1]=%d    b[2]=%d\n",b[0],b[1],b[2]);
    return 0;
    
}
