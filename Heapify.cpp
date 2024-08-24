#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int>&vec,int index,int n){
  int largest = index;
  int left = 2*index+1;
  int right = 2*index+2;

  if(left<n && vec[largest]<vec[left]){
    largest = left;
  }

  if(right<n && vec[largest]<vec[right]){
    largest = right;
  }

  if(largest != index){
    swap(vec[largest],vec[index]);
    heapify(vec,largest,n);
  }
}

int main(){
  int n;
  cin>>n;
  vector<int>vec(n,0);
  for(int i=0;i<n;i++){
    cout<<"enter the number for heap ";
    cin>>vec[i];
  }
  for(int i=(n/2)-1;i>=0;i--){
    heapify(vec,i,n);
  }

  for(int i=0;i<vec.size();i++){
    cout<<vec[i]<<" ";
  }
}
