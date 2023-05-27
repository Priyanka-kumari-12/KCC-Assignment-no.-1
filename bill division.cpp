void bonAppetit(vector<int> bill, int k, int b) {
    int sum=0;
    for(int i=0;i<bill.size();i++){
        
        sum+=bill[i];
    }
      
      if(sum<=b){
          cout<<"Bon Appetit";
      }
      if(b>sum){
          int re=b-sum;
          cout<<re;
      }
}
