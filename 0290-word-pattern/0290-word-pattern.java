class Solution {
    public boolean wordPattern(String pattern, String s) {
        String [] words=s.split(" ");
        if(words.length !=pattern.length()){
            return false;
        }

        Map<Character,String> CTW=new HashMap<>();
        Map<String,Character> WTC=new HashMap<>();

        for(int i=0;i<pattern.length();i++){
            char C=pattern.charAt(i);
            String word=words[i];

            if(!CTW.containsKey(C)){
                CTW.put(C,word);
            }

            if(!WTC.containsKey(word)){
                WTC.put(word,C);
            }

            if(!CTW.get(C).equals(word)||!WTC.get(word).equals(C)){
                return false;
            }
        }
        return true;

    }
}