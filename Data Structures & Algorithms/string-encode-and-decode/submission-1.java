class Solution {

    public String encode(List<String> strs) {
       String s="";
       for(int i=0;i<strs.size();i++)
       {
        s+=strs.get(i);
        
        s += Integer.toString(184);
       }
   return s;
    }

    public List<String> decode(String str) {
            
        List<String> list=new ArrayList<>();
        String s="";
        for(int i=0;i<str.length()-2;i++)
        {
            char ch=str.charAt(i);
            String check=str.substring(i,i+3);
if (check.equals("184")) {        
            list.add(s);
            i+=2;
                s="";
            }
            else s+=ch;
        }

        return list;
    }
}
