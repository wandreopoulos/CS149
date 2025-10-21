  #include<stdio.h>
  #include<stdlib.h>

  int main()
  {
      int *ptr;
      *ptr = 10;
      *ptr = 20;
    printf("location of ptr in stack : %p\n", (void *) &ptr);
    printf("location where ptr points to supposedly in heap : %p\n", (void *) ptr);

      printf("%d\n",*ptr);
      return 0;
  }
