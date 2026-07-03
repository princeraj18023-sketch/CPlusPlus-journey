#include<iostream>
using namespace std;
#include <iostream>
using namespace std;
class PR
{
protected:
    string title;
    float rating;

public:
    PR(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void Display() = 0;
};
class PRVideo : public PR
{
    float videoLength;

public:
    PRVideo(string s, float r, float vL) : PR(s, r)
    {
        videoLength = vL;
    }
    void Display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is: " << videoLength << " minutes " << endl;
    }
};
class PRText : public PR 
{
    int words;

public:
    PRText(string s, float r, int wc) : PR(s, r)
    {
        words = wc;
    }
    void Display()
    {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Rating of this text tutorial: " << rating << " out of 5 stars" << endl;
        cout << "Number of words in this Text tutorial is: " << words << " words " << endl;
    }
};
int main()
{
    string title;
    float rating, vl;
    int words;

    title ="SKalgo tutorial";
    vl = 4.56;
    rating = 4.89;
    PRVideo SKVideo(title, rating, vl);
    

    title ="SKalgo tutorial Text";
    words = 344;
    rating = 4.19;
    PRText SKText(title, rating, words);
    SKText.Display();

    PR* tuts[2];
    tuts[0] = &SKVideo;
    tuts[1] = &SKText;

    tuts[0]->Display();
    tuts[1]->Display();
    return 0;
}
