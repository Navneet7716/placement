#include<bits/stdc++.h>
#define ll long long int

using namespace std;
void solve();

ll gcd(ll a,ll b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 

ll lcm(ll a,ll b)
{
    return (a / __gcd(a, b)) * b;
}

void powerset(string a, int index = 0, string curr = "") {

  int n = a.size();

  if (index == n) {

    cout << curr << '\n';

    return;

  }

  powerset(a, index + 1,curr + a[index]);
  powerset(a, index+ 1, curr);



}


class Node {

public:
  int data;
  Node *next;

};

void append(Node **head, int data) {

  Node *temp = new Node();

  temp -> data = data;
  temp -> next = NULL;

  if (*head == NULL) {
    *head = temp;
    return;
  }

  Node *p = *head;

  while(p->next != NULL) {

    p = p->next;

  }

  p->next = temp;
  return;

}



int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
  
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("error.txt", "w", stderr);
   freopen("output.txt", "w", stdout);
   #endif
   
   int t=1;
   cin>>t;
   while(t--)
   {
      solve();
   }
   
   cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
   return 0;
}


void solve()
{

   int n;
   cin >> n;

   int a[n];
   for (int i=0;i<n;i++) cin>>a[i];

   string s;
   cin >> s;

   vector<pair<int,char>> v;

   for (int i =0;i<n;i++) {
    v.push_back({a[i], s[i]})
   }
   sort(v.begin(), v.end());

   vector<int> ans(n,0);

   int l = 0;

   for (auto i:v) {
    i.first
   }

    for (int i:a) cout << i << " ";

    cout << "\n";
  
  
}
