#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel{
private:
    string Name;
    string OwnerName;
    int SubscriberCount;
    list<string>PublishedVideoTitles;
public:
    YoutubeChannel(string name,string ownerName){
        Name = name;
        OwnerName = ownerName;
        SubscriberCount = 0;
    }
    void GetInfo(){
        cout << "Name: " << Name <<endl;
        cout << "Owner Name: " << OwnerName <<endl;
        cout << "Number of Subscribers: " << SubscriberCount <<endl;
    }
    void Subcribe(){
        SubscriberCount++;
    }
    void Unsubscribe(){
        if(SubscriberCount!=0){
                SubscriberCount--;
        }

    }
    void setName(string n){
        Name = n;
    }
    string getName(){
        return Name;
    }
    void PublishVideo(string v){
        PublishedVideoTitles.push_back(v);
    }
    };

int main(){
    YoutubeChannel ytChannel("simondelali", "Simon Delali");
    ytChannel.PublishVideo("Black List");
    ytChannel.PublishVideo("Money Heist");
    ytChannel.Unsubscribe();

    for(int i = 0; i<20; i++){
        ytChannel.Subcribe();
    }
    ytChannel.GetInfo();

    return 0;

}

