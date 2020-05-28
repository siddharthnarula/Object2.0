 #include<fstream>
       #include<iostream>
       using namespace std;

     int main()
       {      fstream f;
              char ch;
              int count=0;
              f.open("file.txt",ios::in);
              while(!f.eof())
              {      f.get(ch);
                     if(ch == ' ')
                     count++;}
              f.close();
              cout << "\nTotal blank spaces : " << count;
            cout << "\nTotal Words : " << 2+count;}
