
#include <iostream>
#include<vector>
#include<bits/stdc++.h>
#include<stack>
using namespace std;

class Node{
    
    public:
    int data;
    Node* next;
    
    Node(int val){
        data=val;
        next=NULL;
    }
};

void insert(Node* &head,int val){
    Node* n=new Node(val);
    if(head==NULL){
        head=n;
        return;
    }
    
    Node* temp=head;
    
    while(temp->next){
        temp=temp->next;
    }
    temp->next=n;
    
}

void display(Node*&head){
    
    if(head==NULL)return;
    
    Node* temp=head;
    
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


void oddEven(Node*&head){
    
    
    Node* od=new Node(-1);
    Node* odd=od;
    
    Node* ev=new Node(-1);
    Node* even=ev;
    
    
    Node* temp=head;
    
    while(temp){
        // Node* n=new Node(temp->data);
        if(temp->data%2==0){
            ev->next=temp;
            temp=temp->next;
            ev=ev->next;
            
             ev->next=NULL;
        }
        else{
            od->next=temp;
             temp=temp->next;
             od=od->next;
             od->next=NULL;
        }
        
    }
    
    od->next=even->next;
    
    display(odd->next);
}


Node* reverse(Node* head){
    
    Node* pre=NULL;
    Node* curr=head;
    Node* post;
    
    while(curr){
        post=curr->next;
        curr->next=pre;
        pre=curr;
        curr=post;
    }
    return pre;
}
void lastelement(Node* head,int k){
    
    Node* rev=reverse(head);
    
    while(rev!=NULL && k>1){
        rev=rev->next;
        k--;
    }
    
    cout<<rev->data<<endl;
}

Node* reversebyk(Node* head,int k){
    
    Node* pre=NULL;
    Node* curr=head;
    Node* post;
    int c=0;
    while(curr && c<k){
        post=curr->next;
        curr->next=pre;
        pre=curr;
        curr=post;
        c++;
        
    }
    
    if(post){
        head->next=reversebyk(post,k);
    }
    return pre;
}


void kreverse(Node* head,int k){
    
    Node* rev=reversebyk(head,k);
    
    display(rev);
}

// int main(){
//     Node* head=NULL;
    
//     while(true){
//         int x;
//         cin>>x;
//         if(x==-1)break;
        
//         insert(head,x);
//     }
//     int k;
//     cin>>k;
    
//     lastelement(head,k);
// }


Node* reverseBy(Node* head,int k,int n){
    
    Node* pre=NULL;
    Node* curr=head;
    Node* post;
    int c=0;
    while(curr && c<k){
        post=curr->next;
        curr->next=pre;
        pre=curr;
        curr=post;
        c++;
        
    }
    
    if(post){
        head->next=reversebyk(post,n-k);
    }
    return pre;
}

void append(Node* head,int k,int n){
    
    k=k%n;
    
    Node* a=reverseBy(head,n-k,n);
    Node* l=reverse(a);
    display(l);
}

Node* merge(Node* head1,Node* head2){
    
    if(head1==NULL && head2==NULL)return NULL;
    
    if(head1==NULL)return head2;
    
    if(head2==NULL)return head1;
    
    
    if(head1->data<=head2->data){
        head1->next=merge(head1->next,head2);
        return head1;
    }
    else{
        head2->next=merge(head1,head2->next);
        return head2;
    }
}

Node*deletel(Node*head){
    
    
    
    Node* head1=NULL;
    Node*temp=head;
    vector<int>v;
    while(temp){
        
       v.push_back(temp->data);
        
        temp=temp->next;
    }
    
   
    
     stack<int>s;
     s.push(-1);
     vector<int>ans;
     
     for(int i=v.size()-1;i>=0;i--){
         
         if(!s.empty() && s.top()!=-1 && v[s.top()]<=v[i]){
             s.pop();
         }
         
         ans.push_back(s.top());
         s.push(i);
     }
     
     reverse(ans.begin(),ans.end());
     
     
     Node* t=head;
     int i=0;
     while(t){
        //  cout<<an[i]<<endl;
         
         if(ans[i]==-1){
             insert(head1,t->data);
         }
         i++;
         t=t->next;
     }
     
    return head1;
}

Node* Add(Node* head1,Node*head2){
    
    Node* head=NULL;
    
    head1=reverse(head1);
    head2=reverse(head2);
    
    int carry=0;
    while(head1 && head2){
        
        int sum=head1->data+head2->data+carry;
        
        if(sum>9){
            carry=sum/9;
            sum=sum%10;
        }
        else{
            carry=0;
        }
        
        insert(head,sum);
        
        head1=head1->next;
        head2=head2->next;
    }
    
    while(head1){
        
        int sum=head1->data+carry;
        
        if(sum>9){
            carry=sum/9;
            sum=sum%10;
        }
        else{
            carry=0;
        }
        
        insert(head,sum);
        
        head1=head1->next;
        // head2=head2->next;
    }
    
    while(head2){
        
        int sum=head2->data+carry;
        
        if(sum>9){
            carry=sum/9;
            sum=sum%10;
        }
        else{
            carry=0;
        }
        
        insert(head,sum);
        
        head2=head2->next;
        // head2=head2->next;
    }
    
    if(carry)
    insert(head,carry);
    
   Node* rev= reverse(head);
   return rev;
}

void find(Node* head1,Node*head2,Node*head3,int k){
    
    unordered_map<int,int>mp1;
    // unordered_map<int,int>mp2;
    
    while(head1){
          
    Node* ha=head2;
    while(ha){
         
         Node* h=head3;
         
         while(h){
             
             int sum=ha->data+h->data+head1->data;
             
             if(sum==k){
                 cout<<head1->data<<" "<<ha->data<<" "<<h->data<<endl;
                 return;
             }
             h=h->next;
         }
         ha=ha->next;
    }
	head1=head1->next;
	}
}
int main()
{
      
        int n,m,c;
        cin>>n>>m>>c;
    
      Node* head1=NULL;
      Node* head2=NULL;
      Node* head3=NULL;
      

       for(int i=0;i<n;i++){
           int x;
           cin>>x;
           insert(head1,x);
         }
         
         for(int i=0;i<m;i++){
           int x;
           cin>>x;
           insert(head2,x);
         }
    
     for(int i=0;i<c;i++){
           int x;
           cin>>x;
           insert(head3,x);
         }
    int k;
    cin>>k;
      
      find(head1,head2,head3,k);
   
      
    
    

    return 0;
}
