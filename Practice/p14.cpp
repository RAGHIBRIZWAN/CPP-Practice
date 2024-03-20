#include<iostream>
using namespace std;

class User;

class Comment{
protected:
    int commentId;
    string content;
    User* author;
public:
    Comment(){}
    Comment(const int &commentId,const string &content, const User* author):commentId(commentId),content(content),author(author){}
};

class Post{
protected:
    int postID;
    string content;
    Comment comments[3];

public:
    Post(){}
    Post(const int &postId, const string &content,const Comment &comm){
        this-> postID = postID;
        this-> content = content;
        for (int i = 0; i < 3; i++)
        {
            comments[i] = comm[i];
        }   
    }
};

class User{
protected:
    int userId;
    string userName;
    Post posts[3];

public:
    User(){}
    User(const int &userId, const string &userName,const Post &post){
        this-> userId = userId;
        this-> userName = userName;
        for (int i = 0; i < 3; i++)
        {
            posts[i] = post[i];
        }   
    }
};

class SocialMedia{
protected:
    User users[3];
public:
    User(const User &user){
        for (int i = 0; i < 3; i++)
        {
            users[i] = user[i];
        }
    }
};

int main(){

}
