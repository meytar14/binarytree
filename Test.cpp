#include "doctest.h"
#include "BinaryTree.hpp"
using namespace std;
using namespace ariel;

TEST_CASE("BinaryTree")
{
    //build the tree
    BinaryTree<int> tree_of_ints;
    CHECK_NOTHROW(tree_of_ints.add_root(1));
    CHECK_NOTHROW(tree_of_ints.add_left(1, 9));
    CHECK_NOTHROW(tree_of_ints.add_left(9, 4));
    CHECK_NOTHROW(tree_of_ints.add_right(9, 5));
    CHECK_NOTHROW(tree_of_ints.add_right(1, 3));
    CHECK_NOTHROW(tree_of_ints.add_left(1, 2););


    BinaryTree<int> tree_of_ints2;
    CHECK_NOTHROW(tree_of_ints2.add_root(1));
    CHECK_NOTHROW(tree_of_ints2.add_left(1, 9));
    CHECK_NOTHROW(tree_of_ints2.add_left(9, 4));
    CHECK_NOTHROW(tree_of_ints2.add_right(9, 5));
    CHECK_NOTHROW(tree_of_ints2.add_right(1, 3));
    CHECK_NOTHROW(tree_of_ints2.add_left(1, 2););

    BinaryTree<int> tree_of_ints3;
    CHECK_NOTHROW(tree_of_ints3.add_root(1));
    CHECK_NOTHROW(tree_of_ints3.add_left(1, 9));
    CHECK_NOTHROW(tree_of_ints3.add_left(9, 4));
    CHECK_NOTHROW(tree_of_ints3.add_right(9, 5));
    CHECK_NOTHROW(tree_of_ints3.add_right(1, 3));
    CHECK_NOTHROW(tree_of_ints3.add_left(1, 2););

    BinaryTree<int> tree_of_ints4;
    CHECK_NOTHROW(tree_of_ints4.add_root(1));
    CHECK_NOTHROW(tree_of_ints4.add_left(1, 9));
    CHECK_NOTHROW(tree_of_ints4.add_left(9, 4));
    CHECK_NOTHROW(tree_of_ints4.add_right(9, 5));
    CHECK_NOTHROW(tree_of_ints4.add_right(1, 3));
    CHECK_NOTHROW(tree_of_ints4.add_left(1, 2););
    /* this is the tree:
        1
        |--------|
        2        3
        |---|
        4   5
    */
    
    // SUBCASE("preorder iterator")
    // {
    //     auto it=tree_of_ints.begin_preorder();
    //     CHECK_EQ(it->value,1);
    //     ++it;
    //     CHECK_EQ(it->value,2);
    //     ++it;
    //     CHECK_EQ(it->value,4);
    //     ++it;
    //     CHECK_EQ(it->value,5);
    //     ++it;
    //     CHECK_EQ(it->value,3);

    //     CHECK_EQ(tree_of_ints.end_preorder(),it);
    // }
    // SUBCASE("postorder iterator")
    // {
    //     auto it=tree_of_ints.begin_postorder();
    //     CHECK_EQ(it->value,4);
    //     ++it;
    //     CHECK_EQ(it->value,5);
    //     ++it;
    //     CHECK_EQ(it->value,2);
    //     ++it;
    //     CHECK_EQ(it->value,3);
    //     ++it;
    //     CHECK_EQ(it->value,1);
    //     CHECK_EQ(tree_of_ints.end_postorder(),it);
    // }
    // SUBCASE("inorder iterator")
    // {
    //     auto it=tree_of_ints.begin_inorder();
    //     CHECK_EQ(it->value,4);
    //     ++it;
    //     CHECK_EQ(it->value,2);
    //     ++it;
    //     CHECK_EQ(it->value,5);
    //     ++it;
    //     CHECK_EQ(it->value,1);
    //     ++it;
    //     CHECK_EQ(it->value,3);
    //     CHECK_EQ(tree_of_ints.end_inorder(),it);
    // }
}
