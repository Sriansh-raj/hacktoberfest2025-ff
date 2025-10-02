class Solution {
    public int partitionString(String s) {
        HashSet<Character> has = new HashSet<>();
        int count = 0;
        for(int i = 0 ; i < s.length(); i ++){
            if(has.contains(s.charAt(i))){
                count++;
                has.clear();
            }
            has.add(s.charAt(i));
        }
        return count+1;
    }
}
