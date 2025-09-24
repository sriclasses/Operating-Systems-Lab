#include "types.h"
#include "user.h"
#include "stat.h"

void clear_screen()
{
   // This is a simple way to clear the screen by printing many newlines

   printf(1, "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}

int main(int argc, char *argv[])
{

   char frame1[] = "\n\
      ROFL:ROFL:ROFL:ROFL\n\
    	 ___^___ _\n\
 L    __/      [] \\\n\
 LOL===__           \\\n\
 L      \\___ ___ ___]\n\
            I   I\n\
	      ----------/\n\n";

   char frame2[] = "\n\
            :          \n\
    	 ___^___ _\n\
 .    __/      [] \\\n\
 L..===__           \\\n\
 .      \\___ ___ ___]\n\
            I   I\n\
	      ----------/\n\n";

   int cur_frame = 1;
   while (1)
   {
      clear_screen();
      if (cur_frame == 1)
      {
         printf(1, frame1);
         // printf(1, frame1);
         cur_frame++;
         sleep(15);
      }
      else if (cur_frame == 2)
      {
         printf(1, frame2);
         // printf(1, frame2);
         cur_frame = 1;
         sleep(15);
      }
      else if (cur_frame == 3)
      {
         printf(1, frame1);
         // printf(1, frame3);
         cur_frame++;
         sleep(15);
      }
      else if (cur_frame == 4)
      {
         printf(1, frame2);
         // printf(1, frame4);
         cur_frame = 1;
         sleep(200);
      }
      // printf(1, bababa);
      //  static char buf[5000];
      //  banana((void *)buf, 5000);
      //  printf(1, "+s", buf);
   }

   exit();
}
