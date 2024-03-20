#include<iostream>
#include<string>

using namespace std;

class User;

class Comment {
public:
    int commentId;
    string content;
    const User* author; 
public:
    Comment() {}
    Comment(const int &commentId, const string &content, const User* author) : commentId(commentId), content(content), author(author) {}
};


class Post {
public:
    static const int count = 5;
    int postID;
    string content;
    Comment comments[count];
    int commentCount;

public:
    Post() : commentCount(0) {}
    Post(const int &postId, const string &content) : postID(postId), content(content), commentCount(0) {}

    void AddNew(const Comment& value) {
        if (commentCount < count) {
            comments[commentCount++] = value;
        }
    }
};

class User {
public:
    static const int count = 5;
    int userId;
    string userName;
    Post posts[count];
    int postCount;

public:
    User() : postCount(0) {}
    User(const int &userId, const string &userName) : userId(userId), userName(userName), postCount(0) {}

    void CreateNew(const Post& value) {
        if (postCount < count) {
            posts[postCount++] = value;
        }
    }

    void display() {
        for (int i = 0; i < postCount; ++i) {
            cout << posts[i].content << endl;
        }
    }
};

class SocialMedia {
public:
    static const int count = 5;
    User users[count];
    int userCount;

public:
    SocialMedia() : userCount(0) {}

    void RegisterNew(const User& value) {
        if (userCount < count) {
            users[userCount++] = value;
        }
    }
};

int main() {
    User user(1, "Alice");
    Post post(1, "Hello, World!");
    Comment comment(1, "Nice post!", &user);

    user.CreateNew(post);
    post.AddNew(comment);

    SocialMedia socialMedia;
    socialMedia.RegisterNew(user);

    user.display();

    return 0;
}
