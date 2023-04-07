int maxArea(int* height, int heightSize){
    int pos=0, area=0;
    for(int i=0; i<heightSize; i++){
        if(height[i]>=height[pos]){
            pos=i;
        }
    }
    for(int i=0; i<heightSize; i++){
        if(i==pos){
            continue;
        }
        int j=0,d,a;
        int k=heightSize-1;
        while(height[j]<height[i]||i==j){
            j=j+1;
        }
        while(height[k]<height[i]||i==k){
            k=k-1;
        }
        j=i-j; if(j<0){j=-1*j;}
        k=k-i; if(k<0){k=-1*k;}
        if(j>=k){d=j;}else{d=k;}
        a=d*height[i];
        if(a>area){area=a;}
    }
    return area;
}
