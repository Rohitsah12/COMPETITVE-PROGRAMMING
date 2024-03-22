def restore_original_song(song_remix):
    words = song_remix.split("WUB")
    original_song = filter(lambda x: x != '', words)
    return ' '.join(original_song)

song_remix = input().strip()
original_song = restore_original_song(song_remix)
print(original_song)
