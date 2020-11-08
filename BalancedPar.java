import java.util.*;
class BalancedPar
{
    public static void main(String args[]){
    Stack<Character> st=new Stack<Character>();
    Scanner sc=new Scanner(System.in);
    String s=sc.nextLine();
    char exp[]=s.toCharArray();
    int flag=0;
    for(int i=0;i<exp.length;i++)
    {
        if(exp[i]=='(' || exp[i]== '{' || exp[i]=='[')
        {
            st.push(exp[i]);
        }
        else if(exp[i]==')' || exp[i]==']' || exp[i]=='}')
        {
            if(st.isEmpty())
            {
                flag=1;
                System.out.println("stack underflow!!!\n");
            }
            else{
                char c=st.pop();
            }
        }
    }
    if(st.isEmpty() && flag!=1)
    {
        System.out.println("balanced");

    }
    else
    {
        System.out.println("not balanced");
    }
    sc.close();
}

}