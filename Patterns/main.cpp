#include <iostream>
using namespace std;
#include <math.h>

int main() {

  // to print hollow square
  for (int row = 0; row < 3; row++) {
    for (int col = 0; col < 5; col++) {
      if (row==0 || row==2) {
        cout << "* ";
      } else {
        if (col == 0 || col == 4) {
          cout << "* ";
        } else {
          cout << "  ";
        }
      }
    }
    cout << endl << endl;
  }

  // to print half pyramid
  int ROW = 10;
  for (int row = 0; row < ROW; row++) {
    for (int col=0; col < row+1; col++) {
      cout << "* ";
    } 
    cout << endl;
  }

  cout << endl;

  // to print inverted half pyramid
  int n = 10;
  for (int row = 0; row < n; row++) {
    for (int col=0; col < n - row; col++) {
      cout << "* ";
    } 
    cout << endl;
  }

  // to print numeric half pyramid
  int a = 5;
  for (int row=0; row < a; row++) {
    for (int col=0; col < row+1; col++) {
      cout << col+1 << " ";
    }
    cout << endl;
  }

  // to print inverted numeric half pyramid
  int b = 5;
  for (int row=0; row < b; row++) {
    for (int col=0; col < b-row; col++) {
      cout << col+1 << " ";
    }
    cout << endl;
  }
  
  // FULL PYRAMID
  int k = 5;
  for (int row=0; row < k; row++) {
    // spaces print
    for (int col=0; col < k-row-1; col++) {
      cout << " ";
    }
    /// stars and spaces print
    for(int col=0; col<row+1; col++) {
      cout << "* ";
    }
    cout << endl;
  }

  cout << endl;
  // INVERTED FULL PYRAMID
  int l = 5;
  for (int row=0; row < l; row++) {
    // spaces print
    for (int col=0; col < row; col++) {
      cout << " ";
    }
    /// stars and spaces print
    for(int col=0; col<l-row; col++) {
      cout << "* ";
    }
    cout << endl;
  }

  cout << endl;
  // HOLLOW PYRAMID
  int m = 5;
  for (int row = 0; row < m; row++) {
    // spaces print
    for (int col = 0; col < m - row - 1; col++) {
      cout << " ";
    }
    /// stars and spaces print
    for (int col = 0; col < row + 1; col++) {
      if (col == 0 || col == row) {
        cout << "* ";
      } else {
        cout << "  ";
      }
    }
    cout << endl;
  }

  cout << endl;
  // INVERTED HOLLOW PYRAMID
  int s = 5;
  for (int row=0; row < s; row++) {
    // spaces print
    for (int col=0; col < row; col++) {
      cout << " ";
    }
    /// stars and spaces print
    for(int col=0; col<s-row; col++) {
      if (col == 0 || col == s-row-1) {
        cout << "* ";
      } else {
        cout << "  ";
      }
    }
    cout << endl;
  }

  cout << endl;
  // INVERTED HOLLOW PYRAMID - 2
  int z = 5;
  for (int row=0; row < z; row++) {
    // spaces print
    for (int col=0; col < row; col++) {
      cout << " ";
    }
    /// stars and spaces print
    for(int col=0; col<2*z-2*row-1; col++) {
      if (col == 0 || col == z-row-1) {
        cout << "* ";
      } else {
        cout << "  ";
      }
    }
    cout << endl;
  }

  cout << endl;
  // HOLLOW DIAMOND
  int x = 5;
  for (int row = 0; row < x; row++) {
    // spaces print
    for (int col = 0; col < x - row - 1; col++) {
      cout << " ";
    }
    /// stars and spaces print
    for (int col = 0; col < row + 1; col++) {
      if (col == 0 || col == row) {
        cout << "* ";
      } else {
        cout << "  ";
      }
    }
    cout << endl;
  }
  
  // INVERTED HOLLOW PYRAMID
  for (int row=0; row < x; row++) {
    // spaces print
    for (int col=0; col < row; col++) {
      cout << " ";
    }
    /// stars and spaces print
    for(int col=0; col<x-row; col++) {
      if (col == 0 || col == x-row-1) {
        cout << "* ";
      } else {
        cout << "  ";
      }
    }
    cout << endl;
  }

  cout << endl; 
  
  // FLIPPED SOLID DIAMOND
  int fsd = 8;
  int g = fsd/2;
  // Upper part
  for (int row=0; row < g; row++) {
    // Inverted pyramid 1
    for (int col=0; col < g-row; col++)
      cout << "* ";
    // Full pyramid 1
    for (int col=0; col < 2*row+1; col++)
      cout << "  ";
    // Inverted pyramid 2
    for (int col=0; col < g-row; col++)
      cout << "* ";
    cout << endl;
  }

  // Lower part
  for (int row=0; row < g; row++) {
    // Inverted pyramid 1
    for (int col=0; col < row+1; col++)
      cout << "* ";
    // Inverted full pyramid 1
    for (int col=0; col < 2*g-2*row-1; col++)
      cout << "  ";
    // Inverted pyramid 2
    for (int col=0; col < row+1; col++)
      cout << "* ";
    cout << endl;
  }

  cout << endl;

  // FANCY PATTERN #1
  int fancy = 4;
  for (int r=0; r<fancy; r++){
    for (int c=0; c<2*r+1; c++){
      if(c%2==0)
        cout << r + 1 << " ";
      else
        cout << "* ";
    }
    cout << endl;
  }

  // FANCY PATTERN #2
  int fancy2 = 3;
  for (int r=0; r<fancy2; r++){
    for (int c=0; c<2*fancy2-2*r-1; c++){
      if(c%2==0)
        cout << fancy2 - r << " ";
      else
        cout << "* ";
    }
    cout << endl;
  }

  cout << endl;
  // FANCY PATTERN #3
  int f3 = 10;
  for (int r=0; r<f3; r++) {
    for (int c=0; c<f3-r; c++) {
      if (r==0 || r==f3-1)
        cout << "*";
      else {
        if (c==0 || c==f3-r-1)
          cout << "*";
        else
          cout << " ";
      }
    }
    cout << endl;
  }

  cout <<endl;
  // FANCY PATTERN #4
  int f4 = 5;
  cout << 1 << endl;
  for (int r=1; r<f4-1; r++) {
    for (int c=0; c<r+2; c++) {
      if (c==0)
        cout << 1;
      else if(c==r+2-1)
        cout << r+1;
      else
        cout << " ";
    }
    cout << endl;
  }
  for (int r=1; r<f4+1; r++)
    cout << r;
  cout << endl;

  // FANCY PATTERN #5
  int f5 = 5;
  char c1;
  for (int r=0; r<f5; r++) {
    for (int c=0; c<r+1; c++) {
      c1 = 'A' + c;
      cout << c1; 
    }
    for (char c=c1-1; c>='A'; c--) {
      cout << c;
    }
    cout << endl;
  }

  // NUMERIC HOLLOW INVERTED HALF PYRAMID
  cout << endl;
  cout << "NUMERIC HOLLOW INVERTED HALF PYRAMID" << endl;
  int nhi = 5;
  for(int r=0; r<nhi; r++){
    for(int c=0; c<nhi-r; c++) {
      if (r==0)
        cout << c+1 << " ";
      else {
        if (c==0) {
          cout << r+1 << " ";
        }
        else if (c==nhi-r-1)
          cout << nhi << " ";
        else 
          cout << "  ";
        }
    }
    cout << endl;
  }

  cout << endl;

  // NUMERIC PALINDROME EQUILATERAL PYRAMID
  int np = 5;
  for (int i=0; i<np; i++){
    // for spaces
    for (int j=0; j<np-i-1; j++)
      cout << "  ";
    // for numbers
    int n;
    for (int j=0; j<i+1; j++) {
      cout << j+1 << " ";
      n = j;
    }
    for(int k = n; k>0; k--) {
      cout << k << " ";
    }
    cout << endl;
  }

  cout << endl;
  // FANCY PATTERN #6
  int f6 = 5;
  for(int r=0; r<f6; r++) {
    for(int c=0; c<2*f6-r-2; c++)
      cout << "* ";
    for(int c=0; c<2*r+1; c++) {
      if (c%2==0) 
        cout << r+1 << " ";
      else
        cout << "* ";
    }
    for(int c=0; c<2*f6-r-2; c++)
      cout << "* ";
    cout << endl;
  }

  cout << endl;
  // SOLID HALF DIAMOND
  // REDO THIS
  cout << "SOLID HALF DIAMOND" << endl;
  int d = 8;
  int mid=0;
  if (d%2==0)
    mid = d/2;
  else 
    mid = d/2+1;
  for(int r=0; r<mid; r++) {
    for(int c=0; c<r+1; c++)
      cout << "* ";
    cout << endl;
  }
  for(int r=0; r< d/2; r++) {
    for(int c=0; c<d/2-r; c++)
      cout << "* ";
    cout << endl;
  }

  cout << endl;
  // FLOYD TRIANGLE
  int o = 6;
  int count = 1;
  for (int r=0; r < o; r++) {
    for (int c=0; c < r+1; c++) {
      cout << count << " ";
      count++;
    }
    cout << endl;
  }

  // BUTTERFLY PATTERN
  int bp = 10;
  int sq = bp/2;

  for (int r=0; r<sq; r++) {
    for (int c=0; c<r+1; c++)
      cout << "* ";
    for (int c=0; c<2*sq-2*r-2; c++) 
      cout << "  ";
    for (int c=0; c<r+1; c++)
      cout << "* ";
    cout << endl;
  }

  for (int r=0; r<sq; r++) {
    for (int c=0; c<sq-r; c++)
      cout << "* ";
    for (int c=0; c<2*r; c++)
      cout << "  ";
    for (int c=0; c<sq-r; c++)
      cout << "* ";
    cout << endl;
  }
}