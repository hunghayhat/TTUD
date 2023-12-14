#include <bits/stdc++.h>
using namespace std;
int loop;

int process()
{
  int count = 0;
  char c;
  int num;
  do
  {
    scanf("%c", &c);
    if (c == '\n')
      break;
    else if (c == ' ')
      count++;
    else if (c < 's')
      count += (c - 'a') % 3 + 1;
    else if (c == 's' || c == 'z')
      count += 4;
    else
      count += (c - 't') % 3 + 1;
  } while (true);
  return count;
}

int main()
{
  int result;
  cin >> loop;
  cin.ignore();
  for (int i = loop; i > 0; i--)
  {
    result = process();
    cout << "Case #" << loop - i + 1 << ": " << result << endl;
  }
  return 0;
}