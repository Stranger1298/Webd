public class day1 {
    public String solve(String A) {
        String[] split = A.trim().split("\\s+");
        String res = "";
        for (int i = split.length - 1; i >= 0; i--) {
            res += split[i] + " ";
        }
        return res.substring(0, res.length() - 1);
    }
}