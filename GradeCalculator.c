#include &lt;stdio.h&gt;
#include &lt;string.h&gt;
int main()
{
int Roll_No,Mark1,Mark2,Mark3;
float per;
char S_Name[20],Sub1[10],Sub2[10],Sub3[10];
printf(&quot;Enter the name of the student:\n&quot;);
scanf(&quot;%s&quot;, &amp;S_Name);
printf(&quot;Enter the Roll No. of the student:\n&quot;);
scanf(&quot;%d&quot;, &amp;Roll_No);
printf(&quot;Enter the names of subjects:\n&quot;);
scanf(&quot;%s%s%s&quot;, &amp;Sub1,&amp;Sub2,&amp;Sub3);
printf (&quot;Enter the marks obtained out of 100 in %s ,%s ,%s
respectively:\n&quot;,Sub1,Sub2,Sub3);
scanf(&quot;%d %d %d&quot;, &amp;Mark1, &amp;Mark2, &amp;Mark3);
per = (Mark1+Mark2+Mark3)/3;
printf(&quot;Marks and percentage obtained by %s with Roll No. %d are as follows-
\n&quot;,S_Name,Roll_No);
printf(&quot;%s :%d \n&quot;,Sub1,Mark1);
printf(&quot;%s :%d \n&quot;,Sub2,Mark2);
printf(&quot;%s :%d \n&quot;,Sub3,Mark3);
printf(&quot;Percentage: %.2f percent&quot;,per);
return 0;
}
