ll n = z(), sum = 0;
string x; 
cin >> x;
for (ll i = 0; i < n - 1; i++) {
  if (x[i] == 'B' && x[i + 1] == 'W')sum++;
}
if (x[n - 1] == 'B')sum++;
cout << sum << endl;
sum = 0;
for (ll i = 0; i < n; i++) {
  if (x[i] == 'B')sum++;
  if((x[i]=='W'||i==n-1)&&sum>0) {
    cout << sum << ' ';
    sum = 0;
  }
}
}