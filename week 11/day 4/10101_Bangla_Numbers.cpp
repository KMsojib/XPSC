// #include<bits/stdc++.h>
// using namespace std;

//     void solve(long long int n){
//         bool f=false;
//         bool lk=false,hz=false,sh=false;
//         int kuti=0,lak=0,hazar=0,shata=0;
//         if(n>100000 && n<=999999999999999){
//             kuti = n/10000000;
//             n%=10000000;
//             if(kuti>=100000){
//                 f=true;
//             }
//         }
//         if(n>=100000 && n<=10000000){
//             lak=n/100000;
//             n%=100000;
//             lk=true;
//         }
//         if(n>100 && n<100000){
//             hazar=n/1000;
//             n%=1000;
//             hz=true;
//         }
//         if(n<1000){
//             shata = n/100;
//             n%=100;
//             sh =true;
//         }
//         if(f){
//             int l=kuti/100000;
//             kuti%=100000;
//             int h= kuti/1000;
//             kuti%=1000;
//             int s=kuti/100;
//             kuti%=100;
//         //cout<<"Kuti: "<<k<<" hazar: "<<h<<" shata: "<<s<<" least: "<<kuti<<endl;
//             cout<<l<<" lakh "<<h<<" hajar "<<s<<" shata "<<kuti<<" kuti "<<lak<<" lakh "<<hazar<<" hajar "<<shata<<" shata "<<n;
//         }
//     //cout<<"kuti: "<<kuti<<" "<<"Lak: "<<lak<<" :"<<"hazar: "<<hazar<<" shata: "<<shata<<" least: "<<n<<endl;
//         else if(lk && hz && sh){
//         cout<<lak<<" lakh "<<hazar<<" hajar "<<shata<<" shata "<<n;
//         }
//         else if(!lk && (hz && sh)){
//             //cout<<lak<<" lakh "<<hazar<<" hajar "<<shata<<" shata "<<n<<endl;
//             cout<<hazar<<" hajar "<<shata<<" shata "<<n;
//         }
//         else if((!lk && !hz) && sh){
//             cout<<shata<<" shata"<<n;
//         }
//     }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
//     long long a,kase=1;
//     while(cin>>a){
//         cout<<setw(4)<<kase++<<". ";
//         if(a){
//             solve(a);
//         }
//         else{
//             cout<<" 0";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// // /*
// // 23764
// // 45897458973958

// // 23 hajar 7 shata 64
// // 45 lakh 89 hajar 7 shata 45 kuti 89 lakh 73 hajar 9 shata 58
// // */
// #include<bits/stdc++.h>
// using namespace std;

// void Taka_is_taka(long long int n){
//     if(n>=10000000){
//         Taka_is_taka(n/10000000);
//         cout<<" kuti";
//         n%=10000000;
//     }
//     if(n>=100000){
//         Taka_is_taka(n/100000);
//         cout<<" lakh";
//         n%=100000;
//     }
//     if(n>=1000){
//         Taka_is_taka(n/1000);
//         cout<<" hajar";
//         n%=1000;
//     }
//     if(n>=100){
//         Taka_is_taka(n/100);
//         cout<<" shata";
//         n%=100;
//     }
//     if(n){
//         cout<<" "<<n;
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
//     long long int n;
//     int Case
//     while(scanf("%lld",&n)!=EOF){
//         printf ("%4d.",Case++);
//         //base case
//         if(n==0){
//             cout<<" 0";
//         }
//         Taka_is_taka(n);
//         cout<<endl;
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
void num(long long n){
    if(n>=10000000){
        num(n/10000000);
        cout<<" kuti";
        n%=10000000;
    }
    if(n>=100000){
        num(n/100000);
        cout<<" lakh";
        n%=100000;
    }
    if(n>=1000){
        num(n/1000);
        cout<<" hajar";
        n%=1000;
    }
    if(n>=100){
        num(n/100);
        cout<<" shata";
        n%=100;
    }
    if(n){
        cout<<" "<<n;
    }
}
int main(){
    long long a,kase=1;
    while(cin>>a){
        cout<<setw(4)<<kase++<<".";
        if(a){
            num(a);
        }
        else{
            cout<<" 0";
        }
        cout<<endl;
    }
}