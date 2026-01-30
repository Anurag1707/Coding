class merge{

    static void mergeSort(int[] arr, int l, int r){

        if(l>=r) return;

        int mid=(l+r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        System.out.println(arr);
    }
   
    public static void main(String[] args) {
        
        int arr[]={4,8,2,6,4};
        mergeSort(arr, 0, arr.length-1);

    }
}