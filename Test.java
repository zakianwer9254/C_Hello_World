import java.io.*;


public class Justin{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws IOException, NumberFormatException{
        String nmq[] = br.readLine().split(" ");
        int n = Integer.parseInt(nmq[0]);
        int m = Integer.parseInt(nmq[1]);
        int k = Integer.parseInt(nmq[2]);

        int a[] = new int[n];


            String line[] = br.readLine().split(" ");
            for(int j=0; j<n; j++){
                a[j]=Integer.parseInt(line[j]);
            }


        for(int i=0; i<m; i++){
            solve(a,n,k);
        }



    }

    static void solve(int a[],int n, int k) throws IOException, NumberFormatException{
        String ll[]= br.readLine().split(" ");
        int l = Integer.parseInt(ll[0]);
        int r = Integer.parseInt(ll[1]);
        int count=0;
        for(int i=l-1; i<r; i++){
            int xor=0;
            for(int j=i; j<r; j++){

                    xor=xor^a[j];
                    //System.out.println("a[i] & xor :"+a[j]+" "+xor);
                    if(xor==k){
                        count++;
                    }

            }

        }

        System.out.println(count);




    }


}
