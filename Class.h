class VideoADT {
private:
    int video_id;
    string movie_title;
    string genre;
    string production;
    int num_copies;
    string image_filename;

public:
    VideoADT();

    void insert_video();
    void rent_video();
    void return_video();
    void show_details();
    void display_all_videos();
    void check_video_availability();
};
