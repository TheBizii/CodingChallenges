# Upvotes vs Downvotes

Given a dictionary containing counts of both upvotes and downvotes, return what vote count should be displayed. This is calculated by subtracting the number of downvotes from upvotes.

## Examples

```C++
map<string, int> votes1 {{ "upvotes", 13 }, { "downvotes", 0 }};
get_vote_count(votes1) == 13;

map<string, int> votes2 {{ "upvotes", 2 }, { "downvotes", 33 }};
get_vote_count(votes2) == -31;

map<string, int> votes3 {{ "upvotes", 132 }, { "downvotes", 132 }};
get_vote_count(votes3) == 0;
```

## Notes

You can expect only positive integer for vote counts.
